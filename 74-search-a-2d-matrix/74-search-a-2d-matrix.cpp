class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(); 
        int n=matrix[0].size();
        int i,j;
        for(i=0;i<m;i++){
            if(matrix[i][n-1]>=target){
                break;
            }
        }
        if(i<m)
        {
            for(j=0;j<n;j++){
            if(matrix[i][j]==target){
                return true;
            }
        }
        }
        return false;
    }
};