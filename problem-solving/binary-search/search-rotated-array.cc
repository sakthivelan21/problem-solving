class Solution {
public:

    int binary_search(vector<int> &nums,int target,int left , int right) {
        int mid = 0;
        printf("binary_search %d %d %d \n",target,left,right);
        while(left<=right) {
            mid = (left+right)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target){
                right = mid-1;
            } 
            else 
                left = mid +1;
        }

        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0,right = n-1;
        int mid = 0;

        while(left<right) {
            mid= (left+right)/2;
            // navigate to second half
            if(nums[mid]>nums[right]) {
                left = mid+1;
            } else // adjust right to be mid , so that left holds min
                right = mid;
        }

        if(target>=nums[left] && target<=nums[n-1]) {
            // printf("searching second half\n");
            return binary_search(nums,target,left,n-1);
        } 

        return binary_search(nums,target,0,left);
        
    }
};