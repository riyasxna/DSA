// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    void recurse(int i,int j,int n,vector<vector<int>>& vis,string path,vector<vector<int>> &m,vector<string>& ans){
        if(i==n-1 && j==n-1){
            ans.push_back(path);
            return;
        }
        if(i+1<n && m[i+1][j]==1 && !vis[i+1][j]){
            vis[i][j]=1;
            recurse(i+1,j,n,vis,path+'D',m,ans);
            vis[i][j]=0;
        }
        if(j-1>=0 && m[i][j-1]==1 && !vis[i][j-1]){
            vis[i][j]=1;
            recurse(i,j-1,n,vis,path+'L',m,ans);
            vis[i][j]=0;
        }
        if(j+1<n && m[i][j+1]==1 && !vis[i][j+1]){
            vis[i][j]=1;
            recurse(i,j+1,n,vis,path+'R',m,ans);
            vis[i][j]=0;
        }
        if(i-1>=0 && m[i-1][j]==1 && !vis[i-1][j]){
            vis[i][j]=1;
            recurse(i-1,j,n,vis,path+'U',m,ans);
            vis[i][j]=0;
        }
    }
    
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        vector<vector<int>> vis(n,vector<int>(n,0));
        string path="";
        if(m[0][0]==1){
            recurse(0,0,n,vis,path,m,ans);
        }
        return ans;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends