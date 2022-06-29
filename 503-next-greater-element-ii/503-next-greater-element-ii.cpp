class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n,-1);
        stack<int> st;
        for(int i=2*n-1;i>=0;i--){
            while(!st.empty() && nums[(st.top())%n]<=nums[i%n])
                st.pop();
            if(st.empty())
                st.push(i%n);
            else{
                if(i%n!=(st.top())%n)
                    res[i%n]=nums[(st.top())%n];
            }
            st.push(i%n);
        }
        return res;
    }
};