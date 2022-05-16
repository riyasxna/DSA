class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long index=0,count=0,n=chalk.size();
        if(n==1)
            return 0;
        for(int i=0;i<chalk.size();i++){
            count+=chalk[i];
        }
        k%=count;
        for(index=0;index<n;index++){
            if(chalk[index]<=k){
                k-=chalk[index];
            }
            else
                break;
        }
        return index;
    }
};