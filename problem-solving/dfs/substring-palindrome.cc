class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;

        vector<string> temp;


        dfs(0,s,result,temp);

        return result;
    }

    bool is_valid_palindrome(string &s,int start,int end) {

        while(start<=end)
        {
            if(s[start]!=s[end])
                return false;
            start++;
            end--;
        }
        return true;
    }

    string create_string(string &s,int index,int end) {
        string  res= "";

        for(int i=index;i<=end;i++)
        {
            res+=s[i];
        }
        return res;
    }

    void dfs(int index,string &s,vector<vector<string>> &result, vector<string> &temp)
    {
        if(index>=s.size())
        {
            result.push_back(temp);
            return;
        }


        for(int i=index;i<s.size();i++)
        {
            // printf("string %s is_valid %d . index %d,%d \n",create_string(s,index,i).c_str(),is_valid_palindrome(s,index,i),index,i);
            if(is_valid_palindrome(s,index,i)) {
                temp.push_back(create_string(s,index,i));
                dfs(i+1,s,result,temp);
                temp.pop_back();
            }
            
        }
    }
};