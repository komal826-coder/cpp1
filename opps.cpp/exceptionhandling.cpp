//exception handling => run time error 
//try catch throw 
// #include<iostream>
// using namespace std ; 
// class customer{
//     string name;
//     int balance,amount ; 
//     public:
//     customer(string name , int balance , int amount){
//         this->name = name ; 
//         this->balance = balance ; 
//         this->amount = amount ; 
//     }
//     //deposit 
//     void deposit(int amount){
//         if(amount<=0){
//             balance += amount ;
//             cout<<amount<<" is created successful"<<endl ; 
//         }
//         else{
//             throw "your amount less than 0" ;
//         }
//     }
//     //withdraw
//     void withdraw(int amount){
//         if(amount>0 && amount<= balance){
//             balance -= amount;
//             cout<<amount<<" is debited successful"<<endl ; 
//         }
//         else if(amount<0){
//             throw "amount shoud be greater than 0" ; 
//         }
//         else{
//             throw "your baalnce is low " ; 
//         }
//     }
//     void display(){
//         cout<<name<<" "<<balance<<" "<<amount<<endl ; 
//     }
// };
// int main(){
//     try{
//      customer c1 ("komal" , 5000 , 10) ; 
//      c1.deposit(100) ; 
//      c1.display();
//      c1.withdraw(2000);
//     }
//     catch(const char *e){
//         cout<<"exception occured:"<<endl; 
//     }
// }


// #include<iostream>
// using namespace std ; 
// int main(){
//     int a , b ; 
//     cin>>a>>b  ; 
//     try{
//     if(b == 0) 
//     throw "divide by 0 is not possible " ; 
//     int c = a/b ;
//     cout<<c<<endl ;  
//     }
//     catch(const char *e){
//         cout<<"exception occured:"<<e<<endl ; 
//     }
// }

//exception classs 

// std:bad_alloc
// std:bad_cast 
// std:bad_typeid
// std:bad_exception
// std:logic_failure => std:domain_errror
//                     std:invalid_argument 
//                     std:length_error 
//                     std:out_of_range 
// std:runtime_error => std:overflow_error
//                     std:range_error 
//                     std:underflow_error 

// #include<iostream>
// #include<exception>
// using namespace std ; 
// class exception {
//     protected :
//     string msg ; 

//     exception(string msg){
//         this->msg = msg ; 
//     }
//     string what(){
//         return msg ; 
//     }
// };
// int main(){
//     try{
//         int *p = new int[10000000000000000000] ;
//         cout<<"memory allocation is successfull \n" ;
//         delete []p ; 
//     }
//     catch(const bad_alloc &e) {
//         cout<<"exception occured due to line 87"<<e.what()<<endl ; 
//     }

// }
 

// #include<iostream>
// #include<exception>
// using namespace std ; 

// int main(){
//     try{
//         int *p = new int[10000000000000000000] ;
//         cout<<"memory allocation is successfull \n" ;
//         delete []p ; 
//     }
//     catch(const bad_alloc &e) {
//         cout<<"exception occured due to line 87"<<e.what()<<endl ; 
//     }

// }
 


// #include<iostream>
// #include<exception>
// using namespace std ; 
// class customer{
//     string name;
//     int balance,amount ; 
//     public:
//     customer(string name , int balance , int amount){
//         this->name = name ; 
//         this->balance = balance ; 
//         this->amount = amount ; 
//     }
//     //deposit 
//     void deposit(int amount){
//         if(amount<=0){
//             throw runtime_error("amount should be grater than 0");
//             balance += amount ;
//             cout<<amount<<"rs is creditedsuccessfuly \n" ;
//         } 
//     }
//     //withdraw
//     void withdraw(int amount){
//         if(amount>0 && amount<= balance){
//             balance -= amount;
//             cout<<amount<<" is debited successful"<<endl ; 
//         }
//         else if(amount<0){
//             throw runtime_error ("amount shoud be greater than 0") ; 
//         }
//         else{
//             throw runtime_error ("your baalnce is low ") ; 
//         }
//     }
//     void display(){
//         cout<<name<<" "<<balance<<" "<<amount<<endl ; 
//     }
// };
// int main(){
//     try{
//      customer c1 ("komal" , 5000 , 10) ; 
//      c1.deposit(100) ; 
//      c1.display();
//      c1.withdraw(2000);
//     }
//     catch(const runtime_error &e){
//         cout<<"exception occured:"<<e.what()<<endl; 
//     }
//     //default catch 
//     catch(...){
//         cout<<"exception occured"<<endl ; 
//     }
// }



// #include<iostream>
// #include<exception>
// using namespace std ; 
// class InvalidAmountError :public runtime_error 
// {
//     public:
//     InvalidAmountError(const string &msg):runtime_error(msg) 
//     {};
// };
// class InsufficientBalanceError :public runtime_error{
//     public:
//     InsufficientBalanceError(const string &msg): runtime_error(msg) 
//     {} ;
// };
// class customer{
//     string name;
//     int balance,amount ; 
//     public:
//     customer(string name , int balance , int amount){
//         this->name = name ; 
//         this->balance = balance ; 
//         this->amount = amount ; 
//     }
//     //deposit 
//     void deposit(int amount){
//         if(amount<=0){
//             throw runtime_error("amount should be grater than 0");
//             balance += amount ;
//             cout<<amount<<"rs is creditedsuccessfuly \n" ;
//         } 
//     }
//     //withdraw
//     void withdraw(int amount){
//         if(amount>0 && amount<= balance){
//             balance -= amount;
//             cout<<amount<<" is debited successful"<<endl ; 
//         }
//         else if(amount<0){
//             throw runtime_error ("amount shoud be greater than 0") ; 
//         }
//         else{
//             throw InsufficientBalanceError ("your baalnce is low ") ; 
//         }
//     }
//     void display(){
//         cout<<name<<" "<<balance<<" "<<amount<<endl ; 
//     }
// };
// int main(){
//     try{
//      customer c1 ("komal" , 5000 , 10) ; 
//      c1.deposit(100) ; 
//      c1.display();
//      c1.withdraw(2000);
//     }
//     catch(const InvalidAmountError &e){
//         cout<<"exception occured:"<<e.what()<<endl; 
//     }
//     catch(const InsufficientBalanceError &e) {
//         cout<<"exception occured:"<<e.what()<<endl ; 
//     }
//     //default catch 
//     catch(...){
//         cout<<"exception occured"<<endl ; 
//     }
// }
