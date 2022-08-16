class Solution {
public:
    long long recurse(long long n){
        if(n==1)
            return 0;
        if(n%2)
            return 1+min(recurse(n+1),recurse(n-1));
        return 1+recurse(n/2);
    }
    
    int integerReplacement(int n) {
        return int(recurse(n));
    }
};