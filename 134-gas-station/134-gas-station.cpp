class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int g=0,tg=0,index=0;
        for(int i=0;i<gas.size();i++){
            tg+=gas[i]-cost[i];
            g+=gas[i]-cost[i];
            if(g<0){
                g=0;
                index=i+1;
            }
        }
        if(tg<0)
            return -1;
        return index;
    }
};