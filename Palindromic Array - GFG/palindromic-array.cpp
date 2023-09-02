//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
bool isPalindrome(int num) {
    int original = num;
    int reversed = 0;
    
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }
    
    return original == reversed;
}

int PalinArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (isPalindrome(a[i]) == 0) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}


int main() {
    int n;
    cin >> n;
    int a[n];
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    cout << PalinArray(a, n) << endl;
    
    return 0;
}


};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends