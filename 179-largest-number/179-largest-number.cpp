class Solution {
public:
    static bool cmp(string a, string b){
        return a+b>b+a;
    }
    
    string largestNumber(vector<int>& nums) {
        vector<string> ans;
        string res="";
        for(int i=0;i<nums.size();i++){
            ans.push_back(to_string(nums[i]));
        }
        sort(ans.begin(),ans.end(),cmp);
        for(int i=0;i<ans.size();i++){
            res+=ans[i];
        }
        while(res[0]=='0' && res.size()>1){
            res.erase(0,1);
        }
        return res;
    }
};