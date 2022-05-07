class Solution {
public:
    void recurse(int col,int n,vector<vector<string>>& ans,vector<string>& list,vector<int>& lr,vector<int>& ud,vector<int>& ld ){
        if(col==n){
            ans.push_back(list);
            return;
        }
        for(int row=0;row<n;row++){
            if(lr[row]==0 && ld[row+col]==0 && ud[n-1+col-row]==0){
                list[row][col]='Q';
                lr[row]=1;
                ld[row+col]=1;
                ud[n-1+col-row]=1;
                recurse(col+1,n,ans,list,lr,ud,ld);
                list[row][col]='.';
                lr[row]=0;
                ld[row+col]=0;
                ud[n-1+col-row]=0;
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        string s(n,'.');
        vector<string> list(n);
        vector<int> lr(n,0), ud(2*n-1,0), ld(2*n-1,0);
        for(int i=0;i<n;i++){
            list[i]=s;
        }
        recurse(0,n,ans,list,lr,ud,ld);
        return ans;
    }
};