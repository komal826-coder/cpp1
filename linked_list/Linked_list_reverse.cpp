//reverse of linked list 

// #include<iostream>
// #include<vector>
// using namespace std ; 
// class node{
//     public:
//     int value ; 
//     node *next ; 
//     node(int data) {
//         value = data ; 
//         next = nullptr ; 
//     }
// } ; 
// void printList(node *head){
//     node *temp = head ; 
//     while(temp){
//         cout<<temp->value<<" "; 
//         temp = temp->next ; 
//     }
//     cout<<endl ; 
// }
// int main(){
// vector<int>ans ; 
// node *head = new node(1) ; 
// head->next = new node(2) ; 
// head->next->next = new node(3) ; 
// head->next->next->next = new node(4) ; 
// head->next->next->next->next = new node(5) ; 

// node *temp = head ; 
// while(temp != nullptr){
//     ans.push_back(temp->value) ; 
//     temp = temp->next ; 
// }
// int i = ans.size()-1 ; 
// temp = head ; 
// while(temp){
//     temp->value = ans[i] ; 
//     i-- ; 
//     temp = temp->next ; 
// }
// printList(head) ;
// }



 // reverse with address 
//  #include<iostream>
//  using namespace std ; 
//  class node {
//     public:
//     int data ; 
//     node *next ; 
//     node(int value) {
//         data = value ; 
//         next = nullptr ; 
//     }
//  } ; 
//  int main(){
//     node *head = new node(1) ; 
//     head->next = new node(2) ; 
//     head->next->next = new node(3) ; 
//     head->next->next->next =    new node(4) ; 
//     head->next->next->next->next = new node(5) ; 

//     node *curr = head ; 
//     node *prev = nullptr ; 
//     node *futu = nullptr ; 
//     while(curr){
//         futu = curr->next ; 
//         curr->next = prev ; 
//         prev = curr ; 
//         curr = futu;  
//     }
//     head = prev ; 
//     //print 
//     node *temp = head ;
//     while(temp){
//         cout<<temp->data<<" " ; 
//         temp = temp->next ; 
//     }
//  }


// reverse with help to recursion 
// #include<iostream>
// using namespace std ; 
// class node{
//     public : 
//     int data ; 
//     node *next ; 

//     node(int value){
//         data = value ; 
//         next = nullptr ; 
//     }
// } ; 
// node *reverse(node *curr , node *pre ) {
//     if(curr == nullptr )
//     return pre ; 

//     node *fut = curr->next ; 
//     curr->next = pre ; 
//     return reverse(fut , curr) ; 
// }
// int main(){
//     node *head ; 
//     head = new node(1) ; 
//     head->next = new node(2) ; 
//     head->next->next = new node(3) ; 
//     head->next->next->next = new node(4) ; 
//     head->next->next->next->next = new node(5) ; 

//     head = reverse(head , nullptr)  ;
    
//     //print 
//     node *temp  = head ; 
//     while(temp != nullptr ){
//         cout<<temp->data; 
//         temp = temp->next ; 
//     }
// }


//middle of linked list 
// #include<iostream>
// using namespace std ; 
// class node{
//     public:
//     int data ; 
//     node *next ; 

//     node(int value) {
//         data = value ; 
//         next = nullptr ; 
//     }
// }; 

// int main(){
//     int count = 0 ;  
//     node *head = new node(1) ; 
//     head->next = new node(2) ; 
//     head->next->next = new node(3) ; 
//     head->next->next->next = new node(4) ; 
//     head->next->next->next->next = new node(5) ; 

//     node *temp = head ; 
//     while(temp != nullptr) {
//         count++ ; 
//         temp = temp->next ; 
//     }

//     count /= 2 ; 
//     temp = head ; 
//     while(count--) {
//         temp = temp->next ; 
//     }
//     cout<<temp->data ; 

// }


// //slow pointer and faster pointer 
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
// } ; 
// int main(){
//     node *head = new node(1) ; 
//     head->next = new node(2) ;  
//     head->next->next = new node(3) ; 
//     head->next->next->next = new node(4) ; 
//     head->next->next->next->next = new node(5) ; 

//      node *slow = head ; 
//      node *fast = head ; 

//     while(fast != nullptr && fast->next != nullptr) {
//         slow = slow->next ; 
//         fast = fast->next->next ; 
//     }

//     cout<<slow->data ; 
// }