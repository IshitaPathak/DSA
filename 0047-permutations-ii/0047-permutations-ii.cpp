class Solution {
public:
    void solve(int ind,vector<vector<int>> &ans,vector<int> &nums){
              if(ind==nums.size()){
                   ans.push_back(nums);
                  return;
              }
        
              for(int i=ind;i<nums.size();i++){
                  swap(nums[i],nums[ind]);
                  solve(ind+1,ans,nums);
                  swap(nums[i],nums[ind]);
              }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;  
        vector<vector<int>> result; 
        solve(0,ans,nums);
        
        map<vector<int>,int> m;
        for(int i=0;i<ans.size();i++){
            // s.insert(ans[i]);
            m[ans[i]]++;
        }
        for(auto itr=m.begin();itr!=m.end();itr++){
            result.push_back(itr->first);
        }
        return result;
    }
};