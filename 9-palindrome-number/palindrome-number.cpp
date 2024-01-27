class Solution {
public:
    bool isPalindrome(int x) {
        string num = to_string(x);
        int len = num.size();
        for(int i=0;i<len/2;i++)
        {
            if(num[i]!=num[len-i-1])
            return false;
        }
        return true;

    }
};