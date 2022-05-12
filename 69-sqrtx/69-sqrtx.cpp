class Solution {
public:
    int mySqrt(int x) {
        if(x<=1)
            return x;
        long long l=1,r=x/2,ans=LLONG_MIN,mid;
        while(l<=r){
            mid=(l+r)/2;
            if(mid*mid<=x){
                ans=max(ans,mid);
                l=mid+1;
            }
            else
                r=mid-1;
        }
        return ans;
    }
};