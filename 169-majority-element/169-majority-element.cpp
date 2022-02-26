class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0, element, n=nums.size();
        for(int i=0;i<n;i++){
            if(count==0){
                element=nums[i];
                count++;
            }
            else if(nums[i]==element){
                count++;
            }
            else{
                count--;
            }
        }
        return element;
    }
};