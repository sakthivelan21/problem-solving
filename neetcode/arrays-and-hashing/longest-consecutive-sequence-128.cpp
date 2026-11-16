class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_map<int,int> map;
        int max_count=0;
        int count=0,start;

        for(int n : nums)
            map[n]++;

        for(auto it = map.begin();it!=map.end();it++)
        {
            if(map.find(it->first-1)!=map.end())
                continue;
            
            // we found unique u-1 element not found ,

            count=0;
            start=it->first;

            while(map.find(start)!=map.end())
            {
                count++;
                start++;
            }
            max_count = max(count,max_count);
        }

        return max_count;
    }
};