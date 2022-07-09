class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> um1;
        unordered_map<string,char> um2;
        int j=0,k=0;
        for(int i=0;i<pattern.size();i++){
            if(k>=s.size())
                return false;
            while(s[k]!=' ' && k<s.size()){
                    k++;
            }
            string temp=s.substr(j,k-j);
            k++;
            j=k;
            if(um1.find(pattern[i])==um1.end())
                um1[pattern[i]]=temp;
            else if(um1[pattern[i]]!=temp)
                return false;
            if(um2.find(temp)==um2.end())
                um2[temp]=pattern[i];
            else if(um2[temp]!=pattern[i])
                return false;
        }
        if(k<s.size())
            return false;
        return true;
    }
};