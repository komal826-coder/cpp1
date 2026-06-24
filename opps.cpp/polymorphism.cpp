//polymorphism 
//compli time = function overloading , operator overloading 
//virtual function   


// //function overloading compile time 
// #include<iostream>
// using namespace std ; 
// class area{
//     public:
//     int calculatearea(int r){  //circle 
//         return 3.14*r*r ; 
//     }
//     int calculatearea(int l , int b) { //rectangle 
//         return l*b ; 
//     }
// };
// int main(){
//     area a1 ;
//     cout<<a1.calculatearea(4)<<endl ; 
//     cout<<a1.calculatearea(3,4)<<endl;
// }

//operator overloading 
// dont overload operatoe function => . .* :: ?: sizeof
// #include<iostream>
// using namespace std ; 
// class complex {
//     int real , img ; 
//     public:
//     complex(int real , int img){
//         this->img = img ; 
//         this->real = real ; 
//     }
//     complex(){

//     }
//     void display(){
//         cout<<real<<"+i"<<img<<endl ; 
//     }
//     complex operator +(complex &c){  //function 
//         complex ans ; 
//         ans.real = real + c.real ; 
//         ans.img = img + c.img ; 
//         return ans ;  
//     }
// };
// int main(){
//     complex c1(3,4);
//     complex c2(4,5) ; 

//     complex c3 = c1 + c2 ; // c1 ne call kiya h or c2 argument function h 
//     c3.display() ; 
// }


//virtual function 
// #include<iostream>
// using namespace std ;
// class animals{
//     public:
//     virtual void speak(){        // use virtual keyword jo wait krta h run time ka complie time me hi decide nhi krta 
//         cout<<"hu hu.."<<endl ;
//     }
// };
// class dog :public animals{
//     public:
//     void speak(){
//         cout<<"bark"<<endl ; 
//     }
// };
// class cat :public animals(){
//     public:
//     void speak(){
//         cout<<"meow meow"<<endl ; 
//     }
// }
// int main(){
//     animals *p ;  // animals ko point kr rhA h at compile time 
//     p = new dog() ; // run time pr hoga 
//     p->speak() ;       // ye complie time pr hi decide kr lega ki hu hu print hoga run ka wait hi nhi krta 

// }

// #include<iostream>
// #include<vector>
// using namespace std ;
// class animals{
//     public:
//     virtual void speak(){        // use virtual keyword jo wait krta h run time ka complie time me hi decide nhi krta 
//         cout<<"hu hu.."<<endl ;
//     }
// };
// class dog :public animals{
//     public:
//     void speak(){
//         cout<<"bark"<<endl ; 
//     }
// };
// class cat :public animals{
//     public:
//     void speak(){
//         cout<<"meow meow"<<endl ; 
//     }
// };
// int main(){
//     // animals *p ;  // animals ko point kr rhA h at compile time 
//     // p = new dog() ; // run time pr hoga 
//     // p->speak() ;       // ye complie time pr hi decide kr lega ki hu hu print hoga run ka wait hi nhi krta 

//     animals *p ;
//     vector<animals*>animal;
//     animal.push_back(new dog());
//     animal.push_back(new cat()); 
//     animal.push_back(new animals()) ; 
//     animal.push_back(new dog()) ; 
//     animal.push_back(new cat()) ; 

//     // kaise likhe 
//     for(int i = 0 ; i<animal.size() ; i++){
//         p = animal[i] ; 
//         p->speak() ; 
//     }
// }

// pure virtual function 
// #include<iostream>
// #include<vector>
// using namespace std ;
// class animals{
//     public:
//     virtual void speak() = 0 ;         // abstract class = no create direct object 
// };
// class dog :public animals{
//     public:
//     void speak(){
//         cout<<"bark"<<endl ; 
//     }
// };
// class cat :public animals{
//     public:
//     void speak(){
//         cout<<"meow meow"<<endl ; 
//     }
// };
// int main(){
//     // animals *p ;  // animals ko point kr rhA h at compile time 
//     // p = new dog() ; // run time pr hoga 
//     // p->speak() ;       // ye complie time pr hi decide kr lega ki hu hu print hoga run ka wait hi nhi krta 

//     animals *p ;
//     vector<animals*>animal;
//     animal.push_back(new dog());
//     animal.push_back(new cat());  
//     animal.push_back(new dog()) ; 
//     animal.push_back(new cat()) ; 

//     // kaise likhe 
//     for(int i = 0 ; i<animal.size() ; i++){
//         p = animal[i] ; 
//         p->speak() ; 
//     }
// }

