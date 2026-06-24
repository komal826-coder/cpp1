#include<iostream>
using namespace std ; 
class node {
    public:
    int data ; 
    node *next ; 

    node(int value){
        data = value ; 
    }
};
int main(){
int arr[] = {1,2,3,4,5,6,7,8,9} ; 
node *head = new node(arr[1]) ; 
node *temp = head ; 
if(head->next == nullptr){
    cout<<"yes" ; 
}
int count = 0 ; 
while(temp){
    count++ ; 
    temp = temp->next ; 
}
count /= 2 ; 
node *curr = head , *prev = nullptr ; 
while(count--){
    prev = curr ; 
    curr =   curr->next ; 
}
prev->next = nullptr ; 
node *front = nullptr ; 
prev = nullptr ; 
while(curr){
    front = curr->next ; 
    curr->next = prev ; 
    prev = curr ; 
    curr = front ; 
}
node *head1 = head ; 
node *head2 = prev ; 
while(head1){
    if(head1->data != head2 ->data)
        cout<<"not" ; 
        head1 = head1->next ; 
        head2 = head2->next ; 
        cout<<"yes" ;  
}
}