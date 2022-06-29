class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> um;
        vector<int> res(nums1.size(),-1);
        stack<int> st;
        int n=nums2.size();
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top()<nums2[i])
                st.pop();
            if(st.empty())
                um[nums2[i]]=-1;
            else
                um[nums2[i]]=st.top();
            st.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
            res[i]=um[nums1[i]];
        }
        return res;
    }
};