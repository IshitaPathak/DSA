class Solution {
public:
    void helper(vector<int> &temp,vector<int> &nums,vector<vector<int>> &ans){
        if (temp.size()==nums.size()){
            ans.push_back(temp);
            return;
        }
        
        for(int i=0;i<nums.size();i++){
            // Check if nums[i] is already in temp
            if (find(temp.begin(), temp.end(), nums[i]) == temp.end()) {     
                temp.push_back(nums[i]);
                helper(temp,nums,ans);
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        helper(temp,nums,ans);
        return ans;
    }
};