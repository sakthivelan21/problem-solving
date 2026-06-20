class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        unordered_map<int,unordered_set<int>> row_map,col_map;

        unordered_set<int> sub_box;

        int r = board.size();
        int c= board[0].size();


        for(int i=0;i<r;i+=3)
        {
            for(int j=0;j<c;j+=3)
            {

                sub_box.clear();
                for(int x=i;x<i+3;x++)
                {
                    // unordered_set<int> set_map;
                    // row_map[x] = set_map;

                    for(int y=j;y<j+3;y++)
                    {
                        if(board[x][y]=='.')
                            continue;

                        // if(col_map.find(y)==col_map.end())
                        // {
                        //     unordered_set<int> set_map;
                        //     col_map[y] = set_map;
                        // }

                        if(row_map[x].find(board[x][y])!=row_map[x].end())
                        {
                            return false;
                        }
                        row_map[x].insert(board[x][y]);

                        if(col_map[y].find(board[x][y])!=col_map[y].end())
                        {
                            return false;
                        }
                        col_map[y].insert(board[x][y]);

                        if(sub_box.find(board[x][y])!=sub_box.end())
                        {
                            return false;
                        }
                        sub_box.insert(board[x][y]);
                    }
                }
            }
        }

        return true;
    }
};