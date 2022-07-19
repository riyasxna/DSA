class Solution {
public:
    bool isPalindrome(string s) {
        string temp="";
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z')
                temp+='a'+s[i]-'A';
            else if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9'))
                temp+=s[i];
            else
                continue;
        }
        string t=temp;
        reverse(t.begin(),t.end());
        return t==temp;
    }
};