class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> pv(26,0);
        vector<int> sv(26,0);
        vector<int> res;
        if(s.size()<p.size())
            return res;
        int n=p.size();
        for(int i=0;i<p.size();i++){
            pv[p[i]-'a']++;
        }
        int i=0,j=0;
        while(j<p.size()){
            sv[s[j]-'a']++;
            j++;
        }
        if(sv==pv)
            res.push_back(i);
        while(j<s.size()){
            sv[s[j]-'a']++;
            j++;
            sv[s[i]-'a']--;
            i++;
            if(sv==pv)
                res.push_back(i);
            
        }
        return res;
    }
};