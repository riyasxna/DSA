class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> pq;
        vector<int> res(k);
        for(int i=0;i<nums.size();i++){
            pq.push({nums[i],i});
        }
        for(int i=0;i<k;i++){
            res[i]=pq.top().second;
            pq.pop();
        }
        sort(res.begin(),res.end());
        for(int i=0;i<k;i++){
            res[i]=nums[res[i]];
        }
        return res;
    }
};