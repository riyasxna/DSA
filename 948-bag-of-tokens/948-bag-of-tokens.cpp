class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        if(tokens.size()==1)
            return power>=tokens[0]?1:0;
        sort(tokens.begin(),tokens.end());
        int score=0,res=0,i=0,j=tokens.size();
        while(i<j){
            if(power>=tokens[i]){
                score++;
                power-=tokens[i];
                i++;
            }
            else{
                j--;
                if(i!=j && score>0){
                    power+=tokens[j];
                    score--;
                }
            }
            res=max(res,score);
        }
        return res;
    }
};