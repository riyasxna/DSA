class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        vector<int> prefix(nums.size());
        stack<int> st;
        prefix[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            prefix[i]=min(nums[i],prefix[i-1]);
        }
        for(int j=nums.size()-1;j>=1;j--){
            if(nums[j]>prefix[j]){
                while(!st.empty() && prefix[j]>=st.top()){
                    st.pop();
                }
                if(!st.empty() && nums[j]>st.top())
                    return true;
            }
            st.push(nums[j]);
        }
        return false;
    }
};