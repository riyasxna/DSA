class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> left(n), right(n);
        int w=n-k+1;
        for(int i=0;i<n;i++){
            left[i]=nums[i];
            if(i%k!=0){
                left[i]=max(left[i-1],left[i]);
            }
        }
        right[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            right[i]=nums[i];
                if(i%k!=(k-1))
                    right[i]=max(right[i+1],right[i]);
        }
        vector<int> res(w);
        for(int i=0;i<w;i++){
            res[i]=max(right[i],left[i+k-1]);
        }
        return res;
    }
};