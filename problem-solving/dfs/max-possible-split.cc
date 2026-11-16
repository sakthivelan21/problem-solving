class Solution {
public:
    int dfs(string s , int start, unordered_set<string> &my_set)
    {
        int max_split=0;
        if(start>=s.size())
            return 0;

        for(int end=start+1;end<=s.size();end++)
        {
            string sub_str = s.substr(start,end-start);
            // printf("%s %d %d\n",sub_str.c_str(),start,end);
            if(my_set.find(sub_str)==my_set.end())
            {
                my_set.insert(sub_str);
                max_split = max(max_split,1+ dfs(s,end,my_set));
                my_set.erase(sub_str);
            }
        }

        return max_split;
    }
    int maxUniqueSplit(string s) {
        unordered_set<string> my_set;
        return dfs(s,0,my_set);
    }
};