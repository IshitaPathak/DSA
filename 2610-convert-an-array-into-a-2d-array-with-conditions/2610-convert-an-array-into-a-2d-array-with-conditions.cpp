class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> row;
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
           while (any_of(mp.begin(), mp.end(), [](const auto& element) { return element.second > 0; })) {
        row.clear();
             for (auto& x : mp) {
            if (x.second > 0) {
                row.push_back(x.first);
                x.second--;
            }
        }
               ans.push_back(row);
           }
       return ans;
    }
};