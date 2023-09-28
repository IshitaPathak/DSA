class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        if(nums[0]!=nums[1]) return nums[0];
        if(nums[n-1]!=nums[n-2]) return nums[n-1];
        int low=1,high=n-2;
        while(low<=high){
            int mid=(low+high)/2;
        if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]) return nums[mid];
        // if you are on the odd index and your left is containing the same element, means the singe element is one the right half, so eliminate left half
        // or if you are on the even index and your right has same element in that case also element is on the right so eliminate left half
        if((mid%2==1 && nums[mid]==nums[mid-1]) || (mid%2==0 && nums[mid]==nums[mid+1]))
            low=mid+1;
        else
            high=mid-1;
        }   
        return -1;
    }
};