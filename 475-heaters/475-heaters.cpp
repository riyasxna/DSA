class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(),houses.end());
        sort(heaters.begin(),heaters.end());
        unordered_map<int,int> um;
        int n=heaters.size(),res=INT_MIN,curr,next,prev;
        for(int i=0;i<houses.size();i++){
            curr=houses[i];
            next=upper_bound(heaters.begin(),heaters.end(),curr)-heaters.begin();
            prev=next-1;
            if(next==0){
                um[houses[i]]=heaters[next]-curr;
            }
            else if(next==n){
                um[houses[i]]=curr-heaters[prev];
            }
            else{
                um[houses[i]]=min(heaters[next]-curr,curr-heaters[prev]);
            }
        }
        for(auto it=um.begin();it!=um.end();it++){
            res=max(res,it->second);
        }
        return res;
    }
};