//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// function to return sum of  1, 2, ... n
	   long long seriesSum(long long n) {
    return (static_cast<long long>(n * (n + 1)) / 2);

	}

  //using recursion
  // recursive solution become slow for large input, as they involve lots of 
  // function call and stack operation.
//   long long seriesSum(long long n){
//       if(n==0) return 0;
//       return n+seriesSum(n-1);
//   }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.seriesSum(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends