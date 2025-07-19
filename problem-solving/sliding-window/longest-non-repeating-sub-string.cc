class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> map;

        int max_size =0,j=0;

        for(int i=0;i<s.size();i++)
        {
            map[s[i]]++;
            while(map[s[i]]>1)
            {
                map[s[j]]--;

                if(map[s[j]]<=0)
                    map.erase(s[j]);
                j++;
            }

            max_size = max(max_size,i-j+1);
        }

        return max_size;
    }
};