class Solution {
public:
    bool wordBreak(string s, vector<string>& dict) {
        int n=s.size();
        vector<int> v(n+1,0);
        v[0]=1;
        for(int i=0;i<n;i++){
            for(auto u:dict){
                if(v[i]==1){
                    if(s.substr(i,u.size()).compare(u)==0){
                        v[i+u.size()]=1;
                    }
                }      
            }
        }
        return v[n];
    }
};