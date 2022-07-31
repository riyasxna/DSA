class Solution {
public:
    int numRabbits(vector<int>& answers) {
        sort(answers.begin(),answers.end());
        int curr=answers[0], res=answers[0]+1;
        int count=curr;
        for(int i=1;i<answers.size();i++){
            if(count==0){
                curr=answers[i];
                res+=answers[i]+1;
                count=curr;
            }
            else{
                if(curr==answers[i])
                    count--;
                else{
                    curr=answers[i];
                    res+=answers[i]+1;
                    count=curr;
                }
            }
        }
        return res;
    }
};