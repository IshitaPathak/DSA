class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> v;
        for(int i=0;i<bank.size();i++){
            int count=0;
            for(int j=0;j<bank[0].size();j++){
                if(bank[i][j]=='1') count++;
            }
            if(count!=0) v.push_back(count);
        }
        if(v.size()==1) return 0;
        
        int ans=0;
        for(int i=0;i+1<v.size();i++){
            ans=ans+v[i]*v[i+1];
        }
        return ans;
    }
};