class Solution {
public:
    int fillCups(vector<int>& amount) {
        int res=0;
        priority_queue<int> pq;
        for(int i=0;i<=2;i++){
            if(amount[i])
                pq.push(amount[i]);
        }
        while(pq.size()>1){
            int a=pq.top();
            pq.pop();
            int b=pq.top();
            pq.pop();
            res++;
            if(a-1>0)
                pq.push(a-1);
            if(b-1>0)
                pq.push(b-1);
        }
        return pq.empty()?res:res+pq.top();
    }
};