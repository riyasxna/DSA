class Solution {
public:
    int square(int m){
        int sum=0;
        while(m){
            sum+=(m%10)*(m%10);
            m/=10;
        }
        return sum;
    }
    
    bool isHappy(int n) {
        int temp=n;
        while(1){
            if(temp==89)
                return false;
            else if(temp==1)
                return true;
            else{
                temp=square(temp);
            }
        }
        return true;
    }
};