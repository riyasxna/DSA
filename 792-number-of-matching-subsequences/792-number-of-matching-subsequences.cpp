class Solution {
public:
    bool check(string s, string word){
        int n=s.size(),m=word.size(),i=0,j=0;
        while(i<n && j<m){
            if(s[i]==word[j])
                j++;
            i++;
        }
        if(j==m)
            return true;
        return false;
    }
    
    int numMatchingSubseq(string s, vector<string>& words) {
        int res=0;
        unordered_map<string,int> map;
        for(int i=0;i<words.size();i++){
            map[words[i]]++;
        }
        for(auto it:map){
            if(check(s,it.first))
                res+=it.second;
        }
        return res;
    }
};