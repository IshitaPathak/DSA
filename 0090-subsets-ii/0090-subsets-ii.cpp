class Solution {
public:
    vector<vector<int>> ans;
    void sub(vector<int> &nums,int i,vector<int> temp){
        int n=nums.size();
        if(i>=n){
            sort(temp.begin(),temp.end());
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        sub(nums,i+1,temp);
        temp.pop_back();
        sub(nums,i+1,temp);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>temp;
        vector<vector<int>> result;
        sub(nums,0,temp);
        
        
        map<vector<int>,int> m;
        for(int j=0;j<ans.size();j++){
            m[ans[j]]++;
        }
        for(auto itr=m.begin();itr!=m.end();itr++){
            result.push_back(itr->first);
        }
       
        return result;
    }
};