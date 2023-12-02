class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> charCount(26,0);
        for(int i=0;i<chars.size();i++){
            charCount[(chars[i])-'a']++;
        }
          int result=0;
          
        for(int j=0;j<words.size();j++){
             vector<int> wordCount(26,0);
            for(int k=0;k<words[j].size();k++){
                wordCount[(words[j][k])-'a']++;
            }
            bool good =true;
            for(int i=0;i<26;i++){
                if(wordCount[i]>charCount[i]){
                     good =false;
                    break;
                 }
            }
            
            if(good==true){
                result+=words[j].size();
            }
        }                      
          return result;            
    }
};