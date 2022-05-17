class Solution {
public:
    int validity(vector<int>& weights, int days,int k){
        int w=0,d=1;
        for(int i=0;i<weights.size();i++){
            if(w+weights[i]<=k){
                w+=weights[i];
            }
            else{
                w=weights[i];
                d++;
            }
        }
        if(d>days)
            return -1;
        return 1;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end()), high=0,mid,res=INT_MAX;
        for(int i=0;i<weights.size();i++){
            high+=weights[i];
        }
        while(low<=high){
            mid=(low+high)/2;
            int ans=validity(weights,days,mid);
            if(ans==-1){
                low=mid+1;
            }
            else{
                res=min(res,mid);
                high=mid-1;
            }
        }
        return res;
    }
};