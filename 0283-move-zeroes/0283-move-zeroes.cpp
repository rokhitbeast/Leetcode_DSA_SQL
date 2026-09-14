class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int start=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                start=i;
                break;
            }
        }

        for(int j=start;j<nums.size();j++){
            if(nums[j]!=0){
                swap(nums[start],nums[j]);
                start++;
            }
        }
    }
};