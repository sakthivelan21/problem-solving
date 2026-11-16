/*
2134. Minimum Swaps to Group All 1's Together II
https://leetcode.com/problems/minimum-swaps-to-group-all-1s-together-ii/description/
*/

class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int ones_count = 0 ;
        int max_sliding_ones_count = 0, cur_sliding_ones_count=0;
        int length = nums.size();
        int i=0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
                ones_count++;
        }

        /*First Sliding window calculation of values*/
        for(i=0;i<ones_count;i++)
        {
            if(nums[i]==1)
                cur_sliding_ones_count++;
        }

        max_sliding_ones_count = cur_sliding_ones_count;

        /*moving Sliding window calculation of values*/

        for(;i<(length+ones_count);i++)
        {   

            /*dropping the edge values of number ones from the count and being circular array avoiding overflow with rotation*/
            cur_sliding_ones_count += nums[i%length] - nums[i-ones_count];

            max_sliding_ones_count = max(max_sliding_ones_count,cur_sliding_ones_count);
        }


        return ones_count - max_sliding_ones_count;

    }
};