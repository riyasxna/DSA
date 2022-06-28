class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int ans=0,start=0,end=arr.size()-1;
        while(start<end){
            int mid=(start+end)/2;
            if(arr[mid]>arr[mid+1]){
                end = mid;
                ans=mid;
            }
            else{
                ans=mid+1;
                start=mid+1;
            }
        }
        return ans;
    }
};