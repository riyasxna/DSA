class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        int same=1,res=1;
        vector<int> vec(14,0);
        for(int i=1;i<5;i++){
            if(suits[i]==suits[i-1]){
                same++;
            }
        }
        if(same==5)
            return "Flush";
        for(int i=0;i<5;i++){
            vec[ranks[i]]++;
            res=max(res,vec[ranks[i]]);
        }
        if(res>=3)
            return "Three of a Kind";
        else if(res==2)
            return "Pair";
        return "High Card";
    }
};