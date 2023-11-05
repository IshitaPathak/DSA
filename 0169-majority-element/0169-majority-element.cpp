class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(auto itr=m.begin();itr!=m.end();itr++){
            if(itr->second>n/2){
                return itr->first;
            }
        }
        return -1;
    }
};