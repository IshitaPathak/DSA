class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        string ans="";
        bool flag = false;
        for(int i=n-1;i>=0;i--){
            if(flag==true) break;
           if(num[i]%2!=0){
               ans = num.substr(0,i+1);
               flag = true;
           }
        }
        return ans;
    }
};