class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> um={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int res=0;
        int n=s.size(),i=0;
        while(i<n){
            if(i<n-1){
                if(s[i]=='I' && (s[i+1]=='V' || s[i+1]=='X')){
                    res+=um[s[i+1]]-um[s[i]];
                    i+=2;
                }
                else if(s[i]=='X' && (s[i+1]=='L' || s[i+1]=='C')){
                    res+=um[s[i+1]]-um[s[i]];
                    i+=2;
                }
                else if(s[i]=='C' && (s[i+1]=='D' || s[i+1]=='M')){
                    res+=um[s[i+1]]-um[s[i]];
                    i+=2;
                }
                else{
                    res+=um[s[i]];
                    i++;
                }
            }
            else{
                res+=um[s[i]];
                i++;
            }
        }
        return res;
    }
};