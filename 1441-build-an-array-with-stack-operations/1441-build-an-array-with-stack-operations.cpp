class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int i=0, stream=1;
        while(i<target.size()&&stream<=n){
           if(target[i]==stream){
              ans.push_back("Push");
               i++;
               stream++;
           }else{
               ans.push_back("Push");
               ans.push_back("Pop");
               stream++;
           }
        }
        return ans;
    }
};