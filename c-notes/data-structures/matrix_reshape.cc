class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size(), n = mat[0].size();
        if(r*c !=m*n)
            return mat;
        vector<vector<int>> result;
        for(int i=0;i<r;i++)
        {
            vector<int> nums(c);
            result.push_back(nums);
        }
        int total = r*c;
        // trick to treate a 2d matrix as a single matrix 
        for(int i=0;i<total;i++)
            result[i/c][i%c] = mat[i/n][i%n];
        
        return result;
    }
};