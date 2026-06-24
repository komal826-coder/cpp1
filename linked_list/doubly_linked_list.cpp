// doubly linked list 
// insertion , deletion , searching => start , end , any point 
 

// #include<iostream>
// using namespace std ; 
// class node{
//     public :
//     int data ; 
//     node *next ; 
//     node *pre ; 

//     node(int value){ 
//         data = value ; 
//         next = nullptr ; 
//         pre = nullptr ; 
//     }
// } ;
// int main(){
// int arr[] = {1,2,3,4} ; 
// node *head = new node(arr[0]) ; 
// node *temp = head ; 
// for(int i = 1 ; i<4 ; i++){
//     temp->next = new node(arr[i]) ; 
//     temp->next->pre = temp ; 
//     temp = temp->next ; 
// }
// if(head == nullptr) {
//     head = new node(5) ; 
// }
// else{
// node *tail = new node(5) ; 
// tail->next = head ; 
// head->pre = tail ; 
// head = tail; 
// }
// //print 
// temp = head ; 
// while(temp){
//     cout<<temp->data ; 
//     temp = temp->next ; 
// }
// return 0 ; 
// }


// insert at end 
// #include<iostream>
// using namespace std ; 
// class node{
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
// int arr[] = {1,2,3,4,5,6} ;   
// node *head = new node(arr[0]) ; 
// node *temp = head ; 
// for(int i = 1 ; i<6 ; i++){
//     temp->next = new node(arr[i]);
//     temp->next->pre = temp ;
//     temp = temp->next ; 
// } 
// //exist
// if(head->next == nullptr && head->pre == nullptr){
//     head = new node(5) ; 
// }
// //not exist
// else{
// node *curr = head ; 
// while(curr->next != nullptr) {
//     curr = curr->next ; 
// }
// node *tail = new node(5) ; 
// curr->next = tail; 
// tail->pre = curr ; 
// }
// //print
// temp = head ; 
// while(temp){
//     cout<<temp->data ; 
//     temp = temp->next ; 
// }
// return 0 ; 
// }


// #include<iostream>
// using namespace std ; 
// class node{
//     public : 
//     int data  ; 
//     node *next ; 
//     node *pre ; 

// node(int value){
//     data = value ; 
//     next = nullptr ; 
//     pre = nullptr ; 
// }
// } ;
// int main(){
// int arr[] = {1,2,3,4,5,6} ; 
// node *head , *tail ; 
// tail = head = nullptr ; 
// for(int i = 0 ; i<6 ; i++){
//     if(head == nullptr){
//         head = new node(arr[i]) ; 
//         tail = head ; 
//     }
//     else{
//         node *temp = new node(arr[i]) ; 
//         tail->next = temp ; 
//         temp->pre = tail ; 
//         tail = temp ; 
//     }
// }
// node *trav = head ; 
// while(trav){
//     cout<<trav->data<<" " ; 
//     trav = trav->next ; 
// }
// }


//create helps to recursion 
// #include<iostream>
// using namespace std ; 
// class node{
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
// node *createdll(int arr[] , int index , int size , node *back){
//     if(index == size) 
//     return nullptr ; 

//     node *temp = new node(arr[index]) ; 
//     temp->pre = back ; 
//     temp->next = createdll(arr , index+1 , size , temp) ;
//     cout<<temp->data  ;   
// }
// int main(){
//     int arr[] = {1,2,3,4,5} ; 
//     node *head = nullptr ; 
//     head = createdll(arr,0,5,nullptr) ; 
// }


// #include<iostream>
// using namespace std ; 
// class node {
//     public:
//     int data ; 
//     node *next; 
//     node *pre ; 

//     node(int value){
//         data = value ; 
//         next = nullptr ; 
//         pre = nullptr ; 
//     }
// };
// int main(){
//     int arr[] = {1,2,3,4,5,6,7}  ; 
//     node *head = new node(arr[0]) ; 
//     node *tail = head ; 
//     for(int i = 1; i<7 ; i++){
//         tail->next = new node(arr[i]) ; 
//         tail->next->pre = tail ; 
//         tail = tail->next ; 
//     }
//     //insert at any given position 

//     node *curr = head ; 
//     int pos = 6 ; 
//     // insert at start 
//     if(pos == 0){
//         // not exist linked list 
//         if(head == nullptr){
//             head = new node(5) ; 
//         }
//         else{
//             node *temp = new node(5) ; 
//             temp->next = head ; 
//             head->pre = temp ; 
//             head = temp ; 
//         }
//         //exist kre 
//     }
//     // insert at middle 
//     else{

//     while(--pos){
//         curr = curr->next ; 
//     };
//     //insert at end
//         if(curr->next == nullptr){
//             node *temp = new node(5) ; 
//             temp->pre = curr ; 
//             curr->next = temp ; 
//         }
//         else{
//         node *temp = new node(5) ; 
//         temp->next = curr->next ; 
//         temp->pre = curr ; 
//         curr->next = temp ; 
//         temp->next->pre = temp ; 
//         }
//     }
//     //print 
//     tail = head ; 
//     while(tail){
//         cout<<tail->data<<" "; 
//         tail = tail->next ; 
//     }
//  return 0 ; 
// }