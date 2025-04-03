class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char,int>m1;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!= '.')
                {
                    m1[board[i][j]]++;
                    if(m1[board[i][j]] > 1){
                        return false;
                }
                }
            }
            m1.clear();
        }
        m1.clear();
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[j][i]!= '.')
                {
                    m1[board[j][i]]++;
                    if(m1[board[j][i]] > 1){
                        return false;
                }
                }
            }
            m1.clear();
        }
        m1.clear();
        for(int i=0;i<=6;i=i+3){
            for(int j=0;j<=6;j=j+3){
                for(int p=i;p<i+3;p++){
                    for(int k=j;k<j+3;k++){
                        if(board[p][k]!= '.')
                        {
                            m1[board[p][k]]++;
                            if(m1[board[p][k]] > 1)
                            return false;
                        }
                    }
                }
                m1.clear();
            }
            m1.clear();
        }
        return true;
    }
};
