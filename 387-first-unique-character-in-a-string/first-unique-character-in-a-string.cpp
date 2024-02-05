class Solution {
public:
    int firstUniqChar(string s) {
        
        // Step 1: Create an unordered_map to store the frequency of each character in the string.
        unordered_map<char, int> ump(26);

        // Step 2: Iterate through the string to populate the unordered_map.
        for (int i = 0; i < s.size(); i++) {
            ump[s[i]]++;
        }
        
        // Step 3: Iterate through the string again and find the first character with a frequency of 1.
        for (int i = 0; i < s.size(); i++) {
            if (ump[s[i]] == 1) return i;
        }
        
        // Step 4: If no unique character is found, return -1.
        return -1;
    }
};