// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int w, int wt[], int val[], int n) 
    { 
       int dp[w+1][n+1];
       for(int i=0;i<=w;i++){
           dp[i][0]=0;
       }
       for(int i=0;i<=n;i++){
           dp[0][i]=0;
       }
       for(int i=1;i<=w;i++){
           for(int j=1;j<=n;j++){
               if(i>=wt[j-1]){
                   dp[i][j]=max(dp[i][j-1],val[j-1]+dp[i-wt[j-1]][j-1]);
               }
               else
               dp[i][j]=dp[i][j-1];
           }
       }
       return dp[w][n];
    }
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends