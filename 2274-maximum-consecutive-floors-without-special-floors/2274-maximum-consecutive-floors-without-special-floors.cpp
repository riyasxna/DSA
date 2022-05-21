class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        sort(special.begin(),special.end());
        long long res=special[0]-bottom;
        for(int i=1;i<special.size();i++){
            if(res<special[i]-special[i-1]-1)
                res=special[i]-special[i-1]-1;
        }
        if(res<top-special[special.size()-1])
            res=top-special[special.size()-1];
        return res;
    }
};