// linked list 
// insertion , deletion , update , searching  => start , end , middle  
// data | address 
// node 



// #include<iostream>
// using namespace std ; 

// class node{
//     public:
//     int data  ;
//     node *next ; 

//     node(int value){
//         data = value ; 
//         next = nullptr; 
//     }
// };
// int main(){
//     node *head ; 
//     head = new node(4) ; 

//     cout<<head->data<<endl ; 
//     cout<<head->next<<endl ; 

//     int arr[]= {2,4,6,8,10} ; 

//     //insert the node at beginning 
//     for(int i = 0 ; i<5 ; i++) 
//     {
//         //linked list doesnot exist 
//         if(head == nullptr){
//             head = new node(arr[i]) ; 
//         } 
//         //linked list exist karti 
//         else{
//             node *temp ; 
//             temp = new node(arr[i]) ; 
//             temp->next = head ; 
//             head = temp ; 
//         }
//     }
//     //print the value 
//     node *temp = head ; 
//     while(temp != nullptr ){
//         cout<<temp->data<<" "; 
//         temp = temp->next ; 
//     } ;
// }


//insert the value at end 
// #include<iostream>
// using namespace std ; 
// class node {
//     public:
//     int data ; 
//     node *next;

//     node(int value ) {
//         data = value ; 
//         next = nullptr ; 
//     }
// } ; 
// int main(){
//     node *head , *tail  ; 
//     head = nullptr ;
//     tail = nullptr ; 
//     int arr[] = { 2,4,6,8,10} ; 
//     for(int i = 0 ; i<5; i++){
//     //linked list is empty 
//     if(head == nullptr) {
//         head = new node(arr[i]) ; 
//         tail = head ; 
//     }
//     else{
//         tail->next = new node(arr[i]) ; 
//         tail = tail->next ; 
//     }
// }
// node *temp ;
// temp = head ; 
// while(temp) {
//     cout<<temp->data<<" " ;
//     temp  = temp->next ; 
// }
// }



//create linked list helps to recursion 
//add at end
//time complexity =o(n)
//space complexity = o(n) 
// #include<iostream>
// using namespace std ; 
// class node{
//     public:
//     int data ; 
//     node *next ; 

//     node(int value){
//         data = value ; 
//     }
// };
// node* createLinkedlist(int arr[] , int index , int size) {
//     if(index == size) {
//         return nullptr ; 
//     }
//     node *temp ;
//     temp = new node(arr[index]) ; 
//     temp->next = createLinkedlist(arr , index+1 , size) ; 
//     return temp ; 
// }
// void printlist(node *head) {
//     while(head != nullptr){
//         cout<<head->data<<" " ;  
//         head = head->next ; 
//     }
// }
// int main(){
//     node *head;
//     head = nullptr ; 
//     int arr[] = { 2,4,6,8,10} ; 
//     head = createLinkedlist(arr,0,5) ;

//     printlist(head) ; 

// }


// #include<iostream>
// using namespace std ; 
// class node {
//     public:
//     int data ; 
//     node *next ; 

//     node(int value){
//         data = value ; 
//         next = nullptr ;
//     }
// };
// node *createLinkedlist(int arr[] , int index , int size , node *prev ){
//     if(index == size) {
//         return prev ;  
//     }
//     node *temp ; 
//     temp = new node(arr[index]) ;
//     temp->next = prev ; 
//     return createLinkedlist(arr , index+1 , size, temp) ; 
// }
// int main(){
//     node *head ; 
//     head = nullptr ; 
//     int arr[] = { 2,4,6,8,10} ; 
//     head = createLinkedlist(arr,0 , 5 , head) ;

//     // insert node at perticuler position 
//     int x = 3 ; //positiojn 
//     int value = 30 ; 
//     node *temp = head ; 
//     x-- ; 
//     while(x--){
//         temp = temp->next ; 
//     };
//     node *temp2 = new node(value) ; 
//     temp2->next = temp->next ; 
//     temp->next = temp2 ; 

//     //print the value 
//     temp = head ; 
//     while(temp){
//         cout<<temp->data<<" ";
//         temp = temp->next ; 
//     }
// }


