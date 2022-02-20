class Solution {
public:
    long long smallestNumber(long long num) {
        int flag,n=0;
        if(num==0){return 0;}
        if(num>0){flag=1;}
        else{flag=0;}
        long long nums= llabs(num);
        long long dem=nums,sum=0;
        vector<int> v;
        while(dem>0){
           v.push_back(dem%10);
            dem=dem/10;
        }
        if(flag==1){
            sort(v.begin(), v.end());
            if(v[0]==0){
                int i=0;
                while(v[i]==0){i++;}
                swap(v[0],v[i]);
            }
        }
        else{
            sort(v.begin(), v.end(), greater<int>());
        }
        for(int j=0;j<v.size();j++){
            sum=sum*10;
            sum+=v[j];
        }
        if(flag==1){return sum;}
        else{return -sum;}
        
    }
};