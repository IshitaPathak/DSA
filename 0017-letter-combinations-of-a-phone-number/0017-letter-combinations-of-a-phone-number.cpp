class Solution {
public:
    void helper(int ind,unordered_map<char,string> &m,string &temp,vector<string> &result, string &digits){  
       if(ind>=digits.length()){
             result.push_back(temp);
             return;
       }
        char ch=digits[ind];
        string str=m[ch];
        for(int i=0;i<str.length();i++){
            temp.push_back(str[i]);
            helper(ind+1,m,temp,result,digits);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.length()==0) return {};
        vector<string> result;
        unordered_map<char,string> m;
        m['2'] = "abc";
        m['3'] = "def";
        m['4'] = "ghi";
        m['5'] = "jkl";
        m['6'] = "mno";
        m['7'] = "pqrs";
        m['8'] = "tuv";
        m['9'] = "wxyz";
        
        string temp="";
        // helper(ind,m,temp,result);
        helper(0,m,temp,result,digits);
        return result;
    }
};