class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> pq;
        vector<int> diff;
        for(int i=0;i<arr.size();i++){
            diff.push_back(abs(arr[i]-x));
        }
        for(int i=0;i<arr.size();i++){
            pq.push({diff[i],arr[i]});
            if(pq.size()>k) pq.pop();
        }
        
        vector<int> ans;
        while(k--){
           ans.push_back(pq.top().second);  
            pq.pop();
        }
        
        sort(ans.begin(),ans.end());
        return ans;
    }
};