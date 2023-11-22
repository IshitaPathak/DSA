class Solution {
public:
    void findCombination(vector<vector<int>> &ans,vector<int> &temp,int k,int n,vector<int> &candidate,int ind){
        
        if(k==0){
            if(n==0){
              ans.push_back(temp);
            } return;
        }
        
        // if(candidate[ind]<=n){
        //     temp.push_back(candidate[ind]);
        //     findCombination(ans,temp,k-1,n-candidate[ind],candidate,ind+1);
        //     temp.pop_back();
        // }
        //     findCombination(ans,temp,k,n,candidate,ind+1);
        
         if (ind < candidate.size() && candidate[ind] <= n) {
            // Include the current element in the combination
            temp.push_back(candidate[ind]);
            findCombination(ans, temp, k - 1, n - candidate[ind], candidate, ind + 1);
            temp.pop_back();

            // Exclude the current element from the combination
            findCombination(ans, temp, k, n, candidate, ind + 1);
        }
        
       
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> candidate={1,2,3,4,5,6,7,8,9};
        vector<vector<int>> ans;
        vector<int> temp;
        findCombination(ans,temp,k,n,candidate,0);
        return ans;
    }
};