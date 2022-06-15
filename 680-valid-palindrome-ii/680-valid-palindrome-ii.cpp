class Solution {
public:
    bool validPalindrome(string s) {
        int n=s.size();
        int l=0,r=n-1,c1=0,c2=0;
        while(l<=r){
            if(s[l]!=s[r]){
                l++;
                c1++;
            }
            else{
                l++;
                r--;
            }
        }
        l=0;
        r=n-1;
        while(l<=r){
            if(s[l]!=s[r]){
                r--;
                c2++;
            }
            else{
                l++;
                r--;
            }
        }
        if(c1>1 && c2>1)
            return false;
        return true;
    }
};