//static data member => attribute of class and object , define as static keyword
// only one copy of that member is created for the entire class & shared by all the object  
// #include<iostream>
// using namespace std ; 
// class customer 
// {   public:
//     string name ;
//     int balance ;
//     int acc_no ; 
//     static int total_account ;  // static data member   // class ka part // same for all 

//     public:
//     customer(string a , int b , int c){
//         name = a ; 
//         acc_no = b ; 
//         balance = c ; 
//         total_account++; 
//     }
//     void display(){
//         cout<<name<<" "<<acc_no<<" "<<balance<<" "<<total_account<<endl ; 
//     }
// };

// int customer::total_account = 0 ; 
// int main(){
//     customer A1 ("komak" , 45678 , 1000);
//     customer A2 ("kittu" , 34567 , 2000) ; 
//     A1.display() ; 
//     A2.display() ; 
//     customer A3 ("goyal" , 12345 , 4000) ; 
//     A3.display(); 
// }

// #include<iostream>
// using namespace std ; 
// class customer 
// {   
//     string name ;
//     int balance ;
//     int acc_no ; 
//     public:
//     static int total_account ;  // static data member   // class ka part // same for all 

//     public:
//     customer(string a , int b , int c){
//         name = a ; 
//         acc_no = b ; 
//         balance = c ; 
//         total_account++; 
//     }
//     void display(){
//         cout<<name<<" "<<acc_no<<" "<<balance<<" "<<total_account<<endl ; 
//     }
// };

// int customer::total_account = 0 ; 
// int main(){
//     customer A1 ("komak" , 45678 , 1000);
//     customer A2 ("kittu" , 34567 , 2000) ; 
//     customer A3 ("goyal" , 12345 , 4000) ; 
//     customer::total_account = 6 ; 
//     A1.display() ; 
// }


//static member function 
// #include<iostream>
// using namespace std ; 
// class customer 
// {   
//     string name ;
//     int balance ;
//     int acc_no ; 
//     static int total_account ;  // static data member   // class ka part // same for all 
//     static int total_balance ; 

//     public:
//     customer(string a , int b , int c){
//         name = a ; 
//         acc_no = b ; 
//         balance = c ; 
//         total_account++; 
//         total_balance += balance ;
        
//     }

//     static void acceStatic(){         //static member function  //common for all 
//         cout<<total_account<<endl ;
//         cout<<total_balance<<endl ; 
//     }
//     void deposit(int amount) {
//         if(amount>0) {
//             balance += amount ; 
//             total_balance += amount ; 
//         }
//     }
//     void withdraw(int amount){
//         if(amount<=balance && amount>0){
//             balance = amount ; 
//             total_balance -= amount ; 
//         }
//     }
//     void display(){
//         cout<<name<<" "<<acc_no<<" "<<balance<<" "<<total_account<<endl ; 
//     }
// };

// int customer::total_account = 0 ; 
// int customer::total_balance = 0 ; 

// int main(){
//     customer A1 ("komak" , 45678 , 1000);
//     customer A2 ("kittu" , 34567 , 2000) ; 
//     customer A3 ("goyal" , 12345 , 4000) ; 
//     //customer::display()  => not access so use static member function 
//     customer::acceStatic();

//     A1.display(); 
//     A2.withdraw(500) ;
//     customer::acceStatic() ; 
// } 



// const keyword 