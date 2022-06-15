class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.size(),res=0;
        unordered_map<char,int> u;
        for(int i=0;i<n;i++){
            u[s[i]]++;
        }
        for(auto it:u){
            if(it.second>1){
                res+=2*(it.second/2);
                u[it.first]=it.second- 2*(it.second/2);
            }
        }
        for(auto it:u){
            if(it.second==1){
                res+=1;
                break;
            }
        }
        return res;
    }
};