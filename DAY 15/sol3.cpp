void traverse(Node* head){
        if(head == NULL)
            return;
        if(pre!=NULL){
            pre->next=head;
            head->prev=pre;
        }
        
        pre=head;
        Node* child=head->child;
        Node* next=head->next;
        head->child=NULL;
        head->next=NULL;
        traverse(child);
        traverse(next);
    }
    Node* flatten(Node* head) {
        pre=NULL;
        traverse(head);
        return head;
    }