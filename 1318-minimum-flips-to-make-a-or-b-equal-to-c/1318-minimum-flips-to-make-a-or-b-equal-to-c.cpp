class Solution {
public:
    int minFlips(int a, int b, int c) {
        string a1="", b1="";
        int res=0;
        while(a || b || c){
            int a1=a%2;
            a/=2;
            int b1=b%2;
            b/=2;
            int c1=c%2;
            c/=2;
            if(c1==1 && a1==0 && b1==0)
                res++;
            else if(c1==0 && a1==1 && b1==1)
                res+=2;
            else if(c1==0 && (a1!=0 || b1!=0))
                res++;
        }
        return res;
    }
};