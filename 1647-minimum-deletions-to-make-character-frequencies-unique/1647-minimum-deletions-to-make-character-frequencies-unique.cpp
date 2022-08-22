class Solution {
public:
    int minDeletions(string s) {
        vector<int> count(26,0);
        unordered_set<int> set;
        int res=0;
        for(int i=0;i<s.size();i++){
            count[s[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            while(count[i]>0 && set.find(count[i])!=set.end()){
                res++;
                count[i]--;
            }
            set.insert(count[i]);
        }
        return res;
    }
};