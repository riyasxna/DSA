class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        if(changed.size()%2!=0) return {};
        sort(changed.begin(),changed.end());
        vector<int>ans;
        unordered_map<int,int>mp;
        for(auto u:changed){
            mp[u]++;
        }
        for(int i=0;i<changed.size();i++){
            if(changed[i]==0){
               if(mp[changed[i]]>1&&mp[2*changed[i]]>1){
                mp[changed[i]]--;
                mp[2*changed[i]]--;
                ans.push_back(changed[i]);
            } 
            }
            else{
                if(mp[changed[i]]>0&&mp[2*changed[i]]>0){
                mp[changed[i]]--;
                mp[2*changed[i]]--;
                ans.push_back(changed[i]);
            }
            }
            
        }
            if(changed.size()==2*ans.size()) return ans;
            return {};
    }
};