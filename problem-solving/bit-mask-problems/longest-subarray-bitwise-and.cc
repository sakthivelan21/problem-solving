class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        // bitwise and trick , if we and the same value we will get the max value 
        // or else value be decreased 

        int result = 0;
        int max_val = 0;
        int length = 1;
        int prev = nums[0];
        for(int i=1;i<nums.size();i++) {

            if(nums[i]==prev) {
                length++;
            }
            else {
                if (prev > max_val) {
                    max_val = prev;
                    result = length;
                } 
                else if(prev==max_val) {
                    result = max(length,result);
                }
                prev = nums[i];
                length = 1;
            }
        }
        if (prev > max_val) {
            max_val = prev;
            result = length;
        }
        // printf("result %d max_val %d\n",result,max_val);
        return result;
    }
};