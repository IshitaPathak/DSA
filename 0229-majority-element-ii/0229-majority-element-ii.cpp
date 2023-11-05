class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        vector<int> ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        
        for(auto itr=m.begin();itr!=m.end();itr++){
            if(itr->second>n/3){
                ans.push_back(itr->first);
            }
        }
        return ans;
    }
};