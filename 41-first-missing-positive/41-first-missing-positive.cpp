class Solution {
public:
    int max(int a,int b){
        if(a>b)
            return a;
        return b;
    }
    
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<long long> set;
        long long mx=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0)
                set.insert(nums[i]);
            mx=max(mx,nums[i]);
        }
        for(long long i=1;i<=mx+1;i++){
            if(set.find(i)==set.end())
                return i;
        }
        return -1;
    }
};