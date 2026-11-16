class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

            vector<vector<int>> result;

            sort(nums.begin(),nums.end());

            int left,right, length= nums.size();
            int sum;

            for(int i=0;i<nums.size();i++)
            {
                // avoid duplicate value rechecking
                if(i>0 && nums[i]==nums[i-1])
                    continue;

                // two sum from here 

                left =i+1;
                right = length -1;

                while(left<right)
                {
                    sum = nums[left]+nums[right]+ nums[i];

                    if(sum==0)
                    {
                        vector<int> arr = {nums[i],nums[left],nums[right]};
                        result.push_back(arr);
                        left++;
                        while (nums[left]==nums[left-1] && left<right)
                            left++;
                    }
                    else if(sum>0)
                    {
                        right-=1;
                    }
                    else if(sum<0)
                    {
                        left+=1;
                    }
                }
            }

            return result;
    }
};