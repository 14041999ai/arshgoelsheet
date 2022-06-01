ListNode* deleteDuplicates(ListNode* head) {
        ListNode *current = head;
        ListNode *next_next;
        if(current == NULL)
            return head;
        while(current && current->next){
            if(current->val == current->next->val){
                ListNode* temp=current;
                next_next = current->next->next;
                delete(current->next);
                current->next = next_next;
                current=temp;
            } else {
                current = current->next;
            }
        }
        return head;
    }