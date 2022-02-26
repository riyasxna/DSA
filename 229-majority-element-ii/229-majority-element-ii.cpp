class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> result;
        unordered_map<int, int> um;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            um[nums[i]]++;
        }
        for(auto i=um.begin();i!=um.end();i++)
        {
            if(n/3<(i->second)){
                result.push_back(i->first);
            }
        }
        return result;
    }
};