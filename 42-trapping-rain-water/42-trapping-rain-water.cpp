class Solution {
public:
    int trap(vector<int>& height) {
        int l=0,r=height.size()-1, res=0, lmax=0, rmax=0;
        while(l<r){
            if(height[l]<=height[r]){
                if(height[l]>=lmax){lmax=height[l];}
                else{res+=lmax-height[l];}
                l++;
            }
            else{
                if(height[r]>=rmax){rmax=height[r];}
                else{res+=rmax-height[r];}
                r--;
            }
        }
        return res;
    }
};