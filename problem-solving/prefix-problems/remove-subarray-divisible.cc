//1590. Make Sum Divisible by P

class Solution {
/*
1) we need to find the remainder=sum(total_array)%p
2) we need to have a hashmap to store each prefix_sum of sum(subarray)%p and index
3) we iterate them and try to find a match for sum(subarray)%p==remainder
4) 
*/
public:
    int minSubarray(vector<int>& nums, int p) {
        int remainder = 0, sum = 0,rem;
        unordered_map<int,int> map={{0,-1}};
        int cur = 0, last = 0;
        int result = nums.size();


        for(int i=0;i<nums.size();i++)
            remainder = (remainder + nums[i])%p; // to avoid int overflow

        for(int i=0;i<nums.size();i++)
        {
            cur = (cur+nums[i])%p;

            map[cur] = i ; // tracking prefix remainder values in array

            rem = (cur - remainder + p) %p ;// to avoid negative overflow in mod 

            if(map.count(rem))
            {
                result = min(result,i-map[rem]);// calculate subarray length
            }
        }

        return result>= nums.size()  ? -1 : result;
    }
};