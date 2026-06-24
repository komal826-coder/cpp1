

// 32 bit operating system or 64 bit os 
// size of object 4 bit 

// padding 
// size decide by multiple 
// int multiple of 4 , char multiple of 1 , and one to one decide size 
// char 1  , int 4 , char 5 => 12 bite  
// char 1 , char 2 , int 4 => 8 bite  
// proper  alligment   => greedy alligment  
// #include<iostream>
// using namespace std;
// class a {
//     char c ; 
//     int b ; 
//     int d ; 
// };
// int main(){
//     a obj ;
//     cout<<sizeof(obj)<<" " ; 
// }

// #include<iostream>
// using namespace std;
// class a {
//     char c ; 
//     char b ; 
//     int d ; 
// };
// int main(){
//     a obj ;
//     cout<<sizeof(obj)<<" " ; 
// }

// #include<iostream>
// using namespace std;
// class a {
//     char c ; 
//     int b ; 
//     char d ; 
// };
// int main(){
//     a obj ;
//     cout<<sizeof(obj)<<" " ; 
// }

// #include<iostream>
// using namespace std;
// class a {
//     char c ; 
//     char b ; 
//     int d ; 
//     double e ; 
// };
// int main(){
//     a obj ;
//     cout<<sizeof(obj)<<" " ; 
// }

// static vs dynamic memory allocation 
// int * p = new int 
// (*s).name = "komal"
//  s-> name = "komal"
// #include<iostream>
// using namespace std ; 
// class student{
//     public : 
//     string name ;
//     int age ; 
//     int roll_no;
//     string grade ; 

// };
// int main() {
//     student *s = new student ;
//     (*s).name = "komal" ;
//     s->age = 20 ;
//     (*s).grade = "a++" ;
//     s->roll_no = 211 ; 

//     cout<<s->name<<s->age<<(*s).roll_no<<s->grade<<endl ; 
// }