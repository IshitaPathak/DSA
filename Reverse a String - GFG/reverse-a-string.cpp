//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++
class Solution
{  public:
  void reverseWordHelper(int left, int right, string& str) {
        while (left < right) {
            swap(str[left], str[right]);
            left++;
            right--;
        }
    }

    string reverseWord(string str) {
        int n = str.size();
        reverseWordHelper(0, n - 1, str);
        return str;
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
    	string s;
    	cin >> s;
    	Solution ob;
    	cout << ob.reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends