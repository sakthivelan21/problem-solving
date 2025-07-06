package main

import (
	"container/heap"
	"fmt"
)

// An Item is something we manage in a priority queue.
type Item struct {
	value    string
	priority int
	index    int // The index of the item in the heap.
}

// A PriorityQueue implements heap.Interface and holds Items.
type PriorityQueue []*Item

func (pq PriorityQueue) Len() int { return len(pq) }
func (pq PriorityQueue) Less(i, j int) bool {
	// We want a min-heap based on priority.
	return pq[i].priority < pq[j].priority
}
func (pq PriorityQueue) Swap(i, j int) {
	pq[i], pq[j] = pq[j], pq[i]
	pq[i].index = i
	pq[j].index = j
}

func (pq *PriorityQueue) Push(x interface{}) {
	n := len(*pq)
	item := x.(*Item)
	item.index = n
	*pq = append(*pq, item)
}

func (pq *PriorityQueue) Pop() interface{} {
	old := *pq
	n := len(old)
	item := old[n-1]
	item.index = -1 // for safety
	*pq = old[0 : n-1]
	return item
}

// Update modifies the priority and reorders the heap.
func (pq *PriorityQueue) update(item *Item, value string, priority int) {
	item.value = value
	item.priority = priority
	heap.Fix(pq, item.index)
}

func main() {
	pq := make(PriorityQueue, 0)
	heap.Init(&pq)

	item1 := &Item{value: "task1", priority: 3}
	item2 := &Item{value: "task2", priority: 2}
	item3 := &Item{value: "task3", priority: 1}

	heap.Push(&pq, item1)
	heap.Push(&pq, item2)
	heap.Push(&pq, item3)

	fmt.Println("Min item:", pq[0].value)

	// Change task3's priority to 1
	pq.update(item3, item3.value, 5)

	fmt.Println("Min item after update:", pq[0].value)

	// Remove task2
	// heap.Remove(&pq, item2.index)

	fmt.Println("Remaining items:")
	for pq.Len() > 0 {
		item := heap.Pop(&pq).(*Item)
		fmt.Printf(" - %s (priority %d)\n", item.value, item.priority)
	}
}
