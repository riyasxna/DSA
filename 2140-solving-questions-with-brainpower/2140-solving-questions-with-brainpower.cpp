class Solution {
public:
    long long max(long long a, long long b){
        if(a>b)
            return a;
        return b;
    }
    
    long long mostPoints(vector<vector<int>>& ques) {
        vector<long long> dp(ques.size());
        dp[ques.size()-1]=ques[ques.size()-1][0];
        for(int i=ques.size()-2;i>=0;i--){
            int skip=i+ques[i][1]+1;
            if(skip<=ques.size()-1)
                dp[i]=max(ques[i][0]+dp[skip],dp[i+1]);
            else
                dp[i]=max(ques[i][0],dp[i+1]);
        }
        return dp[0];
    }
};