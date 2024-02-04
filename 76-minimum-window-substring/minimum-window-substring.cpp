#include <unordered_map>
#include <climits>

class Solution {
public:
    string minWindow(string s, string t) {
        // Initialize character frequency maps for both strings
        unordered_map<char, int> targetFreq, windowFreq;
        for (char c : t) {
            targetFreq[c]++;
        }

        // Initialize pointers and variables
        int left = 0, right = 0, minLength = INT_MAX, minLeft = 0, requiredChars = targetFreq.size();

        while (right < s.length()) {
            char currentChar = s[right];

            // Update the frequency of the current character in the window
            windowFreq[currentChar]++;

            // Check if the current character contributes to satisfying the target
            if (targetFreq.find(currentChar) != targetFreq.end() && windowFreq[currentChar] == targetFreq[currentChar]) {
                requiredChars--;
            }

            // Try to minimize the window by moving the left pointer
            while (requiredChars == 0) {
                // Update the minimum window if smaller than the current minimum
                if (right - left + 1 < minLength) {
                    minLength = right - left + 1;
                    minLeft = left;
                }

                char leftChar = s[left];
                // Update the frequency of the character being removed from the window
                windowFreq[leftChar]--;

                // Check if the removal affects satisfying the target
                if (targetFreq.find(leftChar) != targetFreq.end() && windowFreq[leftChar] < targetFreq[leftChar]) {
                    requiredChars++;
                }

                // Move the left pointer to try to find a smaller window
                left++;
            }

            // Move the right pointer to expand the window
            right++;
        }

        // Check if a valid window was found
        if (minLength == INT_MAX) {
            return "";
        }

        // Return the minimum window substring
        return s.substr(minLeft, minLength);
    }
};