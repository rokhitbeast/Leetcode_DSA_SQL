class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int max_sum=INT_MIN;
        int sum=0;
        int start=0;
        int start_ans=-1,end_ans=-1;
        for(int i=0;i<n;i++){
            
            if(sum==0){
                start=i;
            }
            
            sum+=nums[i];
            if(sum>max_sum){
                max_sum=sum;
                start_ans=start;
                end_ans=i;
            }
            if(sum<0){
                sum=0;
            }
        }

        for(int i=start_ans;i<=end_ans;i++){
            cout<<nums[i]<<endl;
        }

        return max_sum;
    }
};