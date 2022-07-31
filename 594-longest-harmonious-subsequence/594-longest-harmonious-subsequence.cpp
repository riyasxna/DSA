class Solution {
public:
    int findLHS(vector<int>& nums) {
        int res=0;
        unordered_map<int,int> mappy;
        for(int i=0;i<nums.size();i++){
            mappy[nums[i]]++;
        }
        for(auto it=mappy.begin();it!=mappy.end();it++){
            int temp=it->first;
            if(mappy.find(temp+1)!=mappy.end())
                res=max(res,mappy[temp]+mappy[temp+1]);
        }
        return res;
    }
};