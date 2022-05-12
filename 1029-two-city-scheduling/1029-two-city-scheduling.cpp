class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int res=0,n=costs.size();
        vector<int> people(n,0);
        for(auto i=0;i<costs.size();i++){
            people[i]=costs[i][0]-costs[i][1];
            res+=costs[i][1];
        }
        sort(people.begin(),people.end());
        for(int i=0;i<n/2;i++){
            res+=people[i];
        }
        return res;
    }
};