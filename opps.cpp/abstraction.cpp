//abstraction => displaying only essential information & hiding the details 
// #include<iostream>
// using namespace std ; 
// class customer{
//     string name ; 
//     int balance ; 
//     public:
//     customer(string n , int b) {
//         name = n ; 
//         balance = b ; 
//     }
//     void deposit(int amount ){
//         if(amount>0) {
//             balance += amount ; 
//         }
//     }
//     void display(){
//         cout<<name<<" "<<balance<<endl ; 
//     }
// };
// int main(){
//     customer A1("komal" , 500) ; 
//     A1.deposit(500) ; 
//     A1.display() ; 
// }