/*
Question 167. Two Sum II - Input Array Is Sorted

Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.

Return the indices of the two numbers index1 and index2, each incremented by one, as an integer array [index1, index2] of length 2.

The tests are generated such that there is exactly one solution. You may not use the same element twice.

Your solution must use only constant extra space.

 

Example 1:

Input: numbers = [2,7,11,15], target = 9
Output: [1,2]
Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2].

Example 2:

Input: numbers = [2,3,4], target = 6
Output: [1,3]
Explanation: The sum of 2 and 4 is 6. Therefore index1 = 1, index2 = 3. We return [1, 3].
Example 3:

Input: numbers = [-1,0], target = -1
Output: [1,2]
Explanation: The sum of -1 and 0 is -1. Therefore index1 = 1, index2 = 2. We return [1, 2].
 

Constraints:

2 <= numbers.length <= 3 * 104
-1000 <= numbers[i] <= 1000
numbers is sorted in non-decreasing order.
-1000 <= target <= 1000
The tests are generated such that there is exactly one solution.
*/

/*
challenges faced : 
1. thought of using binary search but that would be O(nlogn) and not O(n) , but bit confused 
2. used old trick of two pointers to get the result in O(n) time and O(1) space
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        vector<int> result(2,0);

        int left =0 ,right = numbers.size()-1,sum;

        // 1. get the lower bound first value

        while(left<right)
        {
            sum = numbers[left]+numbers[right];
            if(sum>target)
            {
                right-=1;
            }
            else if(sum==target)
            {
                result[0]=left+1;
                result[1]=right+1;
                break;
            }
            else if(sum<target)
                left++;
        }

        return result;

    }
};