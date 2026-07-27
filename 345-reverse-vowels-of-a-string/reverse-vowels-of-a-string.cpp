#include <string>
using namespace std;

class Solution {
private:
    // Helper function to check if a character is a vowel
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }

public:
    string reverseVowels(string s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
            // Move the left pointer forward until it finds a vowel
            while (left < right && !isVowel(s[left])) {
                left++;
            }
            // Move the right pointer backward until it finds a vowel
            while (left < right && !isVowel(s[right])) {
                right--;
            }
            
            // Swap the vowels and move both pointers inward
            if (left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};
