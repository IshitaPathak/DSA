class Solution {
public:
    void findCombination(vector<int> &candidates,int target,vector<vector<int>> &ans,vector<int> &arr,int ind){
        int n=candidates.size();
        if(ind==n){
          if(target==0){
             ans.push_back(arr);
          } return;
        }
        
        if(candidates[ind]<=target){
             arr.push_back(candidates[ind]);
             findCombination(candidates,target-candidates[ind],ans,arr,ind);
            
            arr.pop_back();
        }
            findCombination(candidates,target,ans,arr,ind+1);
        
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> arr;
        findCombination(candidates,target,ans,arr,0);
        return ans;
    }
};