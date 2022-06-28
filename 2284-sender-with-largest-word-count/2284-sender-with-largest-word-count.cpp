class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        unordered_map<string,int> um;
        string res="";
        int value=-1;
        for(int i=0;i<messages.size();i++){
            um[senders[i]]+=count(begin(messages[i]), end(messages[i]), ' ')+1;
        }
        for(auto it:um){
            if(it.second>value){
                value=it.second;
                res=it.first;
            }
            else if(it.second==value && it.first>res)
                res=it.first;
        }
        return res;
    }
};