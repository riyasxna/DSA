class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n=grid.size(),res=0;
        map<vector<int>,int> map;
        for(int i=0;i<n;i++){
            map[grid[i]]++;
        }
        for(int j=0;j<n;j++){
            vector<int> temp(n);
            for(int i=0;i<n;i++){
                temp[i]=grid[i][j];
            }
            if(map.find(temp)!=map.end())
                res+=map[temp];
        }
        return res;
    }
};