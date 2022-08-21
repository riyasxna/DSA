class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> map;
        int low=0,start=0,count=0,len=INT_MAX;
        for(int i=0;i<t.size();i++){
            map[t[i]]++;
        }
        for(int high=0;high<s.size();high++){
            if(map[s[high]]>0)
                count++;
            map[s[high]]--;
            if(count==t.size()){
                while(low<high && map[s[low]]<0){
                    map[s[low]]++;
                    low++;
                }
                if(len>high-low+1){
                    len=high-low+1;
                    start=low;
                }
                map[s[low]]++;
                low++;
                count--;
            }
        }
        return len==INT_MAX?"":s.substr(start,len);
    }
};