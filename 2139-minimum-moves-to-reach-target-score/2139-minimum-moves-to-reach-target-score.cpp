class Solution {
public:
    int minMoves(int target, int d) {
        int moves=0;
        if(d==0)
            return target-1;
        while(target!=1){
            if(target%2){
                target--;
            }
            else{
                if(d>0){
                    target/=2;
                    d--;
                }
                else{
                    target--;
                }
            }
            moves++;
        }
        return moves;
    }
};