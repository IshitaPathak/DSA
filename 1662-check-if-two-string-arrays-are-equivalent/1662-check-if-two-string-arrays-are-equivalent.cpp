class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n1=word1.size();
        int n2=word2.size();
        string output1="",output2="";
        for(int i=0;i<n1;i++){
            output1+=word1[i];
        }
        for(int i=0;i<n2;i++){
            output2+=word2[i];
        }  
        if(output1==output2) return true;
        else return false;
    }
};