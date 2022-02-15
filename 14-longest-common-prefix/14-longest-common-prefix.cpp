class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int m=strs.size();
        int n=min(strs[0].size(),strs[m-1].size());
        string prefix="";
        string f=strs[0], l=strs[m-1];
        for(int i=0; i<n; i++){
            if(f[i]!=l[i]){return prefix;}
            prefix+=f[i];
        }
        return prefix;
    }
};