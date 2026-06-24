// it is an approach or a programming pattern where the programs are structured around object rather than function and logic

//class : it is user defined data type and blue print for creating object 
//object : anything exist in physical world 
// #include<iostream>
// using namespace std ; 
// class student{
//     public:  
//     string name ; 
//     int age , roll_no ; 
//     string grade ;
// };

// int main(){
//     student s1 ;  
//     s1.name = "komal" ;
//     s1.age = 20 ;
//     s1.roll_no = 21 ; 
//     s1.grade = "A+" ;

//     cout<<s1.name<<s1.age<<s1.grade<<s1.roll_no<<endl ; 
//     student s2 ;  
//     s2.name = "komal" ;
//     s2.age = 20 ;
//     s2.roll_no = 21 ; 
//     s2.grade = "A+" ;
//     cout<<s2.name<<s2.age<<s2.grade<<s2.roll_no<<endl ; 
// }


// with private access modifiers  getter and setter use 
#include<iostream>
using namespace std ; 
class student{
    private:  
    string name ; 
    int age , roll_no ; 
    string grade ;

    // use function getter ansd setter 
    public:
    void setname(string s) {
        if(s.size() == 0) {
            cout<<"invalid name";
            return ; 
        }
        name = s ;
    }
    void setage(int a) {
        if(age<0){
            cout<<"invalid age" ; 
            return ; 
        }
        age = a ;
    }
    void setroll_no(int r){
        roll_no = r ; 
    }
    void setgrade(string g) {
        grade = g ; 
    }

    //getter print 
    void getname(){
        cout<<name<<endl ;
    }
    void getage(){
        cout<<age<<endl ; 
    }
    // void getgrade(){
    //     cout<<grade<<endl ;
    // }
    string getgrade(int pin){
        if(pin == 123 ) {    // condition pin code 
            return grade ; 
        }
        return "" ; 
    }
    void getroll_no(){
        cout<<roll_no<<endl ;  
    }
};

int main(){
    student s1 ;  
    s1.setname("komal") ;
    s1.setage(20) ;
    s1.setgrade("a++") ;
    s1.setroll_no(22) ;
    s1.getname() ;
    s1.getage() ; 
    s1.getroll_no() ; 
    //s1.getgrade() ; 
    cout<<s1.getgrade(123) ; 
}

