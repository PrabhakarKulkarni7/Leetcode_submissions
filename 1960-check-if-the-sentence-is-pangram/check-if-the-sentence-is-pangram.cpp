class Solution {
public:
    bool checkIfPangram(string sentence) {
        map<int,int>mp;
        set<int>st;
        for(int i=0;i<sentence.size();i++)
        {
            st.insert(sentence[i]);
        }

        if(st.size()==26){
            return true;
        }
        return false;
          
    }
};