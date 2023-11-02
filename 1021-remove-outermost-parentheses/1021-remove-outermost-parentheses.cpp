class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.size();
        string ans;
        int count=0;
        for(int i=0;i<n;i++){
            char c=s[i];
            if(c=='(' && count++>0){
                   ans+=c;
            }
            if(c==')' && count-->1){
                   ans+=c;
            }
        }
        return ans;
    }
};