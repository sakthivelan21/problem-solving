class Solution {
public:

    string generate_key(string &strs)
    {
        vector<int> map(26,0);

        for(int i=0;i<strs.size();i++)
            map[strs[i]-'a']++;
        
        string result="";

        for(int i=0;i<26;i++)
        {
            if(!map[i])
                continue;

            result += ('a'+i);
            result+=to_string(map[i]);
        }

        return result;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> result;

        unordered_map<string,int> map;

        for(int i=0;i<strs.size();i++)
        {
            string key = generate_key(strs[i]);

            if(map.find(key)==map.end())
            {
                map[key]=result.size();
                vector<string> str_array;
                str_array.push_back(strs[i]);
                result.push_back(str_array);
            }
            else 
            {
                result[map[key]].push_back(strs[i]);
            }
        }

        return result;
    }
};