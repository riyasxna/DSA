class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        sort(beans.begin(), beans.end());
        long long res=LLONG_MAX;
        long long n=beans.size();
        long long total=0, sum;
        for(long long i=0;i<n;i++){
            total+=beans[i];
        }
        for(long long i=0;i<n;i++){
            sum=beans[i]*(n-i);
            res=min(res,total-sum);
        }
        return res;
    }
};