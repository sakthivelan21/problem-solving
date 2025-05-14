class Solution {
    public:
    
        string count_str(string s)
        {
            string result = "";
    
            char c;
    
            int map[26]={0};
    
            for(int i=0;i<s.size();i++)
            {
                map[s[i]-'a']++;
            }
    
            for(int k=0;k<26;k++)
            {
                c = 'a'+k;
                for(int i=0;i<map[k];i++)
                    result+=c;
            }
    
            return result;
        }
    
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
            vector<vector<string>> result;
    
            unordered_map<string,int> map;
            
            for(int i=0;i<strs.size();i++)
            {
                string key = count_str(strs[i]);
    
                if(map.find(key)!=map.end())
                {
                    result[map[key]].push_back(strs[i]);
                }
                else 
                {
                    map[key]=result.size();
                    result.push_back({strs[i]});
                }
            }
    
            return result;
        }
    };