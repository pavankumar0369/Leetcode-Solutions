#include <string>
#include <vector>

class Solution {
public:
    int firstUniqChar(std::string s) {
        // Array to store frequencies of 26 lowercase English letters
        std::vector<int> count(26, 0);
        
        // First pass: Populate the frequency array
        for (char c : s) {
            count[c - 'a']++;
        }
        
        // Second pass: Find the first character with a frequency of 1
        for (int i = 0; i < s.length(); ++i) {
            if (count[s[i] - 'a'] == 1) {
                return i; 
            }
        }
        
        // Return -1 if no unique character exists
        return -1;
    }
};
