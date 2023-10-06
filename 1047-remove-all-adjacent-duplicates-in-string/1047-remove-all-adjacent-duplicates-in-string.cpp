class Solution {
public:
    string removeDuplicates(string st) {
        stack<char> s;
        int n=st.size();
        for(int i=0;i<n;i++){
            if(s.empty()==true || s.top()!=st[i])
                s.push(st[i]);
            else s.pop();
        }
        string ans="";
        while(s.empty()!=true){
            ans += s.top();
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};