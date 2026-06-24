//DESTUCTER  => 
// #include<iostream>
// using namespace std ; 
// class customer {
//     public:
//     string name ; 
//     int *data ; 
//     public: 
//     customer(){
//         name = "komal" ;
//         data = new int ;
//         *data = 10 ; 
//         cout<<"constructer is called\n" ; 
//     }
//     //destucter => only one time create 
//     ~customer(){
//         delete data ; 
//         cout<<"destructer is called\n"; 
//     }
// };
// int main(){
//     customer a1 ;
// }


// #include<iostream>
// using namespace std ; 
// class customer {
//     public:
//     string name ; 
//     int *data ; 
//     public: 
//     //constructer => order wisw 
//     customer(string name){
//         this->name = name ; 
//         cout<<name<<endl ; 
//     }
//     //destucter => only one time create  // reverse order 
//     ~customer(){
//         cout<<name<<endl ;  
//     }
// };
// int main(){
//     customer a1("1"),a2("2"),a3("3");
// }



// #include<iostream>
// using namespace std ; 
// class customer {
//     public:
//     string name ; 
//     int *data ; 
//     public: 
//     //constructer => order wisw 
//     customer(){
//         name = "4" ;
//         cout<<"constructer call\n" ;
//     }
//     customer(string name){
//         this->name = name ; 
//         cout<<name<<endl ; 
//     }
//     //destucter => only one time create  // reverse order 
//     ~customer(){
//         cout<<name<<endl ;  
//     }
// };
// int main(){
//     customer a1("1"),a2("2"),a3("3");
//     //dynamic 
//     customer *a4 = new customer ; 
//     delete a4 ; 
// }

 