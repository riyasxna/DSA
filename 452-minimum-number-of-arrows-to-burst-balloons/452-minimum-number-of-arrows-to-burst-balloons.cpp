class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size()==1)
            return 1;
        sort(points.begin(),points.end());
        int count=1,l=points[0][0],r=points[0][1];
        for(int i=1;i<points.size();i++){
            if(points[i][0]==l){
                l=max(l,points[i][0]);
                r=min(r,points[i][1]);
            }
            else if(points[i][0]<=r){
                l=max(l,points[i][0]);
                r=min(r,points[i][1]);
            }
            else{
                l=points[i][0];
                r=points[i][1];
                count+=1;
            }
        }
        return count;
    }
};