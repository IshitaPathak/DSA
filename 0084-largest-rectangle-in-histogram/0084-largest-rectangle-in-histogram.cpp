class Solution {
public:
    
     vector<int> previousSmaller(vector<int>& height){
            vector<int> ans;
            stack<int> st;
            int n=height.size();
            
            for(int i=0;i<n;i++){
                while(!st.empty()&&height[st.top()]>=height[i]) {
                    st.pop();
                }
                int val=st.empty() ? -1 : st.top();
                ans.push_back(val);
                st.push(i);
                
                
            }
         return ans;
        }
        
        vector<int> nextSmaller(vector<int>& height){
            vector<int> ans;
            stack<int> st;
            int n=height.size();
            for(int i=n-1;i>=0;i--){
                while(!st.empty()&&height[st.top()]>=height[i]){
                    st.pop();
                }
                int val=st.empty() ? n :st.top();
                ans.push_back(val);
                st.push(i);
                
                
                
            }
            reverse(ans.begin(),ans.end());
            return ans;
        }
    
    
    int largestRectangleArea(vector<int>& heights) {
        int res=0;
        int n=heights.size();
        vector<int> ps=previousSmaller(heights);
        vector<int> ns=nextSmaller(heights);
        
        for(int i=0;i<n;i++){
            int curr =  (ns[i]-ps[i]-1)* heights[i];
            res=max(res,curr);
        }
        return res;
    }
};