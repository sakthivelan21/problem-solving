bool dfs_check(char** board,int i , int j, int row , 
            int col,char* word, int word_len, int word_index)
{
    char temp ='\'0';
    bool result = false;
    if(word_index==word_len)
        return true;
    if(i<0 || i>row-1 || j<0 || j>col-1 || board[i][j]!=word[word_index])
        return false;
    temp = board[i][j];
    // to make it not visit again
    board[i][j]=' ';

    result = (dfs_check(board,i+1,j,row,col,word,word_len,word_index+1) || 
     dfs_check(board,i,j+1,row,col,word,word_len,word_index+1) ||
     dfs_check(board,i-1,j,row,col,word,word_len,word_index+1) ||
     dfs_check(board,i,j-1,row,col,word,word_len,word_index+1));
    board[i][j] = temp;
    return result;
}


bool exist(char** board, int boardSize, int* boardColSize, char* word) {
    int row = boardSize;
    int col = boardColSize[0];
    int word_len = 0;
    if(!board || !word)
        goto end;

    word_len = strlen(word);

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(dfs_check(board,i,j,row,col,word,word_len,0))
                return true;
        }
    }
    end:
    return false;
}