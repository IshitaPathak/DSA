//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++){
            // note- you should declare num variable outside of the inner loop 
            //bcz if you redeclare and reinilize num in inner loop which means 
            //the value is reset to sam initial value in each iteration.
               int num = (i%2==0?0:1);
            for(int j=1;j<=i;j++){
                cout<<num<<" ";
                num = 1-num;
            }
            cout<<endl;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends