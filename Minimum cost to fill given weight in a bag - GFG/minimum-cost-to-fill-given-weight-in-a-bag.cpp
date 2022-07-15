// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.

class Solution{
		

	public:
	int minimumCost(int cost[], int n, int w) 
	{ 
        // Your code goes here
        vector<int> dp(w+1,INT_MAX);
        dp[0]=0;
        for(int i=1;i<=w;i++){
            for(int j=0;j<n;j++){
                if(j+1>i) 
                break;
                if(dp[i-j-1]!=INT_MAX && cost[j]!=-1){
                    dp[i]=min(dp[i],cost[j]+dp[i-j-1]);
                }
            }
        }
        return dp[w]==INT_MAX?-1:dp[w];
	} 
};


// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, w;
        cin >> n >> w;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minimumCost(a, n, w) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends