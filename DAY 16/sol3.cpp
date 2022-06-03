#include <iostream>
using namespace std;

void zigzagList(Node *head){
    bool flag=true;
    Node* current=head;
    while(while(current->next!=NULL)){
        if(flag){
            if(current->next->data>current->data)
            swap(current->data, current->next->data);
        }
        else{
            if(current->data>current->next->data)
            swap(current->data, current->next->data);
        }
        flag=!flag;
        current=current->next;
    }
}
int main(){

return 0;
}