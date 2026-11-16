class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(),0);

        int length = nums.size();

        vector<int> prefix_sum(length+1,1);
        vector<int> suffix_sum(length+1,1);

        int end = length-2;

        prefix_sum[0] = nums[0];
        suffix_sum[length-1] = nums.back(); 

        for(int start=1;start<length;start++)
        {
            prefix_sum[start] = prefix_sum[start-1] * nums[start];
            suffix_sum[end] = suffix_sum[end+1] * nums[end];
            end--; 
        }

        // printf("prefix ");
        // for(int i=0;i<=length;i++)
        // {
        //     printf("%d ",prefix_sum[i]);
        // }
        // printf("\n");
        
        // printf("suffix ");
        // for(int i=0;i<=length;i++)
        // {
        //     printf("%d ",suffix_sum[i]);
        // }
        // printf("\n");

        result[0]=suffix_sum[1];

        result.back() = prefix_sum[length-2];
        
        for(int i=1;i<length-1;i++)
        {
            result[i] = prefix_sum[i-1] * suffix_sum[i+1]; 
        }

        return result;
    }
};