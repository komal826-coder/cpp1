// constructer => invoked automatically , same as class name , no any return type 
// constucter used => input and check resources or not avilable resources then code is stop 
// #include<iostream>
// using namespace std ;
// class customer {
//     public : 
//     string name ; 
//     int account_no ; 
//     int balance ; 
//    //// default constructer 
//     customer(){
//         cout<<"value print " ;
//     }
    ////default constructer
    // public:
    // customer(){
    //     name = "A" ; 
    //     account_no = 66; 
    //     balance = 8000 ; 
    // }
    // void display(){
    //     cout<<name<<" "<<account_no<<" "<<balance<<endl ; 
    // }
    //parameterized constructer 
//     customer(string a , int b , int c) {
//         name = a ; 
//         account_no = b ;  
//         balance = c ;
//     }
//     void display(){
//         cout<<name<<" "<<account_no<<" "<<balance<<endl ; 
//     }
//     // constructer overloading 
//     customer(string a , int b) {
//         name = a ; 
//         account_no = b ; 
//     }
//     //
//     customer(string name , int account_no , int balance) {
//         this->name = name ; 
//         this->account_no = account_no ;
//         this->balance = balance ; 
//     }
//     //inline constructer 
//     inline customer (string a , int b , int c ): name(a) ,account_no(b) , balance(c) ;
// };
// int main(){
//     customer a1("komal" , 45 , 900) ; 
//     a1.display(); 
//     customer a2("kittu" , 56);
//     a2.display() ;
//     customer a() ;  
// }



// //copy constucter 
// #include<iostream>
// #include<string>
// using namespace std ; 
// class customer {
// public:
//     string name ;
//     int balance ;
//     int id ; 
//     customer(){
//         name = "kritika" ; 
//         balance = 0 ; 
//         id = 103 ; 
//     }
//     customer(string a , int b , int c){
//         name = a ; 
//         balance = b ; 
//         id = c ; 
//     }
// //copy constructer 
//     customer(customer &B ){
//         name = B.name ; 
//         balance = B.balance ; 
//         id = B.id ; 
//     }
//     void display() {
//         cout<<name<<" "<<balance<<" "<<id<<endl ; 
//     }
// } ; 
// int main(){
//     customer A1 ("kittu" , 67 , 5) ; 
//     customer A2(A1);        //copy constructer 
//     A2.display();
//     A1.display() ; 
//     customer A5 ;         // default constructer 
//     A5 = A1 ; 
//     A5.display() ; 
//     return 0 ; 
// }