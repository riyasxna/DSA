class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        if(s.size()<=1)
            return s.size();
        unordered_set<char> st;
        int res=0,count=0;
        for(int i=0;i<n;i++){
            st.insert(s[i]);
            for(int j=i+1;j<n;j++)
            {
            if(st.find(s[j])==st.end()){
                st.insert(s[j]);
            }
            else{
                int r=st.size();
                res=max(res,r);
                st.clear();
                break;
            }
            
        }
    }
        int m=st.size();
        return max(res,m);
    }
};