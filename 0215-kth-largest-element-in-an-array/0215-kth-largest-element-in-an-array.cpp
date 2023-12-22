class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        priority_queue<int> q(nums.begin(),nums.end());
        int ans;
        while(k!=0){
            ans=q.top();
            q.pop();
            k--;
        }
        return ans;
    }
};