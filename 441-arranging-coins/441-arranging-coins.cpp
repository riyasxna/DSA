class Solution {
public:
    int arrangeCoins(int n) {
        int i=1;
        while(n){
            if(n>=i){
                n-=i;
                i++;
            }
            else{
                return i-1;
            }
        }
        return i-1;
    }
};