class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>> q;
    int K;
    KthLargest(int k, vector<int>& nums) {
        int n=nums.size();
        K=k;
        for(int i=0;i<n;i++){
            q.push(nums[i]);
            if(q.size()>k){
                q.pop();
            }
        }
    }
    
    int add(int val) {
        q.push(val);
        int ans=0;
        if(q.size()>K){
            q.pop();
            // ans=q.top();
        }
         return q.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */