class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size();
        int maxi =INT_MIN;
        int sum=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n/2;i++){
           sum= nums[i]+nums[n-i-1];
            maxi=max(sum,maxi);
        }
        return maxi;
    }
};