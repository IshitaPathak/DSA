class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            int more=target-num;
            if(m.find(more)!=m.end() && m[more]!=i){
                   return {i,m[more]};
            }
        }
        return {-1,-1};
    }
};