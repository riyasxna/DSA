class Solution {
public:
    int minDeletions(string s) {
        vector<int> count(26,0);
        for(int i=0;i<s.size();i++){
            count[s[i]-'a']++;
        }
        sort(count.begin(),count.end());
        int res=0,need=count[25];
        for(int i=25;i>=0;i--){
            if(count[i]==0)
                break;
            res+=max(0,count[i]-need);
            need=max(0,min(count[i],need)-1);
        }
        return res;
    }
};