class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        for(int i=0;i<n;i++){
            if(i==0){
                if(nums[i]!=nums[i+1]) return nums[0];
            }
            else if(i==n-1){
                 if(nums[i]!=nums[i-1]) return nums[n-1];
            }
            else{
                 if(nums[i]!=nums[i+1] && nums[i-1]!=nums[i])
                     return nums[i];
            }
        }
        return 0;
    }
};