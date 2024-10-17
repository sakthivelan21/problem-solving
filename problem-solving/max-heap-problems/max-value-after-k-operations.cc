//Maximal Score After Applying K Operations
class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long sum = 0;
        priority_queue<int> pq;
        int num = 0;

        for(int i=0;i<nums.size();i++)
        {
            pq.push(nums[i]);
        }

        while(k--)
        {
            num = pq.top();
            pq.pop();
            sum+=num;
            pq.push(ceil(num/3.0));
        }

        return sum;
    }
};