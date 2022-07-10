class Solution {
public:
    long long numberOfWays(string s) {
        long long left1=0, left0=0, right1=0,right0=0,res=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0')
                right0++;
            else if(s[i]=='1')
                right1++;
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                res+=left1*right1;
                left0++;
                right0--;
            }
            else if(s[i]=='1'){
                res+=left0*right0;
                left1++;
                right1--;
            }
        }
        return res;
    }
};