class Solution {
public:
    void findCombination(vector<vector<int>> &ans,vector<int>&arr,vector<int> candidates,int target,int ind){
        int n=candidates.size();
       if(target==0){
            ans.push_back(arr);
           return;
       }
        
        for(int i=ind;i<n;i++){
            if(i>ind && candidates[i]==candidates[i-1]) continue;
            if(candidates[ind]>target) break;
            arr.push_back(candidates[i]);
            findCombination(ans,arr,candidates,target-candidates[i],i+1);
            arr.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> arr;
        findCombination(ans,arr,candidates,target,0);
        return ans;
    }
};