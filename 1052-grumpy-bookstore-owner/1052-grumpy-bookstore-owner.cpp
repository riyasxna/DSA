class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int happy=0,res=INT_MIN;
        for(int i=0;i<customers.size();i++){
            if(!grumpy[i])
                happy+=customers[i];
        }
        int i=0,j=0;
        while(j<minutes){
            if(grumpy[j])
                happy+=customers[j];
            res=max(res,happy);
            j++;
        }
        while(j<customers.size()){
            if(grumpy[i]){
                happy-=customers[i];
            }
            i++;
            if(grumpy[j]){
                happy+=customers[j];
            }
            j++;
            res=max(res,happy);
        }
        return res;
    }
};