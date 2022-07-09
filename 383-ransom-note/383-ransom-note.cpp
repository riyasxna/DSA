class Solution {
public:
    bool canConstruct(string ransom, string magazine) {
        unordered_map<char,int> um;
        for(int i=0;i<magazine.size();i++){
            um[magazine[i]]++;
        }
        for(int i=0;i<ransom.size();i++){
            if(um[ransom[i]]==0)
                return false;
            else
                um[ransom[i]]--;
        }
        return true;
    }
};