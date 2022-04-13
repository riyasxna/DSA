class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        sort(candies.begin(),candies.end());
        long long l=1,r=candies[candies.size()-1],count,mid,ans=0;
        while(l<=r){
            mid=(l+r)/2,count=0;
            for(long long i=0;i<candies.size();i++){
                count+=candies[i]/mid;
            }
            if(count<k)
                r=mid-1;
            else{
                l=mid+1;
                ans=mid;
            }
        }
        return (int)ans;
    }
};