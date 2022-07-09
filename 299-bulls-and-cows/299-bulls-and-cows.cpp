class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<char,int> um;
        int x=0,y=0;
        string res="";
        for(int i=0;i<secret.size();i++){
            um[secret[i]]++;
            if(secret[i]==guess[i]){
                x++;
                um[secret[i]]--;
            }
        }
        for(int i=0;i<guess.size();i++){
            if(secret[i]!=guess[i] && um[guess[i]]>0){
                y++;
                um[guess[i]]--;
            }
        }
        res+=to_string(x)+'A'+to_string(y)+'B';
        return res;
    }
};