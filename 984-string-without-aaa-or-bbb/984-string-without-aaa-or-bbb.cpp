class Solution {
public:
    string strWithout3a3b(int a, int b) {
        int n=a+b;
        int A=0,B=0;
        string res="";
        for(int i=0;i<n;i++){
            if((a>=b && A<2)||(a>0 && B==2)){
                res+='a';
                a--;
                A++;
                B=0;
            }
            else if((b>=a && B<2)||(b>0 && A==2)){
                res+='b';
                b--;
                B++;
                A=0;
            }
        }
        return res;
    }
};