//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        
        for(int i=1;i<=n;i++){
            for(int s=1;s<=n-i;s++){
                cout<<" ";
            }
            char ch='A';
            for(int j=1;j<=2*i-1;j++){
                cout<<ch;
                if(j<=(2*i-1)/2) ch++;
                else ch--;
                
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