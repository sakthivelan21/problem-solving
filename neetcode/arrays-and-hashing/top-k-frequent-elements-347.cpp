class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int> map;
        vector<int> result;

        for(int i=0;i<nums.size();i++)
            map[nums[i]]++;
        
        priority_queue<pair<int,int>> pq;

        for(auto it=map.begin();it!=map.end();it++)
        {
            pq.push({it->second,it->first});
        }

        int count=0;
        while(count<k && !pq.empty())
        {
            pair<int,int> p = pq.top();
            pq.pop();
            result.push_back(p.second);
            count++;
        }

        while (!pq.empty()) {
            pq.pop();
        }
        map.clear();

        return result;
    }
};