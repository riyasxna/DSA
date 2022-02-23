class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0, j=n-1;
        int h=min(height[0], height[n-1]);
        int area=h*(n-1);
        int res=area;
        while(i<j){
            while(i<j && height[i]<=h){i++;}
            while(i<j && height[j]<=h){j--;}
            h=min(height[i], height[j]);
            area=(j-i)*h;
            res=max(res, area);
        }
        return res;
    }
};