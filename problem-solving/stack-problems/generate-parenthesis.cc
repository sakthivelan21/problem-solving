class Solution {
public:

    void dfs(int balance, string str,int size , vector<string> &result)
    {
        if(str.size()==size) {
            if(balance==0) {
                result.push_back(str);
            }
            return;
        }

        if(balance+1>=0) {
            dfs(balance+1,str+'(',size,result);
        }

        if(balance-1>=0){
            dfs(balance-1,str+')',size,result);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> result;
        int size = n*2;
        dfs(0,"",size,result);
        return result;
    }
};