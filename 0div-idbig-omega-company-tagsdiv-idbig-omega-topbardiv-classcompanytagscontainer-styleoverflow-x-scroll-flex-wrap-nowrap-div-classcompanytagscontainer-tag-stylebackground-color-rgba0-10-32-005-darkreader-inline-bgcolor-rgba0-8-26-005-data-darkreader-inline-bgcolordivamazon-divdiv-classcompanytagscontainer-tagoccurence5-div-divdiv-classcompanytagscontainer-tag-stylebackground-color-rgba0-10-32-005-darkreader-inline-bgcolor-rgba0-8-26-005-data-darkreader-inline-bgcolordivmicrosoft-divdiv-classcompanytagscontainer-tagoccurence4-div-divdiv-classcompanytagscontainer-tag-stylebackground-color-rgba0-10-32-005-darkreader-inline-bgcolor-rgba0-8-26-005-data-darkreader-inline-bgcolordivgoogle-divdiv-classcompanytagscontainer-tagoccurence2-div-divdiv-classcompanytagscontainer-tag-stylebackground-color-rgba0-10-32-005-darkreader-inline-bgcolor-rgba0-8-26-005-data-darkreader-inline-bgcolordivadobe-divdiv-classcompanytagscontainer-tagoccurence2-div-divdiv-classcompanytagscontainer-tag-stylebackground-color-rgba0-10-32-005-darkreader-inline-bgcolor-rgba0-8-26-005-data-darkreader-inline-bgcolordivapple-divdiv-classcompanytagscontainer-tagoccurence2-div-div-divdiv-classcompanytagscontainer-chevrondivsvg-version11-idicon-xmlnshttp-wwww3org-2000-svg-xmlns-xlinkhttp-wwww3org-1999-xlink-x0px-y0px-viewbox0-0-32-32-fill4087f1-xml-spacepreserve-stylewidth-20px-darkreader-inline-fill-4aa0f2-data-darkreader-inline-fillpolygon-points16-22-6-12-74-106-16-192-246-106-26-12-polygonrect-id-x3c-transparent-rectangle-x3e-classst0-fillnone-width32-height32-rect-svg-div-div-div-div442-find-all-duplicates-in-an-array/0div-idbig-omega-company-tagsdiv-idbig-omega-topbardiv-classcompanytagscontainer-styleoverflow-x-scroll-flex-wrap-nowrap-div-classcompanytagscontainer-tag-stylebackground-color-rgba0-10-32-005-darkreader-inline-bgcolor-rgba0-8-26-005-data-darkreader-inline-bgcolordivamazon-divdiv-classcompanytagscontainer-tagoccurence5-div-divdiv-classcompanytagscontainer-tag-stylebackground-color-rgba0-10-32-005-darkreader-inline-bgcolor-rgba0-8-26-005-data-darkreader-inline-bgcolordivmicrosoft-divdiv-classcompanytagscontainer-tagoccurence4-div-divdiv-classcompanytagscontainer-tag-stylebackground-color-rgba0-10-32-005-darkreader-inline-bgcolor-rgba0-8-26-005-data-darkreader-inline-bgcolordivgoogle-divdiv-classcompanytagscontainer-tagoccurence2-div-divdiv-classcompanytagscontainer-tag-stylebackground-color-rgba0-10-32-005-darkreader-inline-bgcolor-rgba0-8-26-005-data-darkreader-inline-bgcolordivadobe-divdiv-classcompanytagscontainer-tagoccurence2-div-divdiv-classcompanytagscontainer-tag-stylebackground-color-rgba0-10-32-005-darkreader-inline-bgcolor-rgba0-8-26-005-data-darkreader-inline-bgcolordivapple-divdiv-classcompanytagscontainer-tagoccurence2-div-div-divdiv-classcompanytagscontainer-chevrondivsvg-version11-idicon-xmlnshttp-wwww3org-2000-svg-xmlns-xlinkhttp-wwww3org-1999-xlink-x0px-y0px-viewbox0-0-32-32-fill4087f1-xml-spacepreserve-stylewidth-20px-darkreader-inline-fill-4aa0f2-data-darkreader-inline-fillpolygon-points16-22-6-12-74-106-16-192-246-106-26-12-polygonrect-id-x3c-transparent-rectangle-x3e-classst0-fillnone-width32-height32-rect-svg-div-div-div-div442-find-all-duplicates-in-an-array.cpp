class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        if(nums.empty()==true) return {};
        vector<int>ans;
        unordered_map<int,int>mp;
        for (int i = 0; i < nums.size(); i++) {
        mp[nums[i]]++;
        }

          for (const auto& entry : mp) {
        if (entry.second == 2) {
         ans.push_back(entry.first);
        }
      }
        return ans;

    }
};