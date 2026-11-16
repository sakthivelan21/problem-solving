class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int min_num = INT_MAX,max_num =  INT_MIN;

        for(int i=0;i<nums.size();i++)
        {
            min_num = min(min_num,nums[i]);
            max_num = max(max_num,nums[i]);
        }

        if(min_num+k >= max_num-k)
            return 0;
        else 
            return ((max_num-k)-(min_num+k));
    }
};