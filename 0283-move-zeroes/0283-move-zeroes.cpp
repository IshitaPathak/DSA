class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        // first finding the first zero 
        int j=-2;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
             j=i;
             break;
            }
        }
        // if n zero is found
        if(j==-2) return;
        for(int i=j+1;i<n;i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};