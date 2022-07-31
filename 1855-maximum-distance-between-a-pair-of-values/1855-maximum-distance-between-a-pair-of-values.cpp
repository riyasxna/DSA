class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size(),res=0;
        for(int i=0;i<n;i++){
            int l=i, r=m-1;
            while(l<=r){
                int j=(l+r)/2;
                if(nums1[i]<=nums2[j]){
                    res=max(res,j-i);
                    l=j+1;
                }
                else
                    r=j-1;
            }
        }
        return res;
    }
};