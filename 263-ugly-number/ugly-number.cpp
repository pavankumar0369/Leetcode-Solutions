class Solution {
public:
    bool isUgly(int n) {
        // Edge case: Ugly numbers must be strictly positive integers
        if (n <= 0) {
            return false;
        }
        
        // Loop through each allowed prime factor
        for (int factor : {2, 3, 5}) {
            // Keep dividing n by the current factor while it is perfectly divisible
            while (n % factor == 0) {
                n /= factor;
            }
        }
        
        // If n is successfully reduced to 1, all its prime factors were 2, 3, or 5
        return n == 1;
    }
};
