class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> um1,um2;
        for(int i=0;i<s.size();i++){
            if(um1.find(s[i])==um1.end())
                um1[s[i]]=t[i];
            else if(um1[s[i]]!=t[i])
                return false;
            if(um2.find(t[i])==um2.end())
                um2[t[i]]=s[i];
            else if(um2[t[i]]!=s[i])
                return false;
        }
        return true;
    }
};