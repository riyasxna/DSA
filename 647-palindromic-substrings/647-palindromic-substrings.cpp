class Solution {
public:
    int countSubstrings(string s) {
        int n=s.size(),start=0,len=0,temp;
        int res=0;
        int dp[n][n];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<n;i++){
            dp[i][i]=1;
            res++;
        }
        len=1;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                dp[i][i+1]=1;
                res++;
                temp=2;
                if(temp>len){
                    start =i;
                    len=2;
                }
            }
        }
        for(int k=3;k<=n;k++){
            for(int i=0;i<=n-k;i++){
                int j=i+k-1;
                if(s[i]==s[j] && dp[i+1][j-1]==1){
                    dp[i][j]=1;
                    res++;
                    if(k>len){
                        len=k;
                        start=i;
                    }
                }
            }
        }
        return res;
    }
};