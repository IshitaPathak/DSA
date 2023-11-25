class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
        vector<int> result;
        vector<int> prefixSum;
        // vector<int> suffixSum;
        int PrefixEle=0;
        int sum=0;
        int ele=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        for(int i=0;i<n;i++){
            PrefixEle+=nums[i];
            // SuffixEle+=nums[i+1];
            prefixSum.push_back(PrefixEle);
            // suffixSum.push_back(SuffixEle);
        }      
       
        
        for(int i=0;i<n;i++){
          ele= ((nums[i]*(2*i-n+2)) - prefixSum[i] + sum - prefixSum[i]);
            result.push_back(ele);
       }
         return result;
    }
};