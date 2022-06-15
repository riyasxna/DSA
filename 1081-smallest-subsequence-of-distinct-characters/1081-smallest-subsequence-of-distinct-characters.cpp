class Solution {
public:
    string smallestSubsequence(string s) {
        int n=s.size();
        vector<int> index(26,0), seen(26,0);
        vector<char> v;
        for(int i=0;i<n;i++){
            index[s[i]-'a']=i;
        }
        for(int i=0;i<n;i++){
            int m=s[i]-'a';
            if(seen[m])
                continue;
            while(!v.empty() && s[i]<v.back() && index[v.back()-'a']>i){
                seen[v.back()-'a']=0;
                v.pop_back();
            }
            v.push_back(s[i]);
            seen[m]=1;
        }
        string ans="";
        for(int i=0;i<v.size();i++){
            ans+=v[i];
        }
        return ans;
    }
};