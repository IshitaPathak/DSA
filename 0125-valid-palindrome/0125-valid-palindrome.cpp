class Solution {
public:
    char toLowerCase(char ch){
        if((ch>='a' && ch<='z')|| (ch>='0' && ch<='9')){
            return ch;
        }
        else if(ch>='A' && ch<='Z'){
            char temp= ch-'A'+'a';
            return temp;
        }else{
            return '$'; //special character
        }
    }
    bool isPalindrome(string s) {
        int start=0;
        int end=s.size()-1;
        while(start<=end){
        char startChar= toLowerCase(s[start]);
        char endChar = toLowerCase(s[end]);
        if(startChar=='$') start++;
        else if(endChar=='$') end--;
        else if(startChar!=endChar) return false;
        else{
            start++;
            end--;
           }
        }
        
        return true;
    }
};