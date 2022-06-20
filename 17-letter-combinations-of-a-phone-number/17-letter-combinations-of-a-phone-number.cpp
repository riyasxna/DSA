class Solution {
public:
    void msg(string digits,int index,string temp,vector<string>& str,vector<string>& res){
        if(index==digits.size()){
            res.push_back(temp);
            return;
        }
        int number=digits[index]-'0';
        string dummy=str[number];
        for(int i=0;i<dummy.size();i++){
            temp+=dummy[i];
            msg(digits,index+1,temp,str,res);
            temp.pop_back();
        }
    }
    
    vector<string> letterCombinations(string digits) {
        vector<string> str{"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> res;
        string temp="";
        if(digits.size()==0)
            return res;
        msg(digits,0,temp,str,res);
        return res;
    }
};