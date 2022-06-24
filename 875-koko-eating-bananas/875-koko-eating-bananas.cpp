class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        long long l=1,r=piles[piles.size()-1],mid,k=LLONG_MAX;
        while(l<=r){
            mid=(l+r)/2;
            long long i=0,count=0;
            while(i<piles.size()){
                count+=piles[i]/mid + (piles[i]%mid!=0);
                i++; 
            }
            if(count<=h){
                k=min(k,mid);
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return k;
    }
};