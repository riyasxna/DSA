class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> dummy=heights;
        int res=0;
        sort(dummy.begin(),dummy.end());
        for(int i=0;i<heights.size();i++){
            if(dummy[i]!=heights[i])
                res++;
        }
        return res;
    }
};