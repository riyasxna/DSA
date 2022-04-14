class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m=board.size(), n=board[0].size();
        int dp[m][n];
        memset(dp,0,sizeof(dp));
        if(m==1 && n==1){
            board[0][0]=0;
            return;
        }
        else if(m==1 && n>1){
            for(int i=1;i<n-1;i++){
                if(board[0][i]==1){
                    if(board[0][i-1]+board[0][i+1]==2)
                        dp[0][i]=1;
                }
            }
        }
        else if(m>1 && n==1){
            for(int i=1;i<m-1;i++){
                if(board[i][0]==1){
                    if(board[i-1][0]+board[i+1][0]==2)
                        dp[i][0]=1;
                }
            }
        }
        else{
            if(board[0][0]==0){
                if(board[0][1]+board[1][0]+board[1][1]==3)
                    dp[0][0]=1;
            }
            else{
                if(board[0][1]+board[1][0]+board[1][1]==2 || board[0][1]+board[1][0]+board[1][1]==3)
                    dp[0][0]=1;
            }
            if(board[0][n-1]==0){
                if(board[0][n-2]+board[1][n-2]+board[1][n-1]==3)
                    dp[0][n-1]=1;
            }
            else{
                if(board[0][n-2]+board[1][n-2]+board[1][n-1]==2 || board[0][n-2]+board[1][n-2]+board[1][n-1]==3)
                    dp[0][n-1]=1;
            }
            if(board[m-1][0]==0){
                if(board[m-1][1]+board[m-2][0]+board[m-2][1]==3)
                    dp[m-1][0]=1;
            }
            else{
                if(board[m-1][1]+board[m-2][0]+board[m-2][1]==2 || board[m-1][1]+board[m-2][0]+board[m-2][1]==3)
                    dp[m-1][0]=1;
            }
            if(board[m-1][n-1]==0){
                if(board[m-1][n-2]+board[m-2][n-2]+board[m-2][n-1]==3)
                    dp[m-1][n-1]=1;
            }
            else{
                if(board[m-1][n-2]+board[m-2][n-2]+board[m-2][n-1]==2 || board[m-1][n-2]+board[m-2][n-2]+board[m-2][n-1]==3)
                    dp[m-1][n-1]=1;
            }
            for(int i=1;i<m-1;i++){
                if(board[i][0]==0){
                    if(board[i-1][0]+board[i+1][0]+board[i-1][1]+board[i][1]+board[i+1][1]==3)
                        dp[i][0]=1;
                }
                else{
                    if(board[i-1][0]+board[i+1][0]+board[i-1][1]+board[i][1]+board[i+1][1]==2 || board[i-1][0]+board[i+1][0]+board[i-1][1]+board[i][1]+board[i+1][1]==3)
                        dp[i][0]=1;
                }
            }
            for(int i=1;i<m-1;i++){
                if(board[i][n-1]==0){
                    if(board[i-1][n-1]+board[i+1][n-1]+board[i-1][n-2]+board[i][n-2]+board[i+1][n-2]==3)
                        dp[i][n-1]=1;
                }
                else{
                    if(board[i-1][n-1]+board[i+1][n-1]+board[i-1][n-2]+board[i][n-2]+board[i+1][n-2]==2 || board[i-1][n-1]+board[i+1][n-1]+board[i-1][n-2]+board[i][n-2]+board[i+1][n-2]==3)
                        dp[i][n-1]=1;
                }
            }
            for(int i=1;i<n-1;i++){
                if(board[0][i]==0){
                    if(board[0][i-1]+board[0][i+1]+board[1][i-1]+board[1][i]+board[1][i+1]==3)
                        dp[0][i]=1;
                }
                else{
                    if(board[0][i-1]+board[0][i+1]+board[1][i-1]+board[1][i]+board[1][i+1]==2 || board[0][i-1]+board[0][i+1]+board[1][i-1]+board[1][i]+board[1][i+1]==3)
                        dp[0][i]=1;
                }
            }
            for(int i=1;i<n-1;i++){
                if(board[m-1][i]==0){
                    if(board[m-1][i-1]+board[m-1][i+1]+board[m-2][i-1]+board[m-2][i]+board[m-2][i+1]==3)
                        dp[m-1][i]=1;
                }
                else{
                    if(board[m-1][i-1]+board[m-1][i+1]+board[m-2][i-1]+board[m-2][i]+board[m-2][i+1]==2 || board[m-1][i-1]+board[m-1][i+1]+board[m-2][i-1]+board[m-2][i]+board[m-2][i+1]==3)
                        dp[m-1][i]=1;
                }
            }
            for(int i=1;i<m-1;i++){
                for(int j=1;j<n-1;j++){
                    if(board[i][j]==0){
                        if(board[i-1][j-1]+board[i-1][j]+board[i-1][j+1]+board[i][j-1]+board[i][j+1]+board[i+1][j-1]+board[i+1][j]+board[i+1][j+1]==3)
                            dp[i][j]=1;
                    }
                    else{
                        if(board[i-1][j-1]+board[i-1][j]+board[i-1][j+1]+board[i][j-1]+board[i][j+1]+board[i+1][j-1]+board[i+1][j]+board[i+1][j+1]==2 || board[i-1][j-1]+board[i-1][j]+board[i-1][j+1]+board[i][j-1]+board[i][j+1]+board[i+1][j-1]+board[i+1][j]+board[i+1][j+1]==3)
                            dp[i][j]=1;
                    }
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                board[i][j]=dp[i][j];
            }
        }
        return;
    }
};