class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int left=values[0]+0, res=INT_MIN;
        for(int i=1;i<values.size();i++){
            int curr=left+values[i]-i;
            res=max(res,curr);
            left=max(left,values[i]+i);
        }
        return res;
    }
};