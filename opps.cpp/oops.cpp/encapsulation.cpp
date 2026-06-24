//ENCAPSULATION =>  wrapping of a data & information in a single umit while controling access to them 
// #include<iostream>
// using namespace std ; 
// class customer { //not direct access so no use public 
//     string name ; 
//     int balance ; 
//     int age ; 

//     public:
//     customer(string a , int b , int c ) {
//         name = a ; 
//         balance = b ; 
//         age = c ; 
//     }
//     void deposit(int amount){
//         if(amount>0){
//             balance += amount ; 
//         }
//         else{
//             cout<<"invalid amount" ;
//         }
//     }
//     void display(){
//         cout<<name<<" "<<balance<<" "<<age<<endl ; 
//     }
//     void updateage(int age){
//         if(age>0&&age<100){
//             this->age = age ; 
//         }
//     }

// };
// int main(){
//     customer A1("komal" , 2000 , 20) ;
//     A1.updateage(24) ; 
//     A1.deposit(100) ; 
//     A1.display() ; 
// }