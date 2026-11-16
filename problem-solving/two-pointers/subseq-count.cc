class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int mod = 1e9+7;
        int left = 0, right = nums.size()-1;
        vector<int> pow_arr(nums.size(),1);

        for(int i=1;i<nums.size();i++){
            pow_arr[i] = (pow_arr[i-1]*2)%mod;
        }
        int result =0;

        while(left<=right){
            if(nums[left]+nums[right]>target) {
                right--;
            } else {
                result = (result+pow_arr[right-left])%mod;
                left++;
            }
        }

        return result;
    }
};