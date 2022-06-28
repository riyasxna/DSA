class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int set;
        vector<int> res(nums1.size(),-1);
        for(int i=0;i<nums1.size();i++){
            set=-1;
            for(int j=0;j<nums2.size();j++){
                if(set==-1){
                    if(nums1[i]==nums2[j]){
                        set=j;
                        continue;
                    }
                    else
                        continue;
                }
                else{
                    if(nums2[j]>nums2[set]){
                        res[i]=nums2[j];
                        break;
                    }
                }
            }
        }
        return res;
    }
};