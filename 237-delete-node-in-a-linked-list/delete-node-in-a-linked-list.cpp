class Solution {
public:

    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        ListNode* temp = node->next;
        node->next = node->next->next;
        delete temp;
        return ;
    }
    // void deleteNode(ListNode* node) {
    //     node->val = node->next->val;
    //     node->next = node->next->next;
    //     return ;
    // }
};