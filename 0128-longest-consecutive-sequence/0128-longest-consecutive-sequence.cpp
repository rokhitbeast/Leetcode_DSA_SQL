class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    int longest=1;
    int last_smaller=INT_MIN;
    int n=nums.size();
    int cnt=0;
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++){
        if(nums[i]-1==last_smaller){
            cnt++;
            last_smaller=nums[i];
        }
        if(nums[i]!=last_smaller){
            cnt=1;
            last_smaller=nums[i];
        }
        longest=max(longest,cnt);
    }
    if(nums.size()==0){
        longest=0;
    }
    return longest;
    }
};