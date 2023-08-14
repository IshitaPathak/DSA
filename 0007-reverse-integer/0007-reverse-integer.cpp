class Solution {
public:
  int reverse(int x) {
        long long int reverseDigit = 0; 
        while (x != 0) {
            long long int lastDigit = x % 10;
            x = x / 10;
            reverseDigit = (reverseDigit * 10) + lastDigit;
            
            if (reverseDigit > INT_MAX || reverseDigit < INT_MIN) {
                return 0;  // Handle overflow
            }
        }
        return static_cast<int>(reverseDigit);
    }
};