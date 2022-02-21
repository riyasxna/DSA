class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> v1(26,0), v2(26,0);
        int n=s1.size(), m=s2.size();
        if(m<n){return false;}
        for(int i=0;i<n;i++){
            v1[s1[i]-97]++;
        }
        for(int i=0;i<n;i++){
            v2[s2[i]-97]++;
            if(v1==v2){return true;}
        }
        for(int i=n;i<m;i++){
            v2[s2[i-n]-97]--;
            v2[s2[i]-97]++;
            if(v1==v2){return true;}
        }
        return false;
    }
};