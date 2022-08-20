class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> res;
        int i=0,j=0,dir=0,m=mat.size(),n=mat[0].size();
        res.push_back(mat[i][j]);
        while(i!=m-1 || j!=n-1){
            if(dir==0){
                if(j==n-1){
                    i++;
                    dir=1;
                }
                else if(i==0){
                    j++;
                    dir=1;
                }
                else{
                    i--;
                    j++;
                }
            }
            else{
                if(i==m-1){
                    j++;
                    dir=0;
                }
                else if(j==0){
                    i++;
                    dir=0;
                }
                else{
                    i++;
                    j--;
                }
            }
           res.push_back(mat[i][j]); 
        }
        return res;
    }
};