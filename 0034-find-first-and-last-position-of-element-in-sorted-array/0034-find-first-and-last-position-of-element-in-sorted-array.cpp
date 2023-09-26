class Solution {
public:
         int lowerbound(vector<int>& arr, int n, int x){
            int low=0, high=n-1;
            int ans=n;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(arr[mid]>=x){
                    ans=mid;
                    high=mid-1;
                }else{
                  low=mid+1;
                }
            }
            return ans;
        }   
        
        int upperbound(vector<int>& arr, int n, int x){
            int low=0, high=n-1;
            int ans=n;
            while(low<=high){
               int mid=low+(high-low)/2;
                if(arr[mid]>x){
                   ans=mid;
                   high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            return ans;
        }
        
  vector<int> searchRange(vector<int>& arr, int target) {
      int n=arr.size();
      int lb=lowerbound(arr,n,target);
      if(lb==n || arr[lb]!=target) return {-1,-1};
      return {lb,upperbound(arr,n,target)-1};
    }
};