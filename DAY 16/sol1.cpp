#include <iostream>
using namespace std;

int product(Node* l1, Node* l2){
    int sum1=0, sum2=0;

    while(l1!=NULL){
        sum1=sum1*10;
        sum1=sum1+l1->val;
    }

    while(l2!=NULL){
        sum2=sum2*10;
        sum2=sum2+l2->val;
    }
    return sum1*sum2;
}
int main(){

return 0;
}