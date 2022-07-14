class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(int i=0;i<asteroids.size();i++){
            if(asteroids[i]>0 || st.empty() || asteroids[i]<0 && st.top()<0)
                st.push(asteroids[i]);
            else if(asteroids[i]<0 && !st.empty()){
                while(!asteroids.empty() && st.top()>0){
                    if(abs(st.top())>=abs(asteroids[i])){
                        if(abs(st.top())==abs(asteroids[i]))
                            st.pop();
                        break;
                    }
                    else{
                        st.pop();
                        if(st.empty() || st.top()<0)
                            st.push(asteroids[i]);
                    }
                }
            }
        }
        vector<int> res(st.size());
        for(int i=res.size()-1;i>=0;i--){
            res[i]=st.top();
            st.pop();
        }
        return res;
    }
};