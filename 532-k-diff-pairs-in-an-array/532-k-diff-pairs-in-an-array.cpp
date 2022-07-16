class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int res=0;
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        if(k==0){
            for(auto it:map){
                if(it.second>1)
                    res++;
            }
            return res;
        }
        for(int i=0;i<nums.size();i++){
            if(map.find(nums[i]+k)!=map.end()){
                res++;
                map.erase(nums[i]+k);
            }
        }
        return res;
    }
};