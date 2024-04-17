class Solution {

    #define pb push_back
    #define pop pop_back
    #define ins insert

    void func(TreeNode* root, string& tmp, set<string>& set) {
        // base case
        if(!root) {
            return;
        }

        // current character
        char curr = char(root->val + 'a');

        // add the character to the string
        tmp += curr;

        if(!root->left && !root->right) {   // if it is a leaf node
            set.ins(tmp);   // add the string into the set
        }

        // recursive calls for left and right subtree
        func(root->left, tmp, set); 
        func(root->right, tmp, set);

        // while backtracking pop the character
        tmp.pop();
    }

public:
    string smallestFromLeaf(TreeNode* root) {
        if(!root)   return "";

        string tmp = "";
        set<string> st;
        func(root, tmp, st);

        // for reversed strings
        set<string> reversedSet;
        
        for(const auto& it : st) {
            string temp = it;
            reverse(temp.begin(), temp.end());
            reversedSet.insert(temp);
        }

        st = reversedSet;

        return *st.begin(); // returns the first element
    }
};