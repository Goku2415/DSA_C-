
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* anshead = NULL;
    ListNode* anstail = NULL;
    
    ListNode* temp1 = list1;
    ListNode* temp2 = list2;
    
    while(temp1!= NULL && temp2!=NULL){
        if(temp1->val < temp2->val){
            list1 = list1->next;
            temp1->next = NULL;
        
            ListNode* ans = new ListNode(temp1->val);
            temp1 = list1;
        
            if(anshead == NULL){
                anshead = ans;
                anstail = ans;
            }else{
                anstail->next = ans;
                anstail = ans;
            }
        }else if(temp1->val >= temp2->val){
            list2 = list2->next;
            temp2->next = NULL;
        
            ListNode* ans = new ListNode(temp2->val);
            temp2 = list2;

            if(anshead == NULL){
                anshead = ans;
                anstail = ans;

            }else{
                anstail->next = ans;
                anstail = ans;
            }
        }
        
    }
    while(list1 != NULL){
         list1 = list1->next;
            temp1->next = NULL;
        
            ListNode* ans = new ListNode(temp1->val);
            temp1 = list1;
        
            if(anshead == NULL){
                anshead = ans;
                anstail = ans;
            }else{
                anstail->next = ans;
                anstail = ans;
            }
    }
    
    while(list2 != NULL){
         list2 = list2->next;
        temp2->next = NULL;

        ListNode* ans = new ListNode(temp2->val);
        temp2 = list2;

        if(anshead == NULL){
            anshead = ans;
            anstail = ans;
        }else{
            anstail->next = ans;
            anstail = ans;
        }
    }
    
  
    return anshead;

    }
};