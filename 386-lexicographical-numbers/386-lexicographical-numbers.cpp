class Solution {
public:
    vector<int> res;
    void recurse(int m,int n){
        if(m>n)
            return;
        res.push_back(m);
        recurse(m*10,n);
        if(m%10!=9)
            recurse(m+1,n);
    }
    vector<int> lexicalOrder(int n) {
        recurse(1,n);
        return res;
    }
};