class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> sv(26,0),tv(26,0);
        for(int i=0;i<s.size();i++){
            sv[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++){
            tv[t[i]-'a']++;
        }
        return sv==tv;
    }
};