class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0, right = nums.size()-1;
        int mid = 0;

        while(left<right){

            mid = (left+right)/2;
            // navigate to second breaking half
            if(nums[mid]>nums[right]) {
                left = mid +1;
            }else {// adjust right to be mid , so that left holds min
                right = mid;
            }
        }

        return nums[left];
    }
};