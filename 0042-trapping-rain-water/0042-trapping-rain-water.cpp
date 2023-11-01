class Solution {
public:
    int trap(vector<int>& height) {
//         int water=0;
//         int n=height.size();
//         for(int i=0;i<n;i++){
//             //finding left max
//             int lmax=height[i];
//             for(int j=0;j<i;j++){
//                 lmax=max(lmax,height[j]);
//             }
            
//             //finding right max
//             int rmax=height[i];
//             for(int j=i+1;j<n;j++){
//                 rmax=max(rmax,height[j]);
//             }
            
//             water=water+(min(lmax,rmax))-height[i];
//         }
//         return water;
        
        // optimised sol
        int n=height.size();
        int lmax[n]; 
        lmax[0]=height[0];
        for(int i=1;i<n;i++){
            int temp=max(lmax[i-1],height[i]);
            lmax[i]=temp;
        }
        
        int rmax[n];
        rmax[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
             int temp=max(rmax[i+1],height[i]);
             rmax[i]=temp;
        }
        
        int water=0;
        for(int i=0;i<n;i++){
            water+=min(lmax[i],rmax[i])-height[i];
        }
        return water;
            
    }
};