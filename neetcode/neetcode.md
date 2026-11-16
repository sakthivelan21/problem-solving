### NeetCode Problem Solving Guide

#### Arrays and Hashing -- done 

1. [LeetCode 216 - Contains value](https://leetcode.com/problems/contains-duplicate/)  
   
   * [🗂️ View Solution](./arrays-and-hashing/contains-duplication-216.cpp)

   * solution

      * use unordered_set and check duplicates in for loop 

   * Time complexity - O(n)

   * Space complexity - O(n)

2. [Leetcode 242 - Valid Anagram](https://leetcode.com/problems/valid-anagram/)  
   [🗂️ View Solution](./arrays-and-hashing/valid-anagram-242.cpp)

   * solution 

      * first check if the size of both strings are equal, if not return false.

      * use 26 size vector to store the count of each character in the first string and then decrement the count for each character in the second string. If any count is not zero, return false.

   * time complexity - O(n + m) where n and m are the lengths of the two strings

   * space complexity - O(1) since the size of the vector is constant (26)

3. [LeetCode 1 - Two Sum](https://leetcode.com/problems/two-sum/)  
   [🗂️ View Solution](./arrays-and-hashing/two-sum-1.cpp)

   * Solution : one pass hash table to store the difference of target and current number, if the difference is already in the hash table, return the indices.

   * Time complexity - O(n)

   * Space complexity - O(n)


4. [LeetCode 49 - Group Anagrams](https://leetcode.com/problems/group-anagrams/)  
   [🗂️ View Solution](./arrays-and-hashing/group-anagrams-49.cpp)

   * solution : 

      * generate key for each string with alphabet and frequent count in a 26 size vector and store the strings in a hash table with the key as the generated key.

      * use the key to group the anagrams together. by unordered_map<string, vector<string>> to store the key and the corresponding anagrams.

   * time complexity - o ( m * n) where m is the number of strings and n is the  length of the longest string

   * space complexity - o ( m * n)

5. [LeetCode 347 - Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/)  
   [🗂️ View Solution](./arrays-and-hashing/top-k-frequent-elements-347.cpp)

   * solution 

      * group the frequency of elements in hashtable 

      * insert them into a priority queue ` priority_queue<int,int> pq;` and pop the top k elements from the priority queue.

   * time complexity - O(n log k) where n is the number of elements in the input array and k is the number of top frequent elements to return.

   * space complexity - O( n+ k) , Where n is the length of the array and  k is the number of top frequent elements.


6. [NeetCode - encoding and decoding](https://neetcode.io/problems/string-encode-and-decode/question?list=neetcode150)  
   [🗂️ View Solution](./arrays-and-hashing/encoding-and-decoding.cpp)

   * solution 

      * encode string - use length + # + string to encode the string and use the length to decode the string.

      * decode string, we can use the length to get the substring and then move the index to the next string.

   * time complexity - O(n + m) Where m is the sum of lengths of all the strings and n is the number of strings.

   * space complexity - O(n + m) Where m is the sum of lengths of all the strings and n is the number of strings.

7. [LeetCode 238. Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/)  
   [🗂️ View Solution](./arrays-and-hashing/product-of-array-except-self-238.cpp)

   * solution 

      * prefix and suffix product array to store the product of all the elements before and after the current element.

      * what we have tried is solving with two separate arrays, we can improved it to single array and storing it optimaly

      * time complexity - O(n*2)

      * space complexity - O(1) since we are not using any extra space except for the output array.


6. [LeetCode 36 - Valid Sudoku](https://leetcode.com/problems/valid-sudoku/)  
   [🗂️ View Solution](./arrays-and-hashing/valid-sudoku-36.cpp)

   * solution 
   
      * use 3 hash tables to store the row, column and box values and check if the value is already present in the hash table.

      * time complexity - O(n^2) where n is the size of the board

      * space complexity - O(n^2) where n is the size of the board

      * can be improved to O(n) space complexity by using bit manipulation to store the values in the hash table.

7. [LeetCode 128. Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/)  
   [🗂️ View Solution](./arrays-and-hashing/longest-consecutive-sequence-128.cpp)

   * solution 

      * use hashtable to store all values and then iterate each one, to fetch the previous n-1 value if it's not presnet then unique and iter from it to find the count of consecutive values.

      * time complexity - O(n) where n is the number of elements in the input array.

      * space complexity - O(n) where n is the number of elements in the input array.

#### Two Pointers

1. [LeetCode 125. Valid Palindrome](https://leetcode.com/problems/valid-palindrome/)  
   [🗂️ View Solution](./two-pointers/valid-palindrome-125.cpp)

   * solution

      * two pointer from start and end of the string and check if the characters are equal, if not return false.

      * time complexity - O(n) where n is the length of the string.

      * space complexity - O(1) since we are not using any extra space except for the input string.

2. [LeetCode 167. Two Sum II - Input Array Is Sorted](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/)  
   [🗂️ View Solution](./two-pointers/two-sum-ii-167.cpp)

   * solution 

      * left and right pointer from start and end of the array and check if the sum of the two elements is equal to the target, if not move the left or right pointer accordingly.

      * time complexity - O(n) where n is the length of the array.

      * space complexity - O(1) since we are not using any extra space except for the input array.

3. [Leetcode 10. 3sum](https://leetcode.com/problems/3sum/)
   [🗂️ View Solution](./two-pointers/3sum-10.cpp)

   * solution 

      *  sort the array and have a common for loop 

      * then have two pointers from it's next element and the end of the array and check if the sum of the three elements is equal to the target, if not move the left or right pointer accordingly.

      * time complexity - O(n^2) where n is the length of the array.

      * space complexity - O(1) since we are not using any extra space except for the input array.

4. [LeetCode 11. Container With Most Water](https://leetcode.com/problems/container-with-most-water/description/)
   [🗂️ View Solution](./two-pointers/container-with-most-water-11.cpp)

   * solution 

      * left and right pointer from start and end of the array and check if the area of the two elements is greater than the max area, if not move the left or right pointer accordingly.

      * time complexity - O(n) where n is the length of the array.

      * space complexity - O(1) since we are not using any extra space except for the input array.

5. [26. Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)
   [🗂️ View Solution](./two-pointers/remove-duplicates-from-sorted-array-26.cpp)

   * solution 

      * have a left pointer and start from 1 index and check if the current element is equal to the previous element, if not then move the left pointer and update the value at left pointer with the current element.

      * space complexity - O(1) since we are not using any extra space except for the input array.

      * time complexity - O(n) where n is the length of the array.

6. [80. Remove Duplicates from Sorted Array II](https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/)
   [🗂️ View Solution](./two-pointers/remove-duplicates-from-sorted-array-ii-80.cpp)

   * solution 
   
      * have a left pointer and start from 2 index and check if the current element is equal to the element at left pointer - 2, if not then move the left pointer and update the value at left pointer with the current element.

      * space complexity - O(1) since we are not using any extra space except for the input array.

      * time complexity - O(n) where n is the length of the array.

7. [42. Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/)
   [🗂️ View Solution](./two-pointers/trapping-rain-water-42.cpp)

   * solution 

      * one way is to solve it with maxleft prefix and maxright suffix array and then calculate the trapped water at each index.

      * val = min(maxleft[i], maxright[i]) - height[i], sum the result it will be same 

      * but space complexity is O(n) for maxleft and maxright array.

      * have a left and right pointer and check the max height of the left and right pointer, if the left max height is less than the right max height, then move the left pointer and calculate the trapped water in left side, else move the right pointer and calculate the trapped water in right side.

      * space complexity - O(1) since we are not using any extra space except for the input array.

      * time complexity - O(n) where n is the length of the array.

8. [5. Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/description/)
   [🗂️ View Solution](./two-pointers/longest-palindrome-5.cpp)

   * solution

      * we have solved the problem with two pointer approach

      * we will start from middle and spread outward check for odd and even length . making time complexity reduced

      * time complexity - O(n^2)

      * space complexity - O(1)

      * this can be solved with 2-dp too, we will check in 2 dp

9. [ 647. Palindromic Substrings ](https://leetcode.com/problems/palindromic-substrings/description/)
   [🗂️ View Solution](./two-pointers/plaindromic-substrings.cpp)

   * solution 

      * we have solved the problem with two pointer approach

      * we will start from middle and spread outward check for odd and even length . making time complexity reduced

      * time complexity - O(n^2)

      * space complexity - O(1)



#### Stack 

1. [LeetCode 20. Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)  
   [🗂️ View Solution](./stack/valid-parentheses-20.cpp)

      * solution 

         * use stack to push in the opening brackets and popup as per closing brackets and check if the stack is empty at the end.

         * space complexity - O(n) where n is the length of the string.

         * time complexity - O(n) where n is the length of the string.

2. [LeetCode 155. Min Stack](https://leetcode.com/problems/min-stack/)  f
   [🗂️ View Solution](./stack/min-stack-155.cpp)

      * solution 
         
         * use single stack and push pair<int, int> to store the value and the minimum value at that point.

         * so when we pop the stack, we can get the minimum value at that point.

         * space complexity - O(n) where n is the number of elements in the stack.

         * time complexity - O(1) for push, pop, top and getMin operations.

3. [LeetCode 150. Evaluate Reverse Polish Notation](https://leetcode.com/problems/evaluate-reverse-polish-notation/)  
   [🗂️ View Solution](./stack/evaluate-reverse-polish-notation-150.cpp)

   * solution 

      * use stack to push in the numbers and when we encounter an operator, pop the top two numbers from the stack and perform the operation and push the result back to the stack.

      * space complexity - O(n) where n is the number of elements in the input array.

      * time complexity - O(n) where n is the number of elements in the input array.


4. [LeetCode 739. Daily Temperatures](https://leetcode.com/problems/daily-temperatures/)  
   [🗂️ View Solution](./stack/daily-temperatures-739.cpp)

   * solution 

      * use stack to store the index of the temperatures and when we encounter a temperature greater than the top of the stack, 
      
      * pop the index from the stack and calculate the difference between the current index and the popped index and store it in the result array.

      * space complexity - O(n) where n is the number of elements in the input array.

      * time complexity - O(n) where n is the number of elements in the input array.

5. [LeetCode 853. Car Fleet](https://leetcode.com/problems/car-fleet/)  
   [🗂️ View Solution](./stack/car-fleet-853.cpp)

   * solution 

      * sort the cars based on their starting position and then iterate from the end of the array and calculate the time taken for each car to reach the target.

      * if the time taken for the current car is greater than the time taken for the previous car, then it will form a new fleet.

      * space complexity - O(n) where n is the number of elements in the input array.

      * time complexity - O(n log n) where n is the number of elements in the input array.

6. [LeetCode 84. Largest Rectangle in Histogram](https://leetcode.com/problems/largest-rectangle-in-histogram/)  
   [🗂️ View Solution](./stack/largest-rectangle-in-histogram-84.cpp)

   * solution 

      * use stack to store the index of the heights and when we encounter a height less than the top of the stack, 
      
      * pop the index from the stack and calculate the area of the rectangle with the popped height as the smallest height.

      * space complexity - O(n) where n is the number of elements in the input array.

      * time complexity - O(n) where n is the number of elements in the input array.

#### Binary Search

1. [LeetCode 704. Binary Search](https://leetcode.com/problems/binary-search/)  
   [🗂️ View Solution](./binary-search/binary-search-704.cpp)

   * solution 

      * use binary search to find the target in the sorted array.

      * space complexity - O(1) since we are not using any extra space except for the input array.

      * time complexity - O(log n) where n is the length of the array.

      * mid = left + (right - left) / 2; to avoid integer overflow.

2. [LeetCode 74. Search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/)  
   [🗂️ View Solution](./binary-search/search-a-2d-matrix-74.cpp)

   * solution 
   
      * use binary search to find the target in the sorted 2D matrix. we should treat the 2D matrix as a 1D array and use binary search to find the target.

      ```cpp
            pair<int,int> commute_point(int mid,int row,int col,int length)
         {
            pair<int,int> p;
            // use the col to find the row and col of the mid point in the 2D matrix.
            p.first = mid/col;

            p.second =  mid %col ;

            return p;
         }
      ```

      * space complexity - O(1) since we are not using any extra space except for the input matrix.

      * time complexity - O(log (m * n)) where m is the number of rows and n is the number of columns in the matrix.

3. [LeetCode 875. Koko Eating Bananas](https://leetcode.com/problems/koko-eating-bananas/)  
   [🗂️ View Solution](./binary-search/koko-eating-bananas-875.cpp)

   * solution 

      * find maximum hour first 

      * then try to use the binary search to pick a hour from 1 to max hour and check if the current hour is enough to eat all the bananas in the piles.

      * By res += ceil(pile / mid) to calculate the total hours needed to eat all the bananas in the piles.

      * if mid is enough to eat all the bananas in the piles, then we can try to find a smaller hour by moving the right pointer to mid - 1, else we need to increase the hour by moving the left pointer to mid + 1.

      * space complexity - O(1) since we are not using any extra space except for the input array.

      * time complexity - O(n log m) where n is the number of piles and m is the maximum number of bananas in a pile.

4. [LeetCode 153. Find Minimum in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/)  
   [🗂️ View Solution](./binary-search/find-minimum-in-rotated-sorted-array-153.cpp)

   * solution 

      * use binary search to find the minimum element in the rotated sorted array.

      * if the mid element is greater than the right element, then the minimum element is in the right half of the array, else it is in the left half of the array.

      * space complexity - O(1) since we are not using any extra space except for the input array.

      * time complexity - O(log n) where n is the length of the array.

5. [LeetCode 33. Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/)  
   [🗂️ View Solution](./binary-search/search-in-rotated-sorted-array-33.cpp)

   * solution 

      * use binary search to find the target in the rotated sorted array.

      * if the mid element is greater than the left element, then the left half of the array is sorted, else the right half of the array is sorted.

      * if the target is in the sorted half of the array, then we can move the left or right pointer accordingly, else we need to search in the other half of the array.

      * space complexity - O(1) since we are not using any extra space except for the input array.

      * time complexity - O(log n) where n is the length of the array.


6. [981. Time Based Key-Value Store](https://leetcode.com/problems/time-based-key-value-store/)  
   [🗂️ View Solution](./binary-search/time-based-key-value-store-981.cpp)

   * solution 

      * use binary search to find the value of the key at the given timestamp.

      * store in hashmap<string, Map<int, string>> to store the key and the timestamp and the value.

      * use upper_bound to find the value of the key at the given timestamp.

      * space complexity - O(n) where n is the number of key-value pairs in the input.

      * time complexity - O(log n) where n is the number of key-value pairs in the input.

7. [LeetCode 4. Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/)  
   [🗂️ View Solution](./binary-search/median-of-two-sorted-arrays-4.cpp)

   * solution 

      * use binary search to find the median of the two sorted arrays.

      * we can use binary search on the smaller array and find the partition point in both arrays.

      * we keep A array as smaller array and B array as larger array, then we can find the partition point in A array and then find the partition point in B array.

      * check code for this logic

      * space complexity - O(1) since we are not using any extra space except for the input arrays.

      * time complexity - O(log(min(n, m))) where n and m are the lengths of the two arrays.

#### Sliding Window 

1. [121. Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)  
   [🗂️ View Solution](./sliding-window/best-time-to-buy-and-sell-stock-121.cpp)

   * solution 

      * use a single left pointer to keep track of minimum price and iterate through the array to find the maximum profit by selling at the current price and buying at the minimum price.

      * time complexity - O(n) where n is the length of the array.

      * space complexity - O(1) since we are not using any extra space except for the input array.

2. [LeetCode 3. Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/description/)
   [🗂️ View Solution](./sliding-window/longest-substring-without-repeat-3.cpp)

   * solution 

      * use a hash table to store the characters and their indices and use two pointers to keep track of the current substring.

      * if the character is already in the hash table, move the left pointer to the right of the previous index of the character.

      * time complexity - O(n) where n is the length of the string.

      * space complexity - O(n) where n is the length of the string.

3. [424. Longest Repeating Character Replacement](https://leetcode.com/problems/longest-repeating-character-replacement/)  
   [🗂️ View Solution](./sliding-window/longest-repeating-character-replacement.cpp) 

   * solution 

      * keep the count of frequency in a map , then pick the max left from frequency map and use it subtract and get diff of non unique values 

      * if non unique values > k , start moving left pointer of window and compute max_length 

      * time complexity - o(n) where n is the length of the string 

      * space complexity - o(n) where n is the length of the string

4. [567. Permutation in String](https://leetcode.com/problems/permutation-in-string/)  
   [🗂️ View Solution](./sliding-window/permutation-in-string-567.cpp)

   * solution 

      * keep the count of small string in frequency map 

      * and iterate and build a new map of second string and try to check complete frequency of the map when the size is same of small map

      * time complexity - o(n) where n is the length of the string 

      * space complexity - o(n+m) where n and m is the length of the two strings

5. [239. Sliding Window Maximum](https://leetcode.com/problems/sliding-window-maximum/)  
   [🗂️ View Solution](./sliding-window/sliding-window-maximum-239.cpp)

   * solution 

      * use deque to store the indices of the elements in the current window and maintain the decreasing order of the elements in the deque.

      * if the current element is greater than the element at the back of the deque, pop the back of the deque until the current element is less than or equal to the element at the back of the deque.

      * if the front of the deque is out of the current window, pop the front of the deque.

      * time complexity - O(n) where n is the length of the array.

      * space complexity - O(k) where k is the size of the window.

6. [76. Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/)  
   [🗂️ View Solution](./sliding-window/minimum-window-substring-76.cpp)

   * solution 

      * use one hash table to store the t map frequency, and other map iterate and update frequency of s_map

      * check if need frequency of t is satisfied by s_map, if yes then try to move left pointer to get minimum window substring.

      * time complexity - O(n) where n is the length of the string.

      * space complexity - O(n) where n is the length of the string.

#### Linked List

1. [LeetCode 206. Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)  
   [🗂️ View Solution](./linked-list/reverse-linked-list-206.cpp)

   * solution 

      * use a new_head ptr and iterate through the linked list and reverse the pointers of the nodes.

      * time complexity - O(n) where n is the number of nodes in the linked list.

      * space complexity - O(1) since we are not using any extra space except for the input linked list.

2. [LeetCode 21. Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/description/)
   [🗂️ View Solution](./linked-list/merge-two-sorted-list-21.cpp)

   * solution 
   
      * use merge sort approach to merge the two sorted linked lists by comparing the values of the nodes and adding the smaller value to the new linked list.

      * time complexity - O(n + m) where n and m are the number of nodes in the two linked lists.

      * space complexity - O(1) since we are not using any extra space except for the input linked lists.

3. [LeetCode 141. Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/description/)
   [🗂️ View Solution](./linked-list/linked-list-cycle-141.cpp)

   * solution 

      * use two pointers, slow and fast, to traverse the linked list. If there is a cycle, the fast pointer will eventually meet the slow pointer.

      * time complexity - O(n) where n is the number of nodes in the linked list.

      * space complexity - O(1) since we are not using any extra space except for the input linked list.

4. [LeetCode 2. Add Two Numbers](https://leetcode.com/problems/add-two-numbers/description/)
   [🗂️ View Solution](./linked-list/add-two-numbers-2.cpp)

   * solution 

      * use two pointers to traverse the two linked lists and add the values of the nodes along with the carry from the previous addition.

      * time complexity - O(max(n, m)) where n and m are the number of nodes in the two linked lists.

      * space complexity - O(1) since we are not using any extra space except for the input linked lists.

5. [LeetCode 143. Reorder List](https://leetcode.com/problems/reorder-list/description/)
   [🗂️ View Solution](./linked-list/reorder-list-143.cpp)

   * solution 

      * use two pointers to find the middle of the linked list, then reverse the second half of the linked list and merge the two halves.

      * time complexity - O(n) where n is the number of nodes in the linked list.

      * space complexity - O(1) since we are not using any extra space except for the input linked list.

6. [LeetCode 138. Copy List with Random Pointer](https://leetcode.com/problems/copy-list-with-random-pointer/description/)
   [🗂️ View Solution](./linked-list/copy-list-with-random-pointer-138.cpp)

   * solution 

      * use a hash table to store the mapping of the original nodes to the new nodes and then iterate through the original linked list to create the new linked list with the random pointers.

      * time complexity - O(n) where n is the number of nodes in the linked list.

      * space complexity - O(n) since we are using a hash table to store the mapping of the original nodes to the new nodes.

7. [LeetCode 146. LRU Cache](https://leetcode.com/problems/lru-cache/description/)
   [🗂️ View Solution](./linked-list/lru-cache-146.cpp)

   * solution 

      * use a hash table to store the key-value pairs and a doubly linked list to store the order of the keys based on their usage.

      * when a key is accessed, move it to the front of the linked list and when a new key is added, remove the least recently used key from the back of the linked list.

      * if the linked list is full , remove the least recently used key from the back of the linked list and add the new key to the front of the linked list.

      * if the key is already present in the hash table, update the value and move it to the front of the linked list.

      * time complexity - O(1) for get and put operations.

      * space complexity - O(n) where n is the capacity of the cache.

8. [LeetCode 287. Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/description/)
   [🗂️ View Solution](./linked-list/find-the-duplicate-number-287.cpp)

   * solution 

      * use two pointers Floyd , first find teh cycle with slow and fast pointer to find the cycle 

      * then iter the slow pointer and a new slow pointer from the start to find the duplicate number. where they meet is the duplicate number.

      * time complexity - O(n) where n is the number of nodes in the linked list.

      * space complexity - O(1) since we are not using any extra space except for the input linked list.

9. [LeetCode 23. Merge k Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists/description/)
   [🗂️ View Solution](./linked-list/merge-k-sorted-lists-23.cpp)

   * solution 

      * use a min heap to store the nodes of the linked lists and then pop the smallest node from the heap and add it to the new linked list.

      * time complexity - O(n log k) where n is the total number of nodes in all the linked lists and k is the number of linked lists.

      * space complexity - O(k) since we are using a min heap to store the nodes of the linked lists.

10. [LeetCode 25. Reverse Nodes in k-Group](https://leetcode.com/problems/reverse-nodes-in-k-group/description/)
    [🗂️ View Solution](./linked-list/reverse-nodes-in-k-group-25.cpp)

    * solution 

       * use a dummy node to point to the head of the linked list and then iterate through the linked list to reverse the nodes in groups of k.

       * time complexity - O(n) where n is the number of nodes in the linked list.

       * space complexity - O(1) since we are not using any extra space except for the input linked list.

### Tree 

1. [LeetCode 226. Invert Binary Tree](https://leetcode.com/problems/invert-binary-tree/description/)
   [🗂️ View Solution](./tree/invert-binary-tree-226.cpp)

   * solution

      * use DFS to traverse the tree and swap the left and right child of each node.

      * time complexity - O(n) where n is the number of nodes in the tree.

      * space complexity - O(h) where h is the height of the tree.

2. [LeetCode 104. Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/description/)
   [🗂️ View Solution](./tree/maximum-depth-of-binary-tree-104.cpp)

   * solution 

      * post order dfs to traverse the tree and return the maximum depth of the left and right subtree + 1.

      * time complexity - O(n) where n is the number of nodes in the tree.

      * space complexity - O(h) where h is the height of the tree.

3. [LeetCode 110. Balanced Binary Tree](https://leetcode.com/problems/balanced-binary-tree/)
   [🗂️ View Solution](./tree/balanced-binary-tree-110.cpp)

   * solution 

      * post order dfs to traverse the tree and return the maximum depth of the left and right subtree + 1.

      * if the difference between the left and right subtree is greater than 1, then the tree is not balanced.

      * we need to check in each left and right subtree if the tree is balanced or not, if not then return false.

      * time complexity - O(n) where n is the number of nodes in the tree.

      * space complexity - O(h) where h is the height of the tree.

4. [LeetCode 100.Same Tree](https://leetcode.com/problems/same-tree/)
   [🗂️ View Solution](./tree/same-tree-100.cpp)

5. [LeetCode 543.Diameter of the Binary Tree](https://leetcode.com/problems/diameter-of-binary-tree/submissions/2042467660/)
   [🗂️ View Solution](./tree/diameter-of-the-binary-tree-543.cpp)

   * solution

      * use DFS to traverse the tree like maximum depth of binary tree , but store max_depth = max(max_depth, left_depth + right_depth) and return max(left_depth, right_depth) + 1.

      * time complexity - O(n) where n is the number of nodes in the tree.

      * space complexity - O(h) where h is the height of the tree.

6. [LeetCode 102. Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/description/)


   [🗂️ View Solution](./tree/binary-tree-level-order-traversal-102.cpp)

   * solution

      * use BFS to traverse the tree level by level and store the values of each level in a vector.

      * time complexity - O(n) where n is the number of nodes in the tree.

      * space complexity - O(n) where n is the number of nodes in the tree.

7. [LeetCode 100. Same Tree](https://leetcode.com/problems/same-tree/)
   [🗂️ View Solution](./tree/same-tree-100.cpp)

   * solution

      * use DFS to traverse the tree and check if the values of the nodes are equal and if the left and right subtrees are equal.

      * time complexity - O(n) where n is the number of nodes in the tree.

      * space complexity - O(h) where h is the height of the tree.

8. [LeetCode 572. Subtree of Another Tree](https://leetcode.com/problems/subtree-of-another-tree/)
   [🗂️ View Solution](./tree/subtree-of-another-tree-572.cpp)

   * solution

      * use DFS to traverse the tree and check if the values of the nodes are equal and if the left and right subtrees are equal.

      * time complexity - O(n * m) where n is the number of nodes in the tree and m is the number of nodes in the subtree.

      * space complexity - O(h) where h is the height of the tree.

9. [LeetCode 236. Lowest Common Ancestor of a Binary Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/)
   [🗂️ View Solution](./tree/lowest-common-ancestor-of-a-binary-tree-236.cpp)

   * solution

      * use while to iterate through the tree and check if current node is greater than both p and q, then move to the left subtree, if current node is less than both p and q, then move to the right subtree, else return the current node as the lowest common ancestor.

      * if the left and right subtrees return non-null values, then the current node is the lowest common ancestor.

      * time complexity - O(n) where n is the number of nodes in the tree.

      * space complexity - O(h) where h is the height of the tree.

10. [LeetCode 199. Binary Tree Right Side View](https://leetcode.com/problems/binary-tree-right-side-view/)
    [🗂️ View Solution](./tree/binary-tree-right-side-view-199.cpp)

    * solution

       * use BFS to traverse the tree level by level and store the last node of each level in a vector.

       * use DFS with right child first and then left child to traverse the tree and store the first node of each level in a vector.

       * time complexity - O(n) where n is the number of nodes in the tree.

       * space complexity - O(n) where n is the number of nodes in the tree.

11. [1448. Count Good Nodes in Binary Tree](https://leetcode.com/problems/count-good-nodes-in-binary-tree/)
    [🗂️ View Solution](./tree/count-good-nodes-in-binary-tree-1448.cpp)

    * solution

       * use DFS to traverse the tree and keep track of the maximum value seen so far. If the current node's value is greater than or equal to the maximum value, increment the count of good nodes.

       * time complexity - O(n) where n is the number of nodes in the tree.

       * space complexity - O(h) where h is the height of the tree.

12. [98. Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/)
    [🗂️ View Solution](./tree/validate-binary-search-tree-98.cpp)

    * solution

       * use DFS to traverse the tree and check if the values of the nodes are within the valid range. The left child must be less than the parent node and the right child must be greater than the parent node.

       * time complexity - O(n) where n is the number of nodes in the tree.

       * space complexity - O(h) where h is the height of the tree.

13. [230. Kth Smallest Element in a BST](https://leetcode.com/problems/kth-smallest-element-in-a-bst/)
    [🗂️ View Solution](./tree/kth-smallest-element-in-a-bst-230.cpp)

    * solution

       * use DFS to traverse the tree in inorder fashion and keep track of the count of nodes visited. When the count reaches k, return the current node's value.

       * time complexity - O(n) where n is the number of nodes in the tree.

       * space complexity - O(h) where h is the height of the tree.

14. [105. Construct Binary Tree from Preorder and Inorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/)
    [🗂️ View Solution](./tree/construct-binary-tree-from-preorder-and-inorder-traversal-105.cpp)

    * solution

       * use the preorder array to determine the root nodes and the inorder array to determine the left and right subtrees recursively.

       * use hashmap for quick lookup of the index of elements in the inorder array.

       * time complexity - O(n) where n is the number of nodes in the tree.

       * space complexity - O(n) where n is the number of nodes in the tree.

15. [297. Serialize and Deserialize Binary Tree](https://leetcode.com/problems/serialize-and-deserialize-binary-tree/description/)
    [🗂️ View Solution](./tree/serialize-and-deserialize-binary-tree-297.cpp)

    * solution

       * use DFS to serialize the tree into a string and deserialize the string back into the tree.

       * time complexity - O(n) where n is the number of nodes in the tree.

       * space complexity - O(n) where n is the number of nodes in the tree.

16. [124. Binary Tree Maximum Path Sum](https://leetcode.com/problems/binary-tree-maximum-path-sum/)
    [🗂️ View Solution](./tree/binary-tree-maximum-path-sum-124.cpp)

    * solution

       * use DFS to find the maximum path sum in the tree. Keep track of the maximum sum encountered so far.

       * time complexity - O(n) where n is the number of nodes in the tree.

       * space complexity - O(h) where h is the height of the tree.


### Trie

1. [208. Implement Trie (Prefix Tree)](https://leetcode.com/problems/implement-trie-prefix-tree/)
    [🗂️ View Solution](./trie/implement-trie-prefix-tree-208.cpp)

    * solution

       * use a trie data structure to store the words. Each node represents a character and has a hashmap of child nodes.

       * time complexity - O(n) for insertion and search, where n is the length of the word.

       * space complexity - O(n) where n is the total number of characters in all words stored in the trie.

2. [211. Design Add and Search Words Data Structure](https://leetcode.com/problems/design-add-and-search-words-data-structure/)
    [🗂️ View Solution](./trie/design-add-and-search-words-data-structure-211.cpp)

    * solution

       * use a trie data structure to store the words. Each node represents a character and has a hashmap of child nodes.

       * for searching, if the character is '.', we need to check all the child nodes recursively.

       * time complexity - O(n) for insertion and search, where n is the length of the word.

       * space complexity - O(n) where n is the total number of characters in all words stored in the trie.

3. [212. Word Search II](https://leetcode.com/problems/word-search-ii/)
    [🗂️ View Solution](./trie/word-search-ii-212.cpp)

    * solution

       * use a trie data structure to store the words. Each node represents a character and has a hashmap of child nodes.

       * use DFS to traverse the board and check if the current path forms a word in the trie.

       * time complexity - O(m * n * 4^l) where m is the number of rows, n is the number of columns, and l is the length of the longest word.

       * space complexity - O(n) where n is the total number of characters in all words stored in the trie.

### priority queue

1. [215. Kth Largest Element in an Array](https://leetcode.com/problems/kth-largest-element-in-an-array/)
    [🗂️ View Solution](./priority-queue/kth-largest-element-in-an-array-215.cpp)

    * solution

       * use a min-heap (priority queue)  std::priority_queue<int, std::vector<int>, std::greater<int>> q; to keep track of the k largest elements in the array.

       * time complexity - O(n log k) where n is the number of elements in the array.

       * space complexity - O(k) where k is the number of largest elements to keep track of.

2. [1046. Last Stone Weight](https://leetcode.com/problems/last-stone-weight/description/)
    [🗂️ View Solution](./priority-queue/last-stone-weight-1046.cpp)
   
   * solution

       * use a max-heap (priority queue) to repeatedly smash the two largest stones until one or none are left.

       * time complexity - O(n log n) where n is the number of stones.

       * space complexity - O(n) where n is the number of stones.

3. [703. Kth Largest Element in a Stream](https://leetcode.com/problems/kth-largest-element-in-a-stream/)
    [🗂️ View Solution](./priority-queue/kth-largest-element-in-a-stream-703.cpp)

    * solution

       * use a min-heap (priority queue) to keep track of the k largest elements in the stream.

       * time complexity - O(n log k) for each add operation, where n is the number of elements added to the stream.

       * space complexity - O(k) where k is the number of largest elements to keep track of.

4. [973. K Closest Points to Origin](https://leetcode.com/problems/k-closest-points-to-origin/)
    [🗂️ View Solution](./priority-queue/k-closest-points-to-origin-973.cpp)

    * solution

       * use a max-heap (priority queue) to keep track of the k closest points to the origin.

       * time complexity - O(n log k) where n is the number of points.

       * space complexity - O(k) where k is the number of closest points to keep track of.

5. [621. Task Scheduler](https://leetcode.com/problems/task-scheduler/)
    [🗂️ View Solution](./priority-queue/task-scheduler-621.cpp)

    * solution

       * use a max-heap (priority queue) to schedule tasks based on their frequencies and cooldown periods.

       * time complexity - O(n * m) where n is the number of tasks and m is the cooldown period.

       * space complexity - O(n) where n is the number of tasks.

6. [295. Find Median from Data Stream](https://leetcode.com/problems/find-median-from-data-stream/description/)
      [🗂️ View Solution](./priority-queue/find-median-from-data-stream-295.cpp)

    * solution

       * use two heaps (a max-heap for the lower half and a min-heap for the upper half) to efficiently find the median of the data stream.

       * max heap will have n+1 and min heap will have n elements when the total number of elements is odd.

       * time complexity - O(log n) for each add operation, where n is the number of elements in the data stream.

       * space complexity - O(n) where n is the number of elements in the data stream.

### BackTracking

1. [78. Subsets](https://leetcode.com/problems/subsets/)
    [🗂️ View Solution](./backtracking/subsets-78.cpp)

    * solution

       * use backtracking to generate all possible subsets of the given set of numbers.

       * time complexity - O(2^n) where n is the number of elements in the input set.

       * space complexity - O(n) where n is the number of elements in the input set.

2. [39. Combination Sum](https://leetcode.com/problems/combination-sum/)
    [🗂️ View Solution](./backtracking/combination-sum-39.cpp)

    * solution

       * use backtracking to find all unique combinations of numbers that sum up to the target.

       * time complexity - O(2^n) where n is the number of elements in the input set.

       * space complexity - O(n) where n is the number of elements in the input set.

3. [40. Combination Sum II](https://leetcode.com/problems/combination-sum-ii/)
    [🗂️ View Solution](./backtracking/combination-sum-ii-40.cpp)

    * solution

       * use backtracking to find all unique combinations of numbers that sum up to the target, where each number can only be used once.

       * try to skipp the same recursive path for duplicate numbers to avoid generating duplicate combinations.

       * try to sort the array , same flow code for combination sum , but skipp duplicate of same for values via if(i!=index && candidates[i]==candidates[i-1]) continue;

       * time complexity - O(2^n) where n is the number of elements in the input set.

       * space complexity - O(n) where n is the number of elements in the input set.

4. [46. Permutations](https://leetcode.com/problems/permutations/)
    [🗂️ View Solution](./backtracking/permutations-46.cpp)

    * solution

5. [90. Subsets II](https://leetcode.com/problems/subsets-ii/description/)
    [🗂️ View Solution](./backtracking/subsets-ii-90.cpp)
    * solution

      * same like combination sum 2 problem 

      * try to sort the array and skip duplicates to avoid generating duplicate subsets via if(i!=index && nums[i]==nums[i-1]) continue;

      * time complexity - O(2^n) where n is the number of elements in the input set.

      * space complexity - O(n) where n is the number of elements in the input set.

6. [22. Generate Parentheses](https://leetcode.com/problems/generate-parentheses/)
    [🗂️ View Solution](./backtracking/generate-parentheses-22.cpp)

    * solution

       * use backtracking to generate all combinations of well-formed parentheses.

       * maintain a count of open and close parentheses to ensure valid combinations.

       * time complexity - O(4^n / sqrt(n)) where n is the number of pairs of parentheses.

       * space complexity - O(n) where n is the number of pairs of parentheses.

7. [79. Word Search](https://leetcode.com/problems/word-search/description/)

   * solution

      * use normal backtracking to generate all approaches and mark visisted nodes and avoid revisiteing them 

      * time complexity - O(m * 4^n)

      * space complexity = o(n) , m is number of cells in board and n is the number of length of string

Simple Geometry Problems

1. [4061. Minimum Queen Moves to Reach Target](https://leetcode.com/problems/minimum-queen-moves/)
    [🗂️ View Solution](./geometry/minimum-queen-moves-4061.cpp)

    * solution

       * check if left==right && left == length, then a valid combination of parentheses is formed.

       * if left<right, add a opening parenthesis and continue the recursion.
       * if right<length, add an closing parenthesis and continue the recursion.

       * time complexity - O(4^n / sqrt(n)) where n is the number of pairs of parentheses.

       * space complexity - O(n) where n is the number of pairs of parentheses.


### Dynamic programming

1. [746. Min Cost Climbing Stairs](https://leetcode.com/problems/min-cost-climbing-stairs/description/)
    [🗂️ View Solution](./dynamic-programming/min-cost-climbing-746.cpp)

   * solution

      * dp[i] = cost[i] + min(dp[i-1],dp[i-2]);

      * for every step we take cost and jump one or two steps. 

      * starting step can be one or 0 so we have to call twice in recursion.

2. [ 198. House Robber ](https://leetcode.com/problems/house-robber/description/)
   [🗂️ View Solution](./dynamic-programming/house-robber-198.cpp)

   * solution

      * dp[i] = max(dp[i-1],dp[i-2]+nums[i]);

      * we need to skipp adjacent jumsp and move and chooose the best approach

3. [ 213. House Robber II ](https://leetcode.com/problems/house-robber-ii/description/)
   [🗂️ View Solution](./dynamic-programming/house-robber-2-213.cpp)

   * solution

      * dp[i] = max(dp[i-1],dp[i-2]+nums[i]);

      * we need to skipp adjacent jumsp and move and chooose the best approach

      * for first half and second half . return max(dfs_tabulized( vector<int>(nums.begin(), nums.end()-1)),
            dfs_tabulized(vector<int>(nums.begin()+1,nums.end())));

4. [91. Decode Ways](https://leetcode.com/problems/decode-ways/description/)
   [🗂️ View Solution](./dynamic-programming/decode-ways-91.cpp)

   * solution

      * since dp[i] = dp[i+1] + dp[i+2] where dp[i+2] depends on case where s[i] is under 27 check 

      * we used bottom up on tabulization methods