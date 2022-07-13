class Solution {
public:
    bool recurse(vector<int>& m,vector<int>& visited,int start,int sum,int target,int k){
        if(k==1)
            return true;
        if(sum==target)
            return recurse(m,visited,0,0,target,k-1);
        if(start>=m.size())
            return false;
        for(int i=start;i<m.size();i++){
            if(visited[i] || m[i]+sum>target)
                continue;
            visited[i]=1;
            if(recurse(m,visited,i+1,sum+m[i],target,k))
                return true;
            visited[i]=0;
        }
        return false;
    }
    
    bool makesquare(vector<int>& m) {
        int sum=0;
        sum=accumulate(m.begin(),m.end(),sum);
        if(sum%4!=0)
            return false;
        int target=sum/4;
        vector<int> visited(m.size(),0);
        return recurse(m,visited,0,0,target,4);
    }
};