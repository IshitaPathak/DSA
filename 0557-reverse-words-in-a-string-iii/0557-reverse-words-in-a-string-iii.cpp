class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        vector<string> temp;
        string store;
        string result;
        //spliting the input string into words
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
               store+=s[i];
            }else{
                 temp.push_back(store);
                 store="";
            }           
        }
          temp.push_back(store); //adding the last word
        
        // reverse the each word
        for(int i=0;i<temp.size();i++){
            reverse(temp[i].begin(),temp[i].end());
        }
        
        // the reversed string
        for(int i=0;i<temp.size();i++){
            result += temp[i];
            if(i<temp.size()-1){
                result+=' '; //adding space between words
            }
        }
        return result;
    }
};