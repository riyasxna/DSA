class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int size) {
        map<int,int> m;
        int start,value;
        for(int i=0;i<hand.size();i++){
            m[hand[i]]++;
        }
        while(!m.empty()){
            start=m.begin()->first;
            for(int i=start;i<start+size;i++){
                if(m.find(i)==m.end())
                    return false;
                else{
                    value=m[i];
                    if(value==1)
                        m.erase(i);
                    else
                        m[i]=value-1;
                }
            }
        }
        return true;
    }
};