// remove  a nth poinnt 
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
// int main(){
//     int count = 0 ; 
//     int n ; 
//     cout<<"ebter n:" ; 
//     cin>>n ; 
//     node *head = new node(1) ; 
//     head->next = new node(2) ; 
//     head->next->next = new node(3) ; 
//     head->next->next->next = new node(4) ; 
//     head->next->next->next->next = new node(5) ; 

//     node *temp = head ; 
//     while(temp){
//         count++ ; 
//         temp = temp->next ; 
//     } ;
//     count -= n ;
//     if(count == 0) {
//         node *temp = head ; 
//         head = head->next ; 
//         delete temp ; 
//         //print 
//         node *tep = head ; 
//         while(tep){
//         cout<<tep->data ; 
//         tep = tep->next ;  
//         }
//     }
//     node *curr = head ; 
//     node *prev = nullptr ; 
//     while(count--){
//         prev = curr ; 
//         curr = curr->next ; 
//     }; 
//     prev->next = curr->next ; 
//     delete curr ; 
    
//     //print 
//     node *tep ; 
//     tep = head ; 
//     while(tep){
//     cout<<tep->data ; 
//     tep = tep->next ; 
//     }

// }


//remove every kth node 
// #include<iostream>
// using namespace std ; 
// class node{
//     public:
//     int data ; 
//     node *next; 

//     node(int value) {
//         data = value ; 
//         next = nullptr ; 
//     }
// } ; 
// int main(){
//     int arr[] = { 1,2,3,4,5,6,7,8,9,10} ; 
//     node *head = new node(arr[0]) ; 

//     node *temp = head ; 
//     for(int i = 0 ; i<10 ; i++){
//         temp->next = new node(arr[i]) ; 
//         temp = temp->next ; 
//     }
//     node *curr = head , *prev = nullptr ; 
//     int count = 1 ; 
//     int k = 3 ; 
//     if(k == 1){
//         cout<<"nullptr" ; 
//     }
//     while(curr) {
//         if(count == k ) {
//             prev->next = curr->next ; 
//             delete curr ; 
//             curr = prev->next ; 
//             count = 1 ; 
//         }
//         else{
//             prev = curr ; 
//             curr = curr->next ; 
//             count++ ; 
//         }
//     }
//     //print
//     temp = head ; 
//     while(temp){
//         cout<<temp->data<<" "; 
//         temp = temp->next ; 
//     }
// }


// rotate list 
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
// int main(){
// int arr[] = {1,2,3,4,5,6,7,8,9} ; 
// node *head = new node(arr[0]) ; 
// node *tel = head ; 
// for(int i = 1 ; i<9 ; i++){
//     tel->next = new node(arr[i]) ; 
//     tel = tel->next  ; 
// }
// int count = 0 ; 
// int k = 4 ;  
// node *temp = head ; 
// if(head->next == nullptr){
//     cout<<head->data ; 
//     return 0 ; 
// }
// while(temp){
//     count++ ; 
//     temp = temp->next ; 
// }
//     k = k%count ; 
//     if(k == 0){
//         temp = head ; 
//         while(temp){
//             cout<<temp->data<<" "; 
//             temp = temp->next ; 
//         }
//         return 0 ; 
// }
// count -= k ; 
// node *curr = head ; 
// node *prev = nullptr ; 
// while(count--){
//     prev = curr ; 
//     curr = curr->next ; 
// }
// prev->next = nullptr ; 
// node *tail = curr ; 
// while(tail->next != nullptr){
//     tail = tail->next ; 
// }
// tail->next = head ; 
// head = curr ; 
// //print 
// temp = head ; 
// while(temp){
//     cout<<temp->data<<" ";
//     temp = temp->next ; 
// }
// return 0 ; 
// }

//check palindrome 
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
// int main(){
// int arr[] = {1,2,3,3,2,1} ; 
// node *head = new node(arr[0]) ; 
// node *tel = head ; 
// for(int i = 1 ; i<6 ; i++){
// tel->next = new node(arr[i]) ; 
// tel = tel->next ; 
// }
// node *temp = head ; 
// if(head->next == nullptr){
//     cout<<"yes" ; 
//     return 0 ;
// }
// int count = 0 ; 
// while(temp){
//     count++ ; 
//     temp = temp->next ; 
// }
// count /= 2 ; 
// node *curr = head , *prev = nullptr ; 
// while(count--){
//     prev = curr ; 
//     curr =   curr->next ; 
// }
// prev->next = nullptr ; 
// node *front = nullptr ; 
// prev = nullptr ; 
// while(curr){
//     front = curr->next ; 
//     curr->next = prev ; 
//     prev = curr ; 
//     curr = front ; 
// }
// node *head1 = head ; 
// node *head2 = prev ; 

// bool flag = true ; 

// while(head1 && head2){
//     if(head1->data != head2->data){
//         flag = false ; 
//         break;
//     }

//     head1 = head1->next ; 
//     head2 = head2->next ; 
// }
//    if(flag)
//     cout<<"yes" ;
//    else{
//     cout<<"not" ; 
//    }
// }


 