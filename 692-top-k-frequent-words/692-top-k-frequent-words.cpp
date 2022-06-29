class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> res;
        vector<int> high;
        map<string,int> m;
        for(int i=0;i<words.size();i++){
            m[words[i]]++;
        }
        for(auto it:m){
            high.push_back(it.second);
        }
        sort(high.rbegin(),high.rend());
        for(int i=0;i<k;i++){
            for(auto it:m){
                if(it.second==high[i]){
                    res.push_back(it.first);
                    m[it.first]=-1;
                    break;
                }
            }
        }
        return res;
    }
};