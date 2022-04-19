class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(n==0)
            return 0;
        unordered_map<char,int> m;
        int j=0,ans=INT_MIN;
        for(int i=0;i<n;i++){
            m[s[i]]++;
            if(m[s[i]]>1){
               while(m[s[i]]>1){
                m[s[j]]--;
                if(m[s[j]]==0)
                    m.erase(s[j]);
                j++;
                }
           }
            else{
                ans=max(ans,i-j+1);
            }
        }
        return ans;
    }
};