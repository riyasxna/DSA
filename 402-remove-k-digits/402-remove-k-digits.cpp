class Solution {
public:
    string removeKdigits(string num, int k) {
        if(k==num.size())
            return "0";
        stack<char> st;
        for(int i=0;i<num.size();i++){
            while(!st.empty() && st.top()>num[i] && k>0){
                st.pop();
                k--;
            }
            if(st.size()==1 && st.top()=='0')
                st.pop();
            st.push(num[i]);
        }
        while(!st.empty() && k){
            st.pop();
            k--;
        }
        string res="";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        if(res.size()==0)
            return "0";
        return res;
    }
};