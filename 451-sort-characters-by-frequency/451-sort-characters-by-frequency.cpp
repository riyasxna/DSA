class Solution {
public:
    string frequencySort(string s) {
        string res="";
        unordered_map<char,int> um;
        for(int i=0;i<s.size();i++){
            um[s[i]]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto it=um.begin();it!=um.end();it++){
            pq.push({it->second,it->first});
        }
        while(!pq.empty()){
            int temp=pq.top().first;
            while(temp--){
                res+=pq.top().second;
            }
            pq.pop();
        }
        return res;
    }
};