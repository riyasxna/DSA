class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n=people.size();
        if(n==1)
            return 1;
        int ans=0;
        sort(people.begin(),people.end());
        int i=0,j=n-1;
        while(i<j){
            if(people[i]+people[j]<=limit){
                n-=2;
                i++;
                j--;
                ans+=1;
            }
            else{
                j--;
            }
        }
        ans+=n;
        return ans;
    }
};