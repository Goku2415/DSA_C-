
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* curr = head;
        ListNode* prev = NULL;

        while(head!=NULL && head->val == val ){  
            ListNode* temp = head;          
            head = head->next;
            temp->next = NULL;
            delete temp;
            
        }
        curr = head;
            
        while( curr!=NULL ){
            if(curr->val != val ){
                prev = curr;
                curr = curr->next;
            }
            else{                
                ListNode* temp = curr;
                curr = curr->next;
                temp ->next = NULL;
                prev->next  = curr;
                
            }
        }
        return head;
    }
};