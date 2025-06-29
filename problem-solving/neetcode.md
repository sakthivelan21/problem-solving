### NeetCode Problem Solving Guide

#### Stack 

1. [LeetCode 155 - Min Stack Problem](https://leetcode.com/problems/min-stack/)

    * solve by storing the stack as a linked list and keeping track of the minimum value at each node.
   
2. [LeetCode 20 - Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)

    * solve by using a stack to keep track of opening parentheses and checking for matching closing parentheses.

3. [Leetcode 150 - Reverse Polish Notation](https://leetcode.com/problems/evaluate-reverse-polish-notation/)

    * solve by using a stack to evaluate the expression in reverse Polish notation.

4. [Leetcode 739 - Daily Temperatures](https://leetcode.com/problems/daily-temperatures/)

    * from reverse keep track of the index of the last temperature that was higher than the current temperature.

    * whenever stack hold temperature less than current temperature, pop it , only use stack.top to compare and calculate the difference.

5. [Leetcode 22 - Generate Parentheses](https://leetcode.com/problems/generate-parentheses/)

    * solve by using a stack to keep track of the number of opening and closing parentheses. in dfs

6. [84. Largest Rectangle in Histogram](https://leetcode.com/problems/largest-rectangle-in-histogram/)

    * solve by using a stack to keep track of the indices of the bars in the histogram. 

    * whenever we encounter a bar that is greater than the current value, we pop the stack and calculate the area of the rectangle formed by the popped bar.

    * we also keep track of the index of the last popped bar to calculate the width of the rectangle.

### Linked List

1. [LeetCode 206 - Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)

    * solve by iterating through the linked list and reversing the pointers of each node.
2. [Leetcode 21 - Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)

    * solve by iterating through both linked lists and merging them into a new linked list in sorted order.

3. [Leetcode 141 - Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/)

    * solve by using the two-pointer technique (Floyd's cycle-finding algorithm) to detect if there is a cycle in the linked list.

4. [Leetcode 143 - Reorder List](https://leetcode.com/problems/reorder-list/)

    * solve by finding the middle of the linked list, reversing the second half, and then merging the two halves.

5. [Leetcode 2 - Add Two Numbers](https://leetcode.com/problems/add-two-numbers/)

    * solve by iterating through both linked lists and adding the corresponding digits, taking care of carry-over.

6. [Leetcode 23 - Merge K Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists/)

    * solve by using a priority queue (min-heap) to merge k sorted linked lists into one sorted linked list.

7. [Leetcode 19 - Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)

    * solve by using the two-pointer technique to find the nth node from the end of the linked list and remove it.

8. [Leetcode 25. Reverse Nodes in k-Group](https://leetcode.com/problems/reverse-nodes-in-k-group/)

    * solve by iterating through the linked list in groups of k nodes, reversing each group, and then linking them together.

9. [Leetcode 146 - LRU Cache](https://leetcode.com/problems/lru-cache/)

    * solve by using a combination of a doubly linked list and a hash map to implement the LRU cache.

10. [Leetcode 138 - Copy List with Random Pointer](https://leetcode.com/problems/copy-list-with-random-pointer/)

    * solve by using a hash map to keep track of the mapping between the original nodes and the copied nodes, or by using the next pointer to create a copy of the linked list in place.