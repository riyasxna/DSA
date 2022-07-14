class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> dp;
        for(int i=0;i<n;i++){
            vector<int> temp(i+1,1);
            for(int j=1;j<i;j++){
                temp[j]=dp[i-1][j-1]+dp[i-1][j];
            }
            dp.push_back(temp);
        }
        return dp;
    }
};