class Solution {
public:
    int countCollisions(string d) {
        int res=0;
        stack<char> st;
        for(int i=0;i<d.size();i++){
            if(st.empty() || d[i]=='R'){
                st.push(d[i]);
            }
            else if(d[i]=='L'){
                if(st.top()=='R'){
                    res+=2;
                    st.pop();
                    while(!st.empty() && st.top()=='R'){
                        res++;
                        st.pop();
                    }
                    st.push('S');
                }
                else if(st.top()=='S'){
                    res++;
                }
            }
            else if(d[i]=='S'){
                if(st.top()=='R'){
                    res++;
                    st.pop();
                    while(!st.empty() && st.top()=='R'){
                        res++;
                        st.pop();
                    }
                }
                st.push('S');
            }
        }
        return res;
    }
};