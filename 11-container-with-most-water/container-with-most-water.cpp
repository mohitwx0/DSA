class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea=0;
        int left=0;
        int right=height.size()-1;
        while(left<right){
            int length=min(height[left],height[right]);
            int width=right-left;
            int currArea=length*width;
            maxArea=max(maxArea,currArea);
            if(height[left]<height[right]) left++;
            else right--;
        }
        return maxArea;
    }
};