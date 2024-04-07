class Solution {
public:
    bool checkValidString(string s) {
        int cnt = 0, spent = 0, left = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                cnt++;
            } else if (s[i] == ')') {
                if (cnt)
                    cnt--; // decrementing '(' char
                else if (spent) {
                    spent--;
                    left++; // recovering '*' char
                } else if (left) {
                    left--; // use left stars ('*')
                } else
                    return false; // if cnt=0, spent=0, left=0
            } else {
                if (cnt) {
                    cnt--;
                    spent++; // decrementing '(' char, increment '*'
                } else
                    left++; // if cnt = 0, increment left stars
            }
        }
        return cnt == 0;
    }
};