class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        // Edge case (optional, but safe)
        if(head == NULL) return NULL;

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL) {
            fast = fast->next;
            if(fast!=NULL){
                fast = fast->next; 
                slow = slow->next;        

            }
        }

        return slow;
    }
};