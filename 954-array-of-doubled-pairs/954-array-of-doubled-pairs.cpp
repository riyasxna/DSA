class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        sort(arr.begin(),arr.end());
       unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
           mp[arr[i]]++;
        }
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
              if(mp[arr[i]]>1&&mp[2*arr[i]]>1){
                mp[2*arr[i]]--;         
                mp[arr[i]]--;
                ans.push_back(arr[i]);
            }  
            }else{
                if(mp[arr[i]]>0&&mp[2*arr[i]]>0){
                mp[2*arr[i]]--;         
                mp[arr[i]]--;
                ans.push_back(arr[i]);
            }
            }
            
            
        }
      
        if(2*ans.size()==arr.size()) return true;
        return false;
    }
};