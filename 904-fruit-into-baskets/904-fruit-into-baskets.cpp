class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        unordered_map<int,int> m;
        int s=0,e=-1, maxm=INT_MIN;
        for(int i=0;i<n;i++){
            m[fruits[i]]++;
            e++;
            while(m.size()>2){
                if(m[fruits[s]]==1)
                    m.erase(fruits[s]);
                else 
                    m[fruits[s]]--;
                s++;
            }
            maxm=max(maxm,e-s+1);
        }
        return maxm;
    }
};