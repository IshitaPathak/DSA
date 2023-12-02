class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> m;
        int result=0;
       // Count the occurrences of each character in chars
        for (int i = 0; i < chars.size(); i++) {
            m[chars[i]]++;
        }
        // Check each word in the array
        for (int j = 0; j < words.size(); j++) {
             unordered_map<char,int> s;
            bool goodWord = true;
            // Count the occurrences of each character in the current word
            for (int k = 0; k < words[j].size(); k++) {
                char c = words[j][k];
                s[c]++;
                // Check if the character count exceeds the available count in chars
                if (s[c] > m[c]) {
                    goodWord = false;
                    break;
                }
            }
            // If the word is "good," add its length to the result
            if (goodWord) {
                result += words[j].size();
            }
        }
        return result;
    }
};