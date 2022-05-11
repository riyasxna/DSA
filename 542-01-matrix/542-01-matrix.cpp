class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m=mat.size(), n=mat[0].size(),dummy=1e9;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0)
                    continue;
                int a=dummy,b=dummy;
                if(i-1>=0){
                    a=mat[i-1][j];
                }
                if(j-1>=0){
                    b=mat[i][j-1];
                }
                mat[i][j]=min(a,b)+1;
            }
        }
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                if(mat[i][j]==0)
                    continue;
                int a=dummy,b=dummy;
                if(i+1<=m-1){
                    a=mat[i+1][j];
                }
                if(j+1<=n-1){
                    b=mat[i][j+1];
                }
                mat[i][j]=min(mat[i][j],min(a,b)+1);
            }
        }
        return mat;
    }
};