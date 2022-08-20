class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int> st;
        int res=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==')'){
                if(st.empty())
                    res++;
                else
                    st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        res+=st.size();
        return res;
    }
};