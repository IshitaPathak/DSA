class Solution {
public:
    int numberOfWays(string corridor) {
        int M=1e9+7;
        // storing index of seats in an array
        int n = corridor.size();
        vector<int> seat_pos;
        for(int i=0;i<n;i++){
            if(corridor[i]=='S') seat_pos.push_back(i);
        }
        
        if(seat_pos.size()%2!=0 || seat_pos.size()==0) return 0;
        
        int prev=seat_pos[1]; // end index of previous two seat subarray
        int m=seat_pos.size();
        long long result =1;
        
        for(int i=2;i<m;i+=2){
            result =(result*(seat_pos[i]-prev))%M;
            prev=seat_pos[i+1];
        }
        return result;
    }
};