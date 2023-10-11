class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
             m[nums[i]]++;
        } 
        for(auto itr=m.begin();itr!=m.end();itr++){
            if(itr->second>1){
                ans =itr->first;
            }
        }
        return ans;
    }
};