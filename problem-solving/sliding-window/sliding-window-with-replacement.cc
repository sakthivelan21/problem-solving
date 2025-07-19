class Solution {
public:
    int characterReplacement(string s, int k) {
        int result = 0;
        int left = 0;
        unordered_map<char,int> map;
        int max_val = 0, diff=0,len=0;
        for(int i=0;i<s.size();i++)   
        {

            map[s[i]]++;
            len = i-left+1;
            if(map[s[i]] > max_val) {
                max_val= map[s[i]];
            }
            diff = len - max_val; 
            while(diff>k){

                map[s[left]]--;
                if(s[left]<=0)
                    map.erase(s[left]);
                left++;
                // update values 
                max_val = 0;
                for(auto it=map.begin();it!=map.end();it++) {
                    if(it->second>max_val) {
                        max_val = it->second;
                    }
                }
                len = i-left+1;
                diff = len - max_val; 

            }
            result = max(result,len);
        }
        return result;
    }
};