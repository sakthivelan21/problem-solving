/*
 *** Continuous Subarray Sum ***

 Given an integer array nums and an integer k, return true if nums has a continuous subarray of size at least two whose elements sum up to a multiple of k, or false otherwise.
 subarray length must be atleast 2 

 *** Example 1

 Input: nums = [23,2,4,6,7], k = 6
 Output: true
 Explanation: [2, 4] is a continuous subarray of size 2 whose elements sum up to 6.

 *** Example 2
 Input: nums = [23,2,6,4,7], k = 6
 Output: true
 Explanation: [23, 2, 6, 4, 7] is an continuous subarray of size 5 whose elements sum up to 42.
 42 is a multiple of 6 because 42 = 7 * 6 and 7 is an integer.

*/

import java.util.HashMap;

public class ContinuousSubArrayProblem{

    // Native Approach to solve the problem 
    // Time limit will be exceeded and two loops are needed 
    // picking all the sub array length and trying to check if sub array is divisible by k
    static boolean checkSubarraySumNativeApproach(int[] nums, int numsSize, int k){
        for(int i=numsSize;i>=2;i--)
        {
            for(int j=0;j<=numsSize-i;j++)
            {
                int num=0;
                for(int f=0;f<i;f++)
                    num+= nums[j+f];
                if(num%k==0)
                    return true;
            }
        }
        return false;
    }

    // optimised approach and best way to do it

    /*
    Time complexity: O(nums.length)O(nums.length).

    We perform O(nums.length)O(nums.length) operations with a hash map, each taking O(1)O(1) time on average.

    Space complexity: O(min⁡{nums.length,k})O(min{nums.length,k}).

    The size of a hash map does not exceed nums.length+1nums.length+1. It also does not exceed kk because there are only kk possible remainders.
    */
    public static boolean checkSubarraySum(int[] nums,int numsSize, int k) {
        if(nums.length==1)
            return false;
        HashMap <Integer,Integer> hashMap = new HashMap<Integer,Integer>();
        hashMap.put(0,0);
        int sum =0; 
        for(int i=0;i<nums.length;i++)
        {
            // adding the each element to the sum 
            sum+=nums[i]; 
            
            // getting the remainder of the sum
            int rem = sum%k ; 
            
            // checking if the hashMap has already visited the same remainder 
            if(hashMap.containsKey(rem))
            {
                // currentIndex - old index > 1 ( to check whether the length is greater than 1)
                if((i+1)-hashMap.get(rem)>1)
                    return true;
            }
            else
            {
                // just placing the remainder and it's current position into hashMap
                hashMap.put(rem,i+1);
            }
        }
        return false;
    }


    // it will include all subarray with length from 1
    static int countSubArrayDivisble(int[] nums,int numsSize,int k)
    {
        int count=0;
        int sum=0,rem=0;
        HashMap<Integer,Integer> hashMap = new HashMap<Integer,Integer>();
        hashMap.put(0,1);

        for(int i=0;i<numsSize;i++)
        {
            sum+=nums[i];
            rem = sum%k;
            if(rem<0)
                rem+=k;
            if(hashMap.containsKey(rem))
            {
                count+= hashMap.get(rem);
                hashMap.put(rem,hashMap.get(rem)+1);
            }
            else 
            {
                hashMap.put(rem,1);
            }
        }
        return count;
    }


    public static void main(String[] args){
        int[] nums = {1,0,0};
        int k = 6;
        System.out.println(checkSubarraySum(nums,nums.length,k));
    }
}