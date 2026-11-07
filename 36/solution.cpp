class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            bool seen[10]={false};
            for(int j=0;j<9;j++){
                if(board[i][j]=='.')
                continue;
                int num=board[i][j]-'0';
                if(seen[num])
                return false;
                seen[num]=true;

            }
        }
          for(int j = 0; j < 9; j++) {
            bool seen[10] = {false};

            for(int i = 0; i < 9; i++) {

                if(board[i][j] == '.')
                    continue;

                int num = board[i][j] - '0';

                if(seen[num])
                    return false;

                seen[num] = true;
            }
        }
        for(int r = 0; r < 9; r += 3) {
            for(int c = 0; c < 9; c += 3) {

                bool seen[10] = {false};

                for(int i = r; i < r + 3; i++) {
                    for(int j = c; j < c + 3; j++) {

                        if(board[i][j] == '.')
                            continue;

                        int num = board[i][j] - '0';

                        if(seen[num])
                            return false;

                        seen[num] = true;
                    }
                }
            }
        }

        return true;
        
    }
};