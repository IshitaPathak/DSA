class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        if(nums.empty()==true) return {};
        vector<int>ans;
        unordered_map<int,int>mp;
        for (int i = 0; i < nums.size(); i++) {
        mp[nums[i]]++;
        }
        
        for(auto itr=mp.begin();itr!=mp.end();itr++){
            if(itr->second==2) 
                ans.push_back(itr->first);
        }
        return ans;

    }
};