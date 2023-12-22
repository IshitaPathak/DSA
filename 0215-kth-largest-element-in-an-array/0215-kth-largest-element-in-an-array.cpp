class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // maintain the min heap of size k
        // remove the top element and push new element when no of ele exceeds k
        // return top element 
        int n=nums.size();
        priority_queue<int,vector<int>,greater<int>> q;
        for(int i=0;i<n;i++){
            q.push(nums[i]);
            if(q.size()>k){
                q.pop();
            }
        }
         return q.top();
    }
};