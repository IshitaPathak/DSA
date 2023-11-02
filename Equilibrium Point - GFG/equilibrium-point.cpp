//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        if(n==1) return 1;
        if(n==2) return -1;
        // for(int i=1;i<n;i++){
        // long long sum1=0,sum2=0;
        //     for(int j=i-1;j>=0;j--){
        //         sum1+=a[j];
        //     }
        //     if(i<n-1){
        //     for(int j=i+1;j<n;j++){
        //         sum2+=a[j];
        //     }
        //     }
        //     if(sum1==sum2){
        //         return (i+1);
        //     }
        // }
        // return -1;
        int sum=0 , left_sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        for(int i=0;i<n;i++){
            sum=sum-a[i];
            if(left_sum==sum) return (i+1);
            left_sum+=a[i];
        }
        return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends