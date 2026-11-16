
// 594. Longest Harmonious Subsequence
class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> map;

        int result = 0;

        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;

            if(map.find(nums[i]+1)!=map.end()){
                result = max(result,map[nums[i]] + map[nums[i]+1]);
            }
            if(map.find(nums[i]-1)!=map.end()){
                result = max(result,map[nums[i]] + map[nums[i]-1]);
            }
        }

        return result;
    }
};