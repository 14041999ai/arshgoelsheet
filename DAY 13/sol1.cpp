bool hasCycle(ListNode *head) {
        ListNode *slow_ptr = head, *fast_ptr = head;
        while(slow_ptr && fast_ptr && fast_ptr->next){
            fast_ptr = fast_ptr->next->next;
            slow_ptr = slow_ptr->next;
            if(slow_ptr == fast_ptr)
                return true;
        }
        
        return false;
    }