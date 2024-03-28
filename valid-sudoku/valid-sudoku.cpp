class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<int,int>row;
        map<int,int>col;
        map<int,int>each;
        int i,j,x,y;
        for(i=0;i<9;i++){
            for(j=0;j<9;j++){
                if(board[i][j]!='.')
                        row[board[i][j]]++;
                if(board[j][i]!='.')
                        col[board[j][i]]++;
            
            if(row[board[i][j]]>1)
                    return false;
            if(col[board[j][i]]>1)
                return false;
            }
            row.clear();
            col.clear();
        }
        for(i=0;i<9;i+=3){
            for(j=0;j<9;j+=3){
                each.clear();
                for(x=i;x<i+3;x++){
                    for(y=j;y<j+3;y++){
                        if(board[x][y]!='.'){
                            each[board[x][y]]++;
                        }
                if(each[board[x][y]]>1)
                        return false;
                    }
                }
            }
        }
        return true;
    }
};