bool isPalindrome(ListNode* head) {
        ListNode* push_node = head;
        ListNode* pop_node = head;
        
        stack<int> st;
        
        if(head == NULL)
            return true;
        
        while(push_node != NULL){
            
            st.push(push_node->val);
            push_node = push_node->next;
        }
        
        while(pop_node != NULL){
            int data = st.top();
            st.pop();
            
            if(data != pop_node->val)
                return false;
            
            pop_node = pop_node->next;
        }
        
        return true;
    }