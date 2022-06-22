class Solution {
public:
    int vis[10][10];
    
    bool dfs(vector<vector<char>>& board, int i, int j, string word, string temp){
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || board[i][j] != word[temp.size()] || vis[i][j]){
            return false;
        }
        temp += board[i][j];
        vis[i][j] = 1;
        if(temp == word)
            return true;
        bool a = dfs(board, i+1, j, word, temp);
        bool b = dfs(board, i-1, j, word, temp);
        bool c = dfs(board, i, j+1, word, temp);
        bool d = dfs(board, i, j-1, word, temp);
        vis[i][j] = 0;
        return (a || b || c || d);
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size(), m = board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0]){
                    if(dfs(board, i, j, word, ""))
                        return true;    
                }
            }
        }
        return false;
    }
};