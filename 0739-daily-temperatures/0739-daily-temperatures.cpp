class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        stack<int> st;
        vector<int> answer(n,0);
        for(int i=n-1;i>=0;i--){
             while(st.size()!=0 && temperatures[i]>=temperatures[st.top()]){
                 st.pop();             
             }
                int val = st.empty() ? 0 : st.top()-i;
                answer[i]=val;
                st.push(i);   
        }
         return answer;
    }
};