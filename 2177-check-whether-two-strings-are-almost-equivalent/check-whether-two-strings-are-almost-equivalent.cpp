#include <string>

using namespace std;

class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        int a1[26] = {0};
        int a2[26] = {0}; 
        
        // Count occurrences of characters in word1
        for (char x : word1) {
            a1[x - 'a']++; // Increment the count for the character 'x' in word1
        }
        
        // Count occurrences of characters in word2
        for (char x : word2) {
            a2[x - 'a']++; // Increment the count for the character 'x' in word2
        }
        
        // Compare the counts of characters in both words
        // If the absolute difference between the counts of any character is greater than 3, return false
        for (int i = 0; i < 26; i++) {
            if (abs(a1[i] - a2[i]) > 3) 
            { // If the difference in counts is greater than 3 words are not almost equivalent
                return false; 
            }
        }
        
        // If the absolute difference in counts of all characters is at most 3, return true
        return true; // Words are almost equivalent
    }
};
