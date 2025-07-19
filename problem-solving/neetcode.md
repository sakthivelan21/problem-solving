### NeetCode Problem Solving Guide

#### Two Sum 

1. [LeetCode 1 - Two Sum](https://leetcode.com/problems/two-sum/)

    * solve by using a hash map to store the indices of the numbers and checking if the complement exists in the map.

2. [Leetcode 1865. Finding Pairs With a Certain Sum](https://leetcode.com/problems/finding-pairs-with-a-certain-sum/)

    * solve by using a hash map to store the frequency of each number and checking if the complement exists in the map.

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

11. [Leetcode 2130 - Maximum Twin Sum of a Linked List](https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/)

    * solve by finding the middle of the linked list, reversing the second half, and then calculating the maximum twin sum by iterating through both halves.

12. [Leetcode 142 - Linked List Cycle II](https://leetcode.com/problems/linked-list-cycle-ii/)

    * solve by using the two-pointer technique to find the starting node of the cycle in the linked list.

13. [Leetcode 707 - Design Linked List](https://leetcode.com/problems/design-linked-list/)

    * solve by implementing a linked list with methods for adding, deleting, and retrieving nodes.

14. [1472. Design Browser History](https://leetcode.com/problems/design-browser-history/)

    * solve by using a doubly linked list to keep track of the history of visited pages, allowing for efficient navigation back and forth.

### Binary Search

1. [LeetCode 704 - Binary Search](https://leetcode.com/problems/binary-search/)

    * solve by implementing the binary search algorithm to find the target value in a sorted array.

2. [Leetcode 74. Search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/)

    * solve by treating the 2D matrix as a 1D array and applying binary search to find the target value.

3. [875. Koko Eating Bananas](https://leetcode.com/problems/koko-eating-bananas/)

    * solve by using binary search to find the minimum eating speed that allows Koko to finish eating all the bananas within a given time limit.

    * range of values is from 1 to the maximum number of bananas in any pile. 

    * use binary search on that range and check if the current speed can finish all bananas in the given time.

4. [153. Find Minimum in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/)

    * solve by using binary search to find the minimum element in a rotated sorted array.

    * move left to the second half of the array if the middle element is greater than the rightmost element, otherwise move right to be mid.

    * continue until left is less than right.

5. [33. Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/)

    * solve by using binary search to find the minimum element in a rotated sorted array.

    * move left to the second half of the array if the middle element is greater than the rightmost element, otherwise move right to be mid.

    * continue until left is less than right.

    * then search first half or second half based on the target value.

6. [981. Time Based Key-Value Store](https://leetcode.com/problems/time-based-key-value-store/)

    * solve by using a hash map to store the key-value pairs along with their timestamps.

    * for the get method, use binary search on the timestamps to find the most recent value for the given key.

7. [374. Guess Number Higher or Lower](https://leetcode.com/problems/guess-number-higher-or-lower/)

    * solve by using binary search to guess the number in a range from 1 to n.

    * use the provided guess API to check if the guessed number is too high, too low, or correct.

8. [278. First Bad Version](https://leetcode.com/problems/first-bad-version/)

    * solve by using binary search to find the first bad version in a range from 1 to n.

    * use the provided isBadVersion API to check if a version is bad or not.

9. [4. Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/)

    * solve by using binary search to find the median of two sorted arrays.

    * partition both arrays and ensure that the left partition is less than or equal to the right partition.

    * calculate the median based on the maximum of the left partition and the minimum of the right partition.


### Greedy approaches

1. [Leetcode 1353. Maximum Number of Events That Can Be Attended](https://leetcode.com/problems/maximum-number-of-events-that-can-be-attended/)

    * solve by sorting the events by their end times and using a greedy approach to select the maximum number of non-overlapping events 

    * it is solved by iterating through the events and using a priority queue to keep track of the end times of the selected events.

2. [3440. Reschedule Meetings for Maximum Free Time II](https://leetcode.com/problems/reschedule-meetings-for-maximum-free-time-ii/)

    * solved by calculating the gaps between meetings. 

    * approach is to find the maximum long interval by simpling thinking the current meeting is not present and can be moved back or front by calculating leftLargeInterval and rightLargeInterval.

### Sliding Window 

1. [3439. Reschedule Meetings for Maximum Free Time I](https://leetcode.com/problems/reschedule-meetings-for-maximum-free-time-i/)

    * solve by using a sliding window approach to find the maximum free time between meetings.

2. [121. Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)

    * solve by using a sliding window approach to find the maximum profit from buying and selling stock.

3. [3. Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)

    * solve by using a sliding window approach to find the longest substring without repeating characters.

4. [209. Minimum Size Subarray Sum](https://leetcode.com/problems/minimum-size-subarray-sum/)

    * solve by using a sliding window approach to find the minimum size subarray whose sum is greater than or equal to a given target.

5. [1343. Number of Sub-arrays of Size K and Average Greater than or Equal to Threshold](https://leetcode.com/problems/number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold/)

    * solve by using a sliding window approach to count the number of subarrays of size k whose average is greater than or equal to a given threshold.

6. [567. Permutation in String](https://leetcode.com/problems/permutation-in-string/)

    * solve by using a sliding window approach to check if one string is a permutation of another string.

7. [239. Sliding Window Maximum](https://leetcode.com/problems/sliding-window-maximum/)

    * solve by using a deque to keep track of the maximum values in the current sliding window.

8. [76. Minimum Window Substring -improve](https://leetcode.com/problems/minimum-window-substring/) 

    * solve by using a sliding window approach to find the minimum window substring that contains all the characters of a given string.

    * could have improved solving by removal character matching the characters in the window with the target string.

9. [424. Longest Repeating Character Replacement](https://leetcode.com/problems/longest-repeating-character-replacement/)

    * solve by using a sliding window approach to find the length of the longest substring that can be formed by replacing at most k characters.

### Binary Manipulations

1.[1290. Convert Binary Number in a Linked List to Integer](https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/)

    * solve by iterating through the linked list and converting the binary number to an integer by shifting the bits and adding the current bit value.

### Trees 

1. [701. Insert into a Binary Search Tree](https://leetcode.com/problems/insert-into-a-binary-search-tree/)

    * solve by recursively finding the correct position to insert the new value in the binary search tree.

2. [94. Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/)

    * solve by using recursion or an iterative approach with a stack to perform inorder traversal of the binary tree.
