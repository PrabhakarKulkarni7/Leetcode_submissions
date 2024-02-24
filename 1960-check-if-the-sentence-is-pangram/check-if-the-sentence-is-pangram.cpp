class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char>st;
        for(int i=0;i<sentence.size();i++)
        {
            // Inserting the char into set 
            st.insert(sentence[i]);
        }

        // Checking for size(As Set stores unique elements, if the size = 26 it indicates all the characters from input string are unique, thus follows the anagram property)
        if(st.size()==26){
            return true;
        }
        return false;
          
    }
};
// Any approach in O(root n) would be appreciable :). Do let me know. Thank you :)