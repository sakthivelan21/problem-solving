class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        long long result=0;
        map<int,int> map;
        vector<int> miss;

        for(int i=0;i<basket1.size();i++)
            map[basket1[i]]++;
        
        for(int i=0;i<basket2.size();i++)
            map[basket2[i]]--;

        int small = begin(map)->first;
        for( auto [k,v] : map) {
            if(v&1)
                return -1;

            for(int i=0;i<abs(v)/2;i++)
                miss.push_back(k);
        }

        for(int i=0;i<miss.size()/2;i++)
            result+= min(small*2,miss[i]);
        
        return result;
    }
};