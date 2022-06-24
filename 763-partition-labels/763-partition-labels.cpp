class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> res;
        unordered_map<char,int> um;
        for(int i=0;i<s.size();i++){
            um[s[i]]=i;
        }
        int l=0;
        while(l<s.size()){
            if(um[s[l]]>l){
                int r=um[s[l]];
                if(r==s.size()-1){
                    res.push_back(r-l+1);
                    l=r+1;
                }
                else{
                    int d=l+1;
                    while(d<r){
                        if(um[s[d]]<r)
                            d++;
                        else{
                            r=um[s[d]];
                            d++;
                        }
                    }
                    res.push_back(r-l+1);
                    l=r+1;
                }
            }
            else{
                res.push_back(1);
                l++;
            }
        }
        return res;
    }
};