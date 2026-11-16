class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
       

       sort(nums.begin(),nums.end());

       int max_p = INT_MIN,min_p = INT_MAX;

       int result = nums[nums.size()-1] - nums[0];

       for(int i=0;i<nums.size()-1;i++)
       {
            // we choose a,b hoping that 
            // As in Smallest Range I, smaller A[i] will choose to increase their value ("go up"), and bigger A[i] will decrease their value ("go down").
            // so we don't have to choose the other way around;

            int a = nums[i];
            int b = nums[i+1];

            max_p = max(nums[nums.size()-1]-k, a+k);

            min_p = min(nums[0]+k,b-k);

            result = min(result,max_p-min_p);
       }

       return result;


    }
};