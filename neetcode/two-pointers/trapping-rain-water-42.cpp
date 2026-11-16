/*
42. Trapping Rain Water

Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

Example 1:

Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.
Example 2:

Input: height = [4,2,0,3,2,5]
Output: 9
 

Constraints:

n == height.length
1 <= n <= 2 * 104
0 <= height[i] <= 105
*/

class Solution {
public:
    int trap(vector<int>& height) {

        int result=0;

        if(height.empty())
            return result;
        
        int length = height.size();
        int left =0,right = length-1;

        int left_max = height.front();
        int right_max = height.back();

        while(left<right)
        {
            if(height[left]<height[right])
            {
                left++;
                left_max = max(left_max,height[left]);
                result+= left_max-height[left];
            }
            else {
                right--;
                right_max = max(right_max,height[right]);
                result+= right_max - height[right];
            }
        }
        end:
            return result;
    }
};