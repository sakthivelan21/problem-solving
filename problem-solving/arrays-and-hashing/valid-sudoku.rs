use std::collections::HashMap;

impl Solution {
    pub fn is_valid_sudoku(board: Vec<Vec<char>>) -> bool {
        let mut row : Vec<HashMap<char,bool>>  = vec![HashMap::new();9];
        let mut col : Vec<HashMap<char,bool>>  = vec![HashMap::new();9];


        let mut map  = HashMap::new();

        for i in (0..9).step_by(3) {
            for j in (0..9).step_by(3){
                map.clear();
                for x in (i..i+3) {
                    for y in (j..j+3) {
                        if board[x][y]=='.' {
                            continue;
                        }
                        if (map.contains_key(&board[x][y]) || row[x].contains_key(&board[x][y]) || col[y].contains_key(&board[x][y])) {
                            return false;
                        }
                        map.insert(board[x][y],true);
                        row[x].insert(board[x][y],true);
                        col[y].insert(board[x][y],true);

                    }
                }
            }
        }

        return true;
    }
}