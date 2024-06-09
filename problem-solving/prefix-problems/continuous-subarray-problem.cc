/*
523. Continuous Subarray Sum
Given an integer array nums and an integer k, return true if nums has a good subarray or false otherwise.

A good subarray is a subarray where:

its length is at least two, and
the sum of the elements of the subarray is a multiple of k.
Note that:

A subarray is a contiguous part of the array.
An integer x is a multiple of k if there exists an integer n such that x = n * k. 0 is always a multiple of k.
 

Example 1:

Input: nums = [23,2,4,6,7], k = 6
Output: true
Explanation: [2, 4] is a continuous subarray of size 2 whose elements sum up to 6.
*/



//A proof sketch:
// Suppose sum_i represents the running sum starting from index 0 and ending at i
// once we find a mod that has been seen, say modk, we have:

// current one: sum_i = m*k + modk
// previous one: sum_j = n*k + modk
// Thus,
// sum_i - sum_j = (m - n) *k

//so if two runningSum mod k have the same values, then when they are subtracted, they are bound to be multiples of k

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        int prefix_sum = 0;

        // as minimal length is 2 , avoiding lower length 
        if(nums.size()<2)
            return false;

        //Why to insert <0,-1> for the hashmap
        
        // <0,-1> can allow it to return true when the runningSum%k=0,
        
        //for example [1,2,3] is input and k=6
        //then the remainders are [ 1,3,0] i.e runningSum = runningSum%k
        //now 1+2+3=6 which is actually a multiple of 6 and hence 0 should be stored in the hashmap
        
        //ok - but why -1?
        //-1 is good for storing for 0 because - it will remove the case where we consider only the first element which alone may be a multiple as 0-(-1) is not greater than 1
        
        // In addition, it also avoids the first element of the array is the multiple of k, since 0-(-1)=1 is not greater than 1.

        map[0] = -1;
        
        for(int i=0;i<nums.size();i++)
        {
            // calculate prefix sum
            prefix_sum += nums[i];

            if(k!=0)
                prefix_sum = prefix_sum % k ;
            
            if(map.find(prefix_sum) != map.end())
            {
                if(i - map[prefix_sum] > 1)
                    return true;
            }
            else 
                map[prefix_sum] = i;
        }     

        return false;
    }
};