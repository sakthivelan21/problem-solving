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



6. [LeetCode 36 - Valid Sudoku](https://leetcode.com/problems/valid-sudoku/)  
   [🗂️ View Solution](./arrays-and-hashing/valid-sudoku-36.cpp)

7. [LeetCode 128. Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/)  
   [🗂️ View Solution](./arrays-and-hashing/longest-consecutive-sequence-128.cpp)

8. [LeetCode 238. Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/)  
   [🗂️ View Solution](./arrays-and-hashing/product-of-array-except-self-238.cpp)

#### Two Pointers

1. [LeetCode 125. Valid Palindrome](https://leetcode.com/problems/valid-palindrome/)  
   [🗂️ View Solution](./two-pointers/valid-palindrome-125.cpp)

2. [LeetCode 167. Two Sum II - Input Array Is Sorted](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/)  
   [🗂️ View Solution](./two-pointers/two-sum-ii-167.cpp)

3. [Leetcode 10. 3sum](https://leetcode.com/problems/3sum/)
   [🗂️ View Solution](./two-pointers/3sum-10.cpp)

4. [LeetCode 11. Container With Most Water](https://leetcode.com/problems/container-with-most-water/description/)
   [🗂️ View Solution](./two-pointers/container-with-most-water-11.cpp)

#### Stack 

1. [LeetCode 20. Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)  
   [🗂️ View Solution](./stack/valid-parentheses-20.cpp)

2. [LeetCode 155. Min Stack](https://leetcode.com/problems/min-stack/)  
   [🗂️ View Solution](./stack/min-stack-155.cpp)

3. [LeetCode 150. Evaluate Reverse Polish Notation](https://leetcode.com/problems/evaluate-reverse-polish-notation/)  
   [🗂️ View Solution](./stack/evaluate-reverse-polish-notation-150.cpp)

4. [LeetCode 739. Daily Temperatures](https://leetcode.com/problems/daily-temperatures/)  
   [🗂️ View Solution](./stack/daily-temperatures-739.cpp)

#### Binary Search

1. [LeetCode 704. Binary Search](https://leetcode.com/problems/binary-search/)  
   [🗂️ View Solution](./binary-search/binary-search-704.cpp)

2. [LeetCode 74. Search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/)  
   [🗂️ View Solution](./binary-search/search-a-2d-matrix-74.cpp)

#### Sliding Window 

2. [LeetCode 3. Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/description/)
   [🗂️ View Solution](./sliding-window/longest-substring-without-repeat-3.cpp)

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
