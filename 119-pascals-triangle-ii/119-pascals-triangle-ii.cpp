class Solution {
public:
    vector<int> getRow(int r) {
        vector<vector<int>> dp;
        for(int i=0;i<=r;i++){
            vector<int> temp(i+1,1);
            for(int j=1;j<i;j++){
                temp[j]=dp[i-1][j-1]+dp[i-1][j];
            }
            dp.push_back(temp);
        }
        return dp[r];
    }
};