class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        int n=s.size();
        for(int i=n-1;i>=0;i--){
            if(st.empty()==true || st.top()!=s[i]){
                st.push(s[i]);
             }else{
                st.pop();
            }
        }
        string result="";
        while(st.empty()!=true){
            result+=st.top();
            st.pop();
        }
        return result;
    }
};