class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int idx=-1;
            int n=nums.size();
            //break-point
            for(int i=n-2;i>=0;i--){
                if(nums[i]<nums[i+1]){
                    idx=i;
                    break;
                }
            }
            //edge case
            if(idx==-1){
                reverse(nums.begin(),nums.end());
                return;
            }
            //swapping
            for(int i=n-1;i>idx;i--){
                if(nums[i]>nums[idx]){
                    swap(nums[i],nums[idx]);
                        break;
                }
            }
            idx++;
            //reverse remaining
            reverse(nums.begin()+idx,nums.end());
    }
};