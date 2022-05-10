class Solution {
public:
    vector<int> distributeCandies(int candies, int n) {
        vector<int> people(n,0);
        int i=0,j=1;
        while(candies){
            if(i==n)
                i=0;
            people[i]+=min(j,candies);
            candies-=min(j,candies);
            i++;
            j++;
        }
        return people;
    }
};