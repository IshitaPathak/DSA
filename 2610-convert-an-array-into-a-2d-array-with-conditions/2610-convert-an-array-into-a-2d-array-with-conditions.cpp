class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> row;
        vector<vector<int>> ans;
        int count=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
           while (count!=n) {
        row.clear();
             for (auto& x : mp) {
            if (x.second > 0) {
                row.push_back(x.first);
                count++;
                x.second--;
            }
        }
               ans.push_back(row);
           }
       return ans;
    }
};