class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;

        vector<int> res(2,0);

        int diff;

        for(int i=0;i<nums.size();i++)
        {
            diff = target - nums[i];

            if(map.find(diff)!=map.end())
            {
                res[0]=map[diff];
                res[1]=i;
                break;
            }

            map[nums[i]]=i;
        }

        return res;
    }
};