//INHERITENCE => 

// #include<iostream>
// using namespace std ; 
// class human{
//     private:
//     int a ; 
//     protected :
//     int c ; 
//     public :
//     int b ; 
    

//     void fun(){
//        // a = 10 ; 
//         b = 20 ; 
//        // c = 90 ; 
//     }
// };
// int main(){
//     human komal ; 
//    // komal.a = 10 ;  (not access)
//     komal.b = 20 ; 
//     //komal.c = 90 ;(not access )
//     komal.fun() ; 
// }


// #include<iostream>
// using namespace std ; 
// class human{
//     public:
//     string name ; 
//     int age , weight ; 
// };
// class student :public human {
//     private:
//     int roll_no ,fees  ; 
//     protected :
//     string name ; 
//     int age , weight ; 
//     public : 

//     void fun(string n , int a ,int w){
//         name = n ; 
//         age = a ; 
//         weight = w ; 
//     }
//     void display(){
//         cout<<name<<" "<<age<<" "<<weight<<endl ;
//     }
// };
// int main(){
//  student s ;
// //  s.name = "komal" ; 
// //  s.age = 20 ; 
//  s.fun("komal" , 20 , 97 ) ; 
//  s.display() ; 
// }

// #include<iostream>
// using namespace std ; 
// class human {
//     string religion , colour ;
//     protected:
//     string name ; 
//     int age , weight ;
// };
// class student: private human{
//     private :
//     int roll_no , fees ;

//     public :
//     void fun(string n , int a , int w){
//         name = n; 
//         age = a ; 
//         weight = w ; 
//     }
//     void display(){
//         cout<<name<<" "<<age<<" "<<weight<<endl ; 
//     }
// };
// int main(){
//     student s ;
//     s.fun("komal",10 , 50) ;
//     s.display() ; 
// }


// #include<iostream>
// using namespace std ; 
// class human {
//     string religion , colour ;
//     public:
//     string name ; 
//     int age , weight ;
// };
// class student: protected human{
//     private :
//     int roll_no , fees ;

//     public :
//    student(string name , int age , int weight , int roll_no , int fees){
//     this->name = name ;
//     this->age = age ; 
//     this->weight = weight ; 
//     this->roll_no = roll_no ; 
//     this->fees = fees ;
//    }
//     void display(){
//         cout<<name<<" "<<age<<" "<<weight<<" "<<roll_no<<" "<<fees<<endl ; 
//     }
// };
// class teacher:public human {
//     private :
//     int salary , id ; 

//     public:
//     teacher(string name , int age , int weight , int id , int salary ) {
//         this->name = name ; 
//         this->age = age ; 
//         this->weight = weight ; 
//         this->id = id ;
//         this->salary = salary ; 
//     }
//      void Display(){
//         cout<<name<<" "<<age<<" "<<weight<<" "<<id<<" "<<salary<<endl ; 
//     }
// };
// int main(){
//     student s("komal" , 20 , 46 , 97 , 400000);
//     s.display() ; 
//     teacher b("mohan" , 40 , 65 , 456 , 300000) ; 
//     b.Display() ;
// }



////TYPES OF INHERITENCE 
//SINGLE INHERITENCE 

// #include<iostream>
// using namespace std ;  
// class human{
//     protected:
//     string name ; 
//     int age  ; 
//     // public:
//     // human(){
//     //     cout<<"human call\n" ; 
//     // }
//     // void work(){
//     //     cout<<" i am working\n" ;
//     // }
//     human(string name , int age){
//         this->name = name ; 
//         this->age = age ; 
//     }
//     void display(){
//         cout<<"phle konsa call hoga ";
//     }
// };
// class student : public human{

//     int roll_no , fees ; 

//     public:
//     student(string name , int age , int roll_no , int fees): human(name , age) {
//         this->roll_no = roll_no ; 
//         this->fees = fees ; 
//     }
//     // student(){
//     //     cout<<"student call\n" ; 
//     // }
//     void define(){
//         cout<<name<<" "<<age<<" "<<roll_no<<" "<<fees<<endl ; 
//     }
// };

// int main(){
//     student s("komal" , 20 , 97 , 200000)  ; 
//     s.define() ; 
// }



//multilevel inheritence 
// #include<iostream>
// using namespace std ;
// class person{
//     protected:
//     string name ;
//     public:
//     void introduce(){
//         cout<<"hello my name:"<<name<<endl ; 
//     }
// };
// class employee : public person{
//     protected:
//     int salary ; 
//     public:
//     void monthly_salary(){
//         cout<<"my minthly salary is:"<<salary<<endl ; 
//     }

// };
// class manager : public employee 
// {   protected:
//     string department ;
//     int no_of_employee ; 
//     public:
//     manager(string name , int salary , string department , int no_of_employee){
//        this->name = name ;
//        this->salary = salary ; 
//        this->department = department ; 
//        this->no_of_employee = no_of_employee ;  
//     }
//     void work(){
//         cout<<"i am leading the department "<<department<<endl ; 
//     }
// };
// int main(){
//     manager A1("komal" , 300000 , "it" , 4999);
//     A1.work() ;
//     A1.monthly_salary();
//     A1.introduce() ;
//     return 0 ; 
// }



//multiple inherotance 
// #include<iostream>
// using namespace std ; 
// class engineer{
//     public:
//     string specilization;
//     void work(){
//         cout<<"i have specialization in"<<" "<<specilization<<endl ; 
//     }
//     // engineer(){
//     //     cout<<"i am engineer"<<endl ;
//     // }
// };
// class youtuber{
//     public:
//     int subscribers;

//     void contentcreater(){
//         cout<<"i have a subscriber base of :"<<subscribers<<endl ; 
//     }
//     // youtuber(){
//     //     cout<<"i am youtuber"<<endl ; 
//     // };
// };
// class codeteacher:public engineer , public youtuber{
//     public:
//     string name ;

//     codeteacher(string name , string specilization, int subscribers ){
//         this->name = name ; 
//         this->specilization = specilization ; 
//         this->subscribers = subscribers ; 
//     }
//     void showcase(){
//         cout<<"my name is "<<name<<endl ; 
//         work() ; 
//         contentcreater() ; 
//     }
//     // codeteacher(){
//     //     cout<<"i am coder"<<endl ; 
//     // }
// };
// int main(){
//     codeteacher A1("komal " , "IT" , 4000) ; 
//     A1.showcase() ;
// }


// Hierarchical inheritance 
// #include<iostream>
// using namespace std ; 
// class human{
//     protected :
//     string name ; 
//     int age ; 
//     public:
//     human(){

//     }
//     human(string name , int age){
//         this->name = name ; 
//         this->age = age ; 
//     }
//     void display(){
//         cout<<name<<" "<<age<<endl ; 
//     }
//     // void work(){
//     //     cout<<"i am human"<,endl ; 
//     // }
// };
// class student:public human{
//     int fees ; 
//     public:
//     student(string name , int age , int fees){
//         this->name = name ; 
//         this->age = age ; 
//         this->fees = fees ; 
//     }
//     void display(){
//         cout<<name<<" "<<age<<" "<<fees<<endl ; 
//     }
//     // void stu(){
//     //     cout<<"i am student" <<endl ; 
//     // }
// };
// class teacher : public human 
// {
//     int salary ; 
//     public:
//     teacher(string name , int age , int salary){
//         this->name = name ; 
//         this->age = age ; 
//         this->salary = salary ; 
//     }
//     void display(){
//         cout<<name<<" "<<age<<" "<<salary<<endl ; 
//     }
// };
// int main(){
//     teacher t("rohit" , 45, 100000) ;
//     t.display() ; 
//     student s("komal" , 20 , 89900) ; 
//     s.display() ; 
// }


//hybrid inheritance 
// #include<iostream>
// using namespace std ;
// //student
// //girl
// //boy
// //male 
// //female 
// class student{
//     public:
//     void print(){
//         cout<< "i am student"<<endl ; 
//     }
// };
// class male {
//     public:
//     void maleprint(){
//         cout<<"i am male "<<endl ; 
//     }
// };
// class female {
//     public:
//     void femaleprint(){
//         cout<<" i am female"<<endl ; 
//     }
// };
// class boy : public student ,public male 
// {
//     public:
//     void boyprint(){
//         cout<<" i am boy"<<endl ;
//     }
// };
// class girl : public student ,public female{
//     public:
//     void girlprint(){
//         cout<<" i am girl"<<endl ; 
//     }
// };

// int main(){
//     girl g1;
//     g1.girlprint() ; 
//     boy b1 ;
//     b1.boyprint() ;
// }


//multipath inheritance 
// #include<iostream>
// using namespace std ; 
// class human{
//     public:
//     string name ; 
    
//     void display(){
//         cout<<"my name is :"<<name<<endl ; 
//     }
// };
// // use virtual keyword for uniqueness help to virtual be define uniqueness => name inherit only one time 
// class youtuber:public virtual human{
//     public:
//     int subscriber;

//     void subs(){
//         cout<<"subscriber are"<<" "<<subscriber<<endl ; 
//     }
// };
// class engineer : public virtual human{
//     public :
//     string specilization;

//     void work(){
//         cout<<"my specilization is :"<<" "<<specilization<<endl ; 
//     }
// };
// class codeteacher:public engineer , public youtuber{
//     public:
//     int salary;

//     codeteacher(string name , int subscriber , string specilization , int salary){
//         this->name = name ; 
//         this->subscriber = subscriber;
//         this->specilization = specilization ; 
//         this->salary = salary ; 
//     }
// };
// int main(){
//     codeteacher A1( "komal" , 3000 , "IT" , 20000) ; 
//     A1.display() ; 
// }