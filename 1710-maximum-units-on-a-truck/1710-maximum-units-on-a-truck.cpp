class Solution {
public:
    bool static comparator(vector<int> &a, vector<int> &b){
        return a[1]>b[1];
    }
    
    int maximumUnits(vector<vector<int>>& box, int size) {
        int res=0,temp;
        sort(box.begin(),box.end(),comparator);
        for(int i=0;i<box.size();i++){
            if(box[i][0]<=size){
                temp=box[i][0]*box[i][1];
                res+=temp;
                size-=box[i][0];
            }
            else{
                temp=size*box[i][1];
                res+=temp;
                size=0;
                break;
            }
        }
        return res;
    }
};