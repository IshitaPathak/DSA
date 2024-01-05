class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=nums.size();
        // int ele=0;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        
        int ans=0;
        for(auto x: mp){
           if(x.second==1) return -1;
            
            ans+=ceil((double)x.second/3);
            
        }
        // return {(ele==n)?ans:-1};
        // if(ele==n) return ans;
        // else return -1;
        return ans;
    }
};