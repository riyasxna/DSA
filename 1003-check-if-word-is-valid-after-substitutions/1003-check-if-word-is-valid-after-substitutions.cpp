class Solution {
public:
    bool isValid(string s) {
     int n=s.size();
        stack<char> st;
        for(int i=0;i<n;i++){
            if(s[i]=='c'){
                if(st.empty() || st.top()!='b'){return false;}
                if(st.top()=='b'){
                    st.pop();
                    if(st.empty() || st.top()!='a'){return false;}
                    if(st.top()=='a'){st.pop();}
                }
            }
            if(s[i]=='b' || s[i]=='a' ){
                st.push(s[i]);
            }
        }
        if(st.empty()){return true;}
        return false;
    }
};