Node* copyRandomList(Node* head) {
        map<Node* , Node*>mp;
        Node* ptr=head;
        while(ptr!=NULL){
            mp[ptr]=new Node(ptr->val);
            ptr=ptr->next;
        }
        
        mp[NULL]=NULL;
        Node* h=mp[head];
        Node* ans=h;
        ptr=head;
        while(ptr!=NULL){
            h->next=mp[ptr->next];
            h->random=mp[ptr->random];
            ptr=ptr->next;
            h=h->next;
        }
        return ans;
    }//Use extra space to keep old node --> new node mapping to prevent creating multiple
    //copies of same node