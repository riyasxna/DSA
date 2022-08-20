class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        sort(events.begin(),events.end());
        int res=0,i=0;
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int day=1;day<=100000;day++){
            while(!pq.empty() && pq.top()<day)
                pq.pop();
            while(i<events.size() && events[i][0]==day)
                pq.push(events[i++][1]);
            if(!pq.empty()){
                pq.pop();
                res++;
            }
        }
        return res;
    }
};