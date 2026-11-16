class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int result = 0;
        int min_length = INT_MAX;
        int left = 0;

        int i = 0;

        for(i=0;i<nums.size() && result<target;i++) {
            result+=nums[i];
        }

        for(;i<nums.size();i++) {
            
            while(result>=target) {
                min_length = min(min_length,i-left);
                result-=nums[left++];
            }
            result+=nums[i];
        }
        int size = nums.size();
        while(left<size && result>=target) {
            min_length = min(min_length,size-left);
            result-=nums[left++];
        }
        if(min_length==INT_MAX){
            min_length=0;
        }
        return min_length;
    }
};