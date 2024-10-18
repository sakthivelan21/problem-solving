// 2044. Count Number of Maximum Bitwise-OR Subsets

class Solution {
public:
    void dfs(vector<int> &nums,int index,int cur_sum,int max_sum, int &count)
    {
        if(index==nums.size())
        {
            if(max_sum==cur_sum)
                count++;
            return;
        }
        
        dfs(nums,index+1,cur_sum|nums[index],max_sum,count);
        dfs(nums,index+1,cur_sum,max_sum,count);

    }
    int countMaxOrSubsets(vector<int>& nums) {
        int max_sum=0;
        int cur_sum=0;
        int count=0;
        for(int i=0;i<nums.size();i++)
            max_sum|=nums[i];
        
        dfs(nums,0,cur_sum,max_sum,count);
        return count;
    }
};