class Solution {
public:
    bool isPerfectSquare(int num) {
        long long l=1,r=num/2,mid;
        long long sqr;
        if(num==1)
            return true;
        while(l<=r){
            mid=(l+r)/2;
            sqr=mid*mid;
            if(sqr==num)
                return true;
            else if(sqr<num)
                l=mid+1;
            else
                r=mid-1;
        }
        return false;
    }
};