class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        vector<int> temp(2);
        sort(intervals.begin(),intervals.end());
        int l=intervals[0][0],r=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(r>=intervals[i][0])
                r=max(r,intervals[i][1]);
            else{
                temp[0]=l;
                temp[1]=r;
                res.push_back(temp);
                l=intervals[i][0];
                r=intervals[i][1];
            }
        }
        temp[0]=l;
        temp[1]=r;
        res.push_back(temp);
        return res;
    }
};