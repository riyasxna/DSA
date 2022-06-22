class Solution {
public:
    bool isPresent(vector<vector<char>>& m , int r, int c, int p, int q, string s, int pos){
        if(pos==s.length())
            return true;
        if(r<0 || r>p || c<0 || c>q || s[pos]!=m[r][c])
            return false;
        char ch=s[pos];
        m[r][c]=' ';
        bool found= isPresent(m,r, c-1,p,q,s,pos+1)|| isPresent(m,r,c+1,p,q,s,pos+1)||
                        isPresent(m,r-1,c,p,q,s,pos+1)|| isPresent(m,r+1,c,p,q,s,pos+1);
        m[r][c]=ch;
        return found;
    }
    
    
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]==word[0] && isPresent(board,i,j,board.size()-1,board[0].size()-1,word,0))
                    return true;
            }
        }
        return false;
        
    }
};