class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0,high=n-1;
        while(low<=high){
            int mid =(low+high)/2;
            if(nums[mid]==target) return true;
            // edge cse thats that lets you to not identify the half sorted array
            if(nums[low]==nums[mid] && nums[mid]==nums[high]){
                low++;
                high--;
                continue;
            }
            // identify the sorted array
            // for left half to be sorted
            if(nums[low]<=nums[mid]){
                if(nums[low]<=target&&target<=nums[mid])
                    high=mid-1;
                else low=mid+1;
            }
            // for right half to be sorted
            else{
                if(nums[mid]<=target&&target<=nums[high])
                    low=mid+1;
                else high=mid-1;
            }           
            
        }
        return false;
    }
};