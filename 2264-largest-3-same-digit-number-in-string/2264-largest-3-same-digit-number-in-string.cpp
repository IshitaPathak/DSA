class Solution {
public:
    string largestGoodInteger(string num) {
        int n=num.length();
        vector<int> v;
        for(int i=0;i<n-2;i++){
            if(num[i]==num[i+1] && num[i+1]==num[i+2]){
                v.push_back(num[i]-'0');
            }
        }
        
        if(v.empty()) return "";
        sort(v.begin(),v.end());
        int m=v.size();
        int x=v[m-1];
        // Create a string with the largest digit repeated three times
         string result(3, '0' + x);
         return result;
    }
   
};