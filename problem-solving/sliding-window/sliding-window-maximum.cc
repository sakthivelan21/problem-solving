class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;

        vector<int> result;

        for(int i=0;i<nums.size();i++) {
            
            // pop the min elements from back <nums[i]
            while(!dq.empty() && dq.back() < nums[i])
            {
                dq.pop_back();
            }
            // push the elements in to back
            dq.push_back(nums[i]);

            // pop back the slider passed elements
            if(i>=k && dq.front()==nums[i-k]){
                dq.pop_front();
            }
            // push result elements into result
            if(i>=k-1)
            result.push_back(dq.front());
        }

        return result;
    }
};