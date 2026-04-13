
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* prev = NULL;
        if(head->next == NULL){
            return NULL;
        }

        while(fast!=NULL && fast->next != NULL){
            if(fast!=NULL && fast->next != NULL){
                prev = slow;
                fast = fast->next->next;
                slow = slow->next;

            }
        }
        // ListNode* temp= slow;
        slow = slow->next;
        // temp->next = NULL;
        prev->next = slow;
        prev = slow;

        return head;
    }
};