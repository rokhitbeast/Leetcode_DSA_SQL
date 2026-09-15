class Solution {
public:
    int maxArea(vector<int>& height) {
       int n=height.size();
       int left=0,right=n-1; int ans=0;
       int width=0;int high=0;
       while(left<right){
        width=right-left;
        high=min(height[left],height[right]);
        ans=max(ans,width*high);
        if(height[left]<height[right]){
            left++;
        }
        else{right--;}
       }
       return ans;
    }
};