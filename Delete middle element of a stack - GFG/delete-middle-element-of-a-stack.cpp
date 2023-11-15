//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        int m=floor((sizeOfStack+1)/2); // m is middle element
        stack<int> temp;
        int i=1;
        if(m%2==0&&sizeOfStack%2!=0 || m%2!=0&&sizeOfStack%2!=0){
        while(i!=m){
            temp.push(s.top());
            s.pop();
            i++;
        }
        s.pop();
        while(temp.size()!=0){
            s.push(temp.top());
            temp.pop();
        }
      }else{
           while(i!=m+1){
            temp.push(s.top());
            s.pop();
            i++;
        }
        s.pop();
        while(temp.size()!=0){
            s.push(temp.top());
            temp.pop();
        }
      }
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends