class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> res;
        if(s.size()<10)
            return res;
        unordered_map<string,int> um;
        for(int i=0;i<=s.size()-10;i++){
            string t=s.substr(i,10);
            um[t]++;
        }
        for(auto it:um){
            if(it.second>1)
                res.push_back(it.first);
        }
        return res;
    }
};