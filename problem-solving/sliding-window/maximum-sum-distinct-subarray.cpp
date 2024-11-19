/*
2461. Maximum Sum of Distinct Subarrays With Length K
*/

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long max_sum=0, cur_sum=0;

        unordered_map<int,int> map;

        int i=0,len=nums.size(),j=0;

        while(i<len)
        {
            while(j<len && map.size()<k)
            {
                if(map.find(nums[j])!=map.end())
                {
                    while(i<=map[nums[j]])
                    {
                        cur_sum-=nums[i];
                        map.erase(nums[i++]);
                    }
                }
                map[nums[j]]=j;
                cur_sum+=nums[j];
                j++;
            }
            // for(auto it=map.begin();it!=map.end();it++)
            // {
            //     printf("%d ",it->first);
            // }
            // printf(" sum %ld\n",cur_sum);
            if(map.size()==k)
                max_sum=max(cur_sum,max_sum);
            cur_sum-=nums[i];
            map.erase(nums[i]);
            i++;
        }

        return max_sum;


    }
};