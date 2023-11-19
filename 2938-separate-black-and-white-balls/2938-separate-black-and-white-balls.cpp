class Solution {
public:
    long long minimumSteps(string s) {
        long long n = s.size();
        long long blackCount = 0; 
        long long cnt = 0; 

        for (char ball : s) {
            if (ball == '1') {
                blackCount++;
            } else {
                cnt += blackCount; 
            }
        }

        return cnt;
    }

};

