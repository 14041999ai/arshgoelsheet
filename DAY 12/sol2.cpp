ListNode* middleNode(ListNode* head) {
        ListNode *slow_ptr, *fast_ptr;
        slow_ptr = head;
        fast_ptr = head;
        while(fast_ptr != NULL && fast_ptr->next != NULL && slow_ptr != NULL){
            fast_ptr = fast_ptr->next->next;
            slow_ptr = slow_ptr->next;
        }
        
        return slow_ptr;
    }