class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size(),m=matrix[0].size();
        int low=matrix[0][0],high=matrix[n-1][m-1];
        while(low<high){
            int j=m-1,cnt=0;
            int mid=(low+high)>>1;
            for(int i=0;i<n;i++){
                while(j>=0 && matrix[i][j]>mid){
                    j--;
                }
                cnt+=j+1;
            }
            if(cnt<k)
                low=mid+1;
            else
                high=mid;
        }
        return low;
    }
};