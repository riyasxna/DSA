class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string s2=s;
        reverse(s2.begin(),s2.end());
        int x=s.size(), y=s2.size();
        int dp[x+1][y+1];
        for(int i=0;i<=x;i++){
            for(int j=0;j<=y;j++){
                if(i==0||j==0)
                dp[i][j]=0;
            }
        }
         for(int i=1;i<=x;i++){
            for(int j=1;j<=y;j++){
                if(s[i-1]==s2[j-1])
                dp[i][j]=1+dp[i-1][j-1];
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[x][y];
    }
};