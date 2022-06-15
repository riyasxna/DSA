class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n=s.size();
        vector<int> index(26,0), done(26,0);
        stack<char> st;
        for(int i=0;i<n;i++){
            index[s[i]-'a']=i;
        }
        for(int i=0;i<n;i++){
            if(done[s[i]-'a'])
                continue;
            while(!st.empty() && s[i]<st.top() && index[st.top()-'a']>i){
                done[st.top()-'a']=0;
                st.pop();
            }
            st.push(s[i]);
            done[s[i]-'a']=1;
        }
       
        string res="";
        while(!st.empty()){
            res=res+st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};