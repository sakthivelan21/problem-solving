class Solution {
public:
    bool isAnagram(string s, string t) {
        
        vector<int> map(26,0);


        for(int i=0;i<s.size();i++)
        {
            map[s[i]-'a']++;
        }

        int diff=0;

        for(int j=0;j<t.size();j++)
        {
            diff = t[j]-'a';

            map[diff]--;
            if(map[diff]<0)
                return false;
        }

        for(int i=0;i<26;i++)
        {
            if(map[i]!=0)
                return false;
        }

        return true;

    }
};