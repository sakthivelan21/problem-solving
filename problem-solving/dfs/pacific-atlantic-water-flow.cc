class Solution {
public:
    int row,col;
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        vector<vector<int>> result;

        row = heights.size();
         col = heights[0].size();

        // lookup maps to keep track
        vector<vector<bool>> pacific(row,vector<bool>(col,false));
        vector<vector<bool>> atlantic(row,vector<bool>(col,false));

        // from target to source appraoch to reduce time complexity 
        for(int i=0;i<row;i++) {
            
            dfs(heights,pacific,i,0,heights[i][0]); // pacific left
            dfs(heights,atlantic,i,col-1,heights[i][col-1]); // atlantic right
        }

        for(int j=0;j<col;j++) {
            dfs(heights,pacific,0,j,heights[0][j]); // pacific top
            dfs(heights,atlantic,row-1,j,heights[row-1][j]); // atlantic bottom
        }

        for(int i=0;i<row;i++ ){
            for(int j=0;j<col;j++) {
                if(pacific[i][j] && atlantic[i][j]) {
                    result.push_back({i,j});
                }
            }
        }

        return result;

    }

    void dfs(vector<vector<int>> &heights,vector<vector<bool>> &visited,int i,int j,int &val) {

        if(i<0 || j<0 || i>=row || j>=col || visited[i][j]) {
            return;
        }

        if (heights[i][j] < val) {
            return;
        }

        visited[i][j] = true;

        dfs(heights,visited,i-1,j,heights[i][j]);
        dfs(heights,visited,i,j-1,heights[i][j]);

        dfs(heights,visited,i,j+1,heights[i][j]);

        dfs(heights,visited,i+1,j,heights[i][j]);

    }
};