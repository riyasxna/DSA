class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int> map;
        for(int i=0;i<s.size();i++){
            if(map.find(s[i])!=map.end())
                return s[i];
            map[s[i]]++;
        }
        return ' ';
    }
};