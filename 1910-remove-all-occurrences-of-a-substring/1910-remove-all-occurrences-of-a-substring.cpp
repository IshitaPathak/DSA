class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        while(s.length()!=0 && s.find(part)<s.length()){
            s.erase(s.find(part),part.length());
        }
        return s;
        // int n=s.size();
        // int m=part.size();
        // for(int i=0;i<n-m;i++){
        //     for(int j=0;j<m;j++){
        //         if(s[i+j]!=part[j]){
        //             break;
        //         }
        //         if(j==m-1) {
        //             s.erase(s.begin()+i,s.begin()+i+m);
        //             // i+=m-1;
        //         }
        //     }
        // }
        // return s;
    }
};