class Solution {
public:
    vector<vector<int>> ans;
    void sub(vector<int> &nums,int i,vector<int> &temp){
        int n=nums.size();
        if(i>=n){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        sub(nums,i+1,temp); //take
        temp.pop_back();
        sub(nums,i+1,temp); // not take
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
       sub(nums,0,temp);
        return ans;
    }
};