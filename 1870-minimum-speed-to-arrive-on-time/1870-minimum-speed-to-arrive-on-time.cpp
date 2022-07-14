class Solution {
public:
    bool possible(vector<int>& dist, double hour,int speed){
        double time=0;
        for(int i=0;i<dist.size();i++){
            time=ceil(time);
            time+=(1.0*dist[i])/(1.0*speed);
            if(time>hour)
                return false;
        }
        return true;
    }
    
    long long min(long long a, long long b){
        if(a<b)
            return a;
        return b;
    }
    
    int minSpeedOnTime(vector<int>& dist, double hour) {
        long long sum=0,res=LLONG_MAX;
        sum=accumulate(dist.begin(),dist.end(),sum);
        long long l=sum/hour,r=1e7,mid;
        while(l<=r){
            mid=(l+r)/2;
            if(possible(dist,hour,mid)){
                res=min(res,mid);
                r=mid-1;
            }
            else
                l=mid+1;
        }
        if(res==LLONG_MAX)
            return -1;
        return res;
    }
};