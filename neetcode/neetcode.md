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

      * insert them into a priority queue ` priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> heap;` and pop the top k elements from the priority queue.

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

1.[LeetCode 206. Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)  
   [🗂️ View Solution](./linked-list/reverse-linked-list-206.cpp)

2. [LeetCode 21. Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/description/)
   [🗂️ View Solution](./linked-list/merge-two-sorted-list-21.cpp)

3. [LeetCode 141. Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/description/)
   [🗂️ View Solution](./linked-list/linked-list-cycle-141.cpp)

### Tree 

1. [LeetCode 104. Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/description/)
   [🗂️ View Solution](./tree/maximum-depth-of-binary-tree-104.cpp)

2. [LeetCode 100.Same Tree](https://leetcode.com/problems/same-tree/)
   [🗂️ View Solution](./tree/same-tree-100.cpp)

3. [LeetCode 543.Diameter of the Binary Tree](https://leetcode.com/problems/diameter-of-binary-tree/submissions/2042467660/)
   [🗂️ View Solution](./tree/diameter-of-the-binary-tree-543.cpp)

4. [LeetCode 102. Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/description/)
   [🗂️ View Solution](./tree/binary-tree-level-order-traversal-102.cpp)
