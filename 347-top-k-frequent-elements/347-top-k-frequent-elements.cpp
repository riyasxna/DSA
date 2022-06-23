class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> um;
        priority_queue<pair<int,int>> pq;
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            um[nums[i]]++;
        }
        for(auto it=um.begin();it!=um.end();it++){
            int key=it->second;
            int value=it->first;
            pq.push(make_pair(key,value));
        }
        while(k--){
            auto it=pq.top();
            res.push_back(it.second);
            pq.pop();
        }
        return res;
    }
};