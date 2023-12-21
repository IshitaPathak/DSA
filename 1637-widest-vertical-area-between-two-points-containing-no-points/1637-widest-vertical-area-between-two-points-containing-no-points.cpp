class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) { 
         int n = points.size();
         sort(begin(points),end(points));
         int ans=0;
        for(int i=1;i<n;i++){
             int width=points[i][0]-points[i-1][0];
             ans=max(ans,width);
        }        
        return ans;
    }
};