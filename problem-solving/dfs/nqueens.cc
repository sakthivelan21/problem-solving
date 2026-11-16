class Solution {
public:

    unordered_set<int> cols,pos,neg;
    int totalNQueens(int n) {
        int count =0;
        vector<bool> res(n,false);
        vector<vector<bool>> result(n,res);

        dfs(result,0,count,n);
        return count;
    }

    void dfs(vector<vector<bool>> &result,int index,int &count,int n)
    {
        if(index>=n)
        {
            count++;
            return;
        }

        for(int y=0;y<n;y++)
        {
            int positive = index + y;
            int negative = index - y;
            if(cols.find(y)!=cols.end() || pos.find(positive)!=pos.end() || neg.find(negative) != neg.end() )
            {
                continue;
            }


            // add to tracking
            cols.insert(y);
            pos.insert(positive);
            neg.insert(negative);

            result[index][y]=true;

            dfs(result,index+1,count,n);

             cols.erase(y);
            pos.erase(positive);
            neg.erase(negative);

            result[index][y]=false;

        }
    }
};