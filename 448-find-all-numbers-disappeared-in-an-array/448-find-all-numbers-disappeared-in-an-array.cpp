class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int l=0,r=n-1,mid,target=1;
        vector<int> res;
        for(int i=1;i<=n;i++){
            l=0;
            r=n-1;
            while(l<=r){
                mid=(l+r)/2;
                if(nums[mid]==i)
                    break;
                else if(nums[mid]<i)
                    l=mid+1;
                else{
                    r=mid-1;
                }
            }
            if(r<l)
                res.push_back(i);
        }
        return res;
    }
};