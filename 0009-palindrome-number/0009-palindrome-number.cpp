class Solution {
public:
    bool isPalindrome(long x) {
        // if reverse of a number is same it is palindrome.
     if (x < 0) {
            return false;
        } else {
            long original = x;  // Store the original value for comparison
            long revnum = 0;
            while (x > 0) {
                int ld = x % 10;
                revnum = revnum * 10 + ld;
                x = x / 10;
                
                if (revnum > INT_MAX || revnum < INT_MIN) {
                return 0;  // Handle overflow
            }
            }
         
            return revnum == original;
        }
    }
};