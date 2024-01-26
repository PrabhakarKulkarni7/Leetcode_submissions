/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {

        //  Just change the value of delete node to the next node

        //  example - delete  node 3 
        //   1 --> 2 --> 3 --> 4 --> 5
        //   1 -->2 --> 4 --> 4 --> 5
        // tortoise hare algo use maadyar , it is efficient
        node->val = node->next->val;

        // make the connection for delete node to "next of next" node , it will break the connection between delete node to "next" Node
        //                    4
        //   1 -->2 --> 4 --------> 5
        node->next = node->next->next;
        return; 
    }
};