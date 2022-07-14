class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int res=0,start=1,i=0;
        while(k && i<arr.size()){
            if(arr[i]==start){
                i++;
                start++;
            }
            else{
                res=start;
                start++;
                k--;
            }
        }
        return k==0?res:start+k-1;
    }
};