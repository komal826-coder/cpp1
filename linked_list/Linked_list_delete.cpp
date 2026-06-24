//delete a node at starting 

// #include<iostream>
// using namespace std ; 
// class node{
//     public:
//     int data ; 
//     node *next ; 

//     node(int value){
//         data = value ; 
//         next = nullptr ; 
//     }
// };
// node *createLinkedlist(int arr[] , int index , int size){
//     if(index == size){
//         return nullptr; 
//     }
//     node *temp = new node(arr[index]) ; 
//     temp->next = createLinkedlist(arr,index+1,size); 
//     return temp ; 
// }
// int main(){
//     node *head ; 
//     head = nullptr ;  
//     int arr[] = {2,4,6,8,10} ; 

//     head = createLinkedlist(arr,0,5) ; 

//     //delete a node at start 

//     if(head != nullptr) {
//         node *temp = head ; 
//         head = head->next ; 
//         delete temp ; 
//     }
//     //print linked list 
//     node *temp ; 
//     temp = head ; 
//     while(temp){
//         cout<<temp->data<<" ";
//         temp= temp->next ; 
//     }
// }  


//delete at end 

// #include<iostream>
// using namespace std ; 
// class node{
//     public:
//     int data ; 
//     node *next ; 

//     node(int value){
//         data = value ; 
//         next = nullptr ; 
//     }
// };
// node *createLinkedlist(int arr[] , int index , int size){
//     if(index == size){
//         return nullptr; 
//     }
//     node *temp = new node(arr[index]) ; 
//     temp->next = createLinkedlist(arr,index+1,size); 
//     return temp ; 
// }
// int main(){
//     node *head ; 
//     head = nullptr ;  
//     int arr[] = {2,4,6,8,10} ; 

//     head = createLinkedlist(arr,0,5) ; 

//     //delete a node at start 

//     if(head != nullptr) {
//         if(head->next = nullptr){
//         node *temp = head ; 
//         head = nullptr ;
//          delete temp ;  
//     }
//     else{
//         node *curr = head ; 
//         node *prev ;
//         while(curr->next != nullptr){
//             prev = curr ; 
//             curr = curr->next  ;
//         }
//         delete curr ;  
//         prev->next = nullptr ;  
//         } 
//     }
//     //print linked list 
//     node *temp ; 
//     temp = head ; 
//     while(temp){
//         cout<<temp->data<<" ";
//         temp= temp->next ; 
//     }
// }  


// delete a node at a point 
// #include<iostream>
// using namespace std ; 
// class node{
//     public:
//     int data ; 
//     node *next ; 

//     node(int value){
//         data = value ; 
//         next = nullptr ; 
//     }
// };
// node *createLinkedlist(int arr[] , int index , int size){
//     if(index == size){
//         return nullptr; 
//     }
//     node *temp = new node(arr[index]) ; 
//     temp->next = createLinkedlist(arr,index+1,size); 
//     return temp ; 
// }
// int main(){
//     node *head ; 
//     head = nullptr ;  
//     int arr[] = {2,4,6,8,10} ; 

//     head = createLinkedlist(arr,0,5) ; 

//     //delete a node at start 

//     int x = 3 ; 
//     if(x == 1){
//         node*temp = head ; 
//         head = head->next ; 
//         delete temp ; 
//     }
//     else{
//         node *curr = head ; 
//         node *prev = nullptr ; 
//         x-- ; 
//         while(x--){
//             prev = curr ; 
//             curr = curr->next  ; 
//         }
//         prev->next =  curr->next ; 
//         delete curr ; 
//     }
//     //print linked list 
//     node *temp ; 
//     temp = head ; 
//     while(temp){
//         cout<<temp->data<<" ";
//         temp= temp->next ; 
//     }
// }  


//helps to recursion 
// #include<iostream>
// using namespace std ; 
// class node{
//     public:
//     int data ; 
//     node *next ; 

//     node(int value){
//         data = value ; 
//         next = nullptr ; 
//     }
// };
// node *createLinkedlist(int arr[] , int index , int size){
//     if(index == size){
//         return nullptr; 
//     }
//     node *temp = new node(arr[index]) ; 
//     temp->next = createLinkedlist(arr,index+1,size); 
//     return temp ; 
// }
// node *deletenode(node *curr , int x) {
//     if(x ==1){
//         node *temp1 = curr->next ; 
//         delete curr ; 
//         return temp1 ; 
//     }
//     curr->next = deletenode (curr->next , x-1) ; 
//     return curr ; 
// }
 
// int main(){
//     node *head ; 
//     head = nullptr ;  
//     int arr[] = {2,4,6,8,10} ; 
    
//     head = createLinkedlist(arr,0,5) ; 
//     int x = 3 ; 
//     node *curr = head; 
//     head = deletenode(curr , x  ) ; 
    
//     //print linked list 
//     node *temp ; 
//     temp = head ; 
//     while(temp){
//         cout<<temp->data<<" ";
//         temp= temp->next ; 
//     }
//}  


//random delete without head pointer except last node 
// #include<iostream>
// using namespace std ; 
// class node{
//     public:
//     int data ; 
//     node *next ; 

//     node(int value){
//         data = value ; 
//         next = nullptr ; 
//     }
// };
// node *createLinkedlist(int arr[] , int index , int size){
//     if(index == size){
//         return nullptr; 
//     }
//     node *temp = new node(arr[index]) ; 
//     temp->next = createLinkedlist(arr,index+1,size); 
//     return temp ; 
// }
// int main(){
//     node *head ; 
//     head = nullptr ;  
//     int arr[] = {2,4,6,8,10} ; 
    
//     head = createLinkedlist(arr,0,5) ; 
//     node *curr = head->next  ; 
//     node *temp1 = curr->next ; 
//     curr->data = temp1->data ; 
//     curr->next = temp1->next ; 
//     delete temp1 ; 
    
//     //print linked list 
//     node *temp ; 
//     temp = head ; 
//     while(temp){
//         cout<<temp->data<<" ";
//         temp= temp->next ; 
//     }
// }  