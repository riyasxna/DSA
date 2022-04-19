class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
        priority_queue<int> q;
        for(int i=0;i<n;i++){
            q.push(stones[i]);
        }
        while(q.size()>=2){
            int one=q.top();
            q.pop();
            int two=q.top();
            q.pop();
            if(one!=two){
                int diff=one-two;
                q.push(diff);
            }
        }
        if(q.size()==0)
            return 0;
        int ans=q.top();
        return ans;
    }
};