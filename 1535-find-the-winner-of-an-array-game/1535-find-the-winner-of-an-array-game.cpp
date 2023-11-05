class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int n = arr.size();
        int maxi = INT_MIN;
        
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, arr[i]);
        }
        
        if (k >= n) {
            // If k is greater than or equal to the array size, the maximum element will win.
            return maxi;
        }
        
        int winner = arr[0];
        int win = 0;
        
        for (int i = 1; i < n; i++) {
            if (arr[i] > winner) {
                winner = arr[i];
                win = 1;
            } else {
                win++; // If the current element is smaller than the winner, increase the win count.
            }
            
            if (win == k || winner ==maxi) {
                return winner;
            }
        }
        
        return -1;
    }
};
