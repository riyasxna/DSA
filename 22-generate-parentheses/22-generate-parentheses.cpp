class Solution {
public:
    void backtrack(int n,int open,int close,string temp,vector<string>& res){
        if(temp.size()==2*n){
            res.push_back(temp);
            return;
        }
        if(open<n)
            backtrack(n,open+1,close,temp+'(',res);
        if(close<open)
            backtrack(n,open,close+1,temp+')',res);
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        backtrack(n,0,0,"",res);
        return res;
    }
};