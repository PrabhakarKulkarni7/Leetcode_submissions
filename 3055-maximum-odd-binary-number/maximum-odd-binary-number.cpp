class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        // Sort the string in reverse order
        sort(s.rbegin(),s.rend());

        // If the first character is '1', remove it and append '1' to the end
        if(s[0]=='1'){
          s.erase(0,1);  // Erase the first character '1'
          s +='1';       // Append '1' to the end
        }

        // Return the modified string
        return s;
    }
};
