
class Solution {
public:

    int size(ListNode* head){
        int len=0;
        ListNode* temp = head;
        while(temp!=NULL){
            len++;
            temp = temp->next;
        }
        return len;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* curr = head;

        ListNode* prev = NULL;
        ListNode* first = head;

        if(head == NULL || size(head) == 0 || k%size(head) == 0  ) return head;
        // if(k==0 || size(head)==1 ) return head;

        int pos = size(head) - k%size(head);

        while(pos!=0 && head !=NULL){
            prev = head;
            // forward = head->next;
            curr = head;
            head = head->next;
            pos--;
        }


        while(curr->next != NULL){
            curr = curr->next;
        }
        if(prev!=NULL)prev->next = NULL;

        curr->next = first;

        return head;

        
    }
};