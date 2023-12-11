class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int> m;
        int ans=0;
        int a = n*0.25;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        for(auto itr = m.begin();itr!=m.end();itr++){
            if(itr->second>a){
                ans=itr->first;
            }
        }
        return ans;
    }
};