class Solution {
public:
    int maxDepth(string s) {
        int depth = 0 , count = 0;
        for(char ch : s)
        {
            if(ch=='(')
            {
                count++;
            }
            if(ch==')')
            {
                count--;
            }
            depth = max(depth,count);
        }
        return depth;
    }
};