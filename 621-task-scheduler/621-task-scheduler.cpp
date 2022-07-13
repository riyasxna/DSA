class Solution {
public:
    int max(int a, int b){
        if(a>b)
            return a;
        return b;
    }
    
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> count(26,0);
        int highest=0,num=0;
        for(int i=0;i<tasks.size();i++){
            count[tasks[i]-'A']++;
            highest=max(highest,count[tasks[i]-'A']);
        }
        for(int i=0;i<count.size();i++){
            if(count[i]==highest)
                num++;
        }
        return max(tasks.size(),(highest-1)*(n+1)+num);
    }
};