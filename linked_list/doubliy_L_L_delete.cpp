// delete at start 
// #include<iostream>
// using namespace std ; 
// class node {
//     public:
//     int data ; 
//     node *next ; 
//     node *pre ; 
//     node(int value){ 
//         data = value ; 
//         next = nullptr ; 
//         pre = nullptr ; 
//     }
// }; 
// int main(){
//     int arr[] = {1,2,3,4,5} ; 
//     node *head  = new node(arr[0]) ; 
//     node *temp = head ; 
//     for(int i = 1 ; i<5 ; i++){
//         temp->next = new node(arr[i]) ; 
//         temp->next->pre = temp ; 
//         temp = temp->next ; 
//     }
//     // delete 
//     if(head != nullptr){
//         node *tail = head ; 
//         head = head->next ; 
//         delete tail ; 
//         if(head)
//         head->pre = nullptr ; 
//     }
//     // print 
//     temp = head ; 
//     while(temp) {
//         cout<<temp->data<<" "; 
//         temp = temp->next ; 
//     }
//     return 0 ; 
// }

    

//delete at end 
// #include<iostream>
// using namespace std ; 
// class node {
//     public:
//     int data ; 
//     node *next ; 
//     node *pre ; 
//     node(int value){ 
//         data = value ; 
//         next = nullptr ; 
//         pre = nullptr ; 
//     }
// }; 
// int main(){
//     int arr[] = {1,2,3,4,5} ; 
//     node *head  = new node(arr[0]) ; 
//     node *temp = head ; 
//     for(int i = 1 ; i<5 ; i++){
//         temp->next = new node(arr[i]) ; 
//         temp->next->pre = temp ; 
//         temp = temp->next ; 
//     }
//     // delete 
//     if(head != nullptr){
//         if(head->next == nullptr){
//             delete head ; 
//             head = nullptr ; 
//         }
//         else{
//             node *curr = head ; 
//             while(curr->next){
//                 curr = curr->next ; 
//             }
//             curr->pre->next = nullptr ; 
//             delete curr ; 
//         }
//     }
//     //print 
//     temp = head ; 
//     while(temp) {
//         cout<<temp->data<<" "; 
//         temp = temp->next ; 
//     }
//     return 0 ; 
// }

 

//delete at position 
// #include<iostream>
// using namespace std ; 
// class node {
//     public:
//     int data ; 
//     node *next ; 
//     node *pre ; 
//     node(int value){ 
//         data = value ; 
//         next = nullptr ; 
//         pre = nullptr ; 
//     }
// }; 
// int main(){
//     int arr[] = {1,2,3,4,5} ; 
//     node *head  = new node(arr[0]) ; 
//     node *temp = head ; 
//     for(int i = 1 ; i<5 ; i++){
//         temp->next = new node(arr[i]) ; 
//         temp->next->pre = temp ; 
//         temp = temp->next ; 
//     }
//     //delete 
//     int pre = 5; 
//     //delete at start 
//     if(pre == 1){
//         if(head->next == nullptr){
//             delete head ; 
//             head = nullptr ; 
//         }
//         else{
//             node *temp = head ; 
//             head = head->next ; 
//             delete temp ; 
//             head->pre = nullptr ; 
//         }
//     }
//     else{
//         node *curr = head ; 
//         while(--pre) 
//         curr = curr->next ; 

//     //delete at end 

//     if(curr->next == nullptr){
//         curr->pre->next = nullptr ; 
//         delete curr ; 
//     }
//     else{
//     curr->pre->next = curr->next ; 
//     curr->next->pre = curr->pre ; 
//     delete curr ; 
// }
//     }
// //delete at middle
//     //print 
//     temp = head ; 
//     while(temp){
//         cout<<temp->data<<" ";
//         temp = temp->next ;  
//     }
// }
