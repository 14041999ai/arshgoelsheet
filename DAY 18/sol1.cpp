ListNode* reverseList(ListNode* head) {
        ListNode *current = head, *prev = NULL, *next = NULL;
        while(current != NULL){
            //store next of current
            next = current->next;
            
            //reverse current node pointer
            current->next = prev;
            
            //move ahead
            prev = current;
            current = next;
        }
        head = prev;
        return head;
    }