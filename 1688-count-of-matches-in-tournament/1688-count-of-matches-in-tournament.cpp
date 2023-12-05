class Solution {
public:
    int numberOfMatches(int n) {
        int matchesPlayed=0;
        while (n !=1) {
        if (n % 2 == 0) {  // If the current number of teams is even
            matchesPlayed += n / 2;
            n /= 2;
        } else {  // If the current number of teams is odd
            matchesPlayed += (n - 1) / 2;
            n = (n - 1) / 2 + 1;
        }
    }

    return matchesPlayed;
    }
};