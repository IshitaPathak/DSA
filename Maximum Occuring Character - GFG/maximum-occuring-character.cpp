//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        // int max_count=0;
        // char max_char;
        // int n=str.size();
        // for(int i=0;i<n;i++){
        //     char s = str[i];
        //     int count=0;
        //     for(int i=0;i<n;i++){
        //         if(s==str[i]) count++;
        //     }
        //     //  max_count=max(max_count,count);
        //      if(count>max_count){
        //          max_count=count;
        //          max_char=s;
        //      }
             
        // }
        // return max_char;
        int n = str.size();
        unordered_map<char,int> m;
        for(int i=0;i<n;i++){
            m[str[i]]++;
        }
        
        int maxCount=0;
        char maxChar='@';
        for(auto itr=m.begin();itr!=m.end();itr++){
              if (itr->second > maxCount || (itr->second == maxCount && itr->first < maxChar)) {
                maxCount = itr->second;
                maxChar = itr->first;
            }
        }
        return maxChar;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends