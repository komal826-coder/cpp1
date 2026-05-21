//sum of two number 

// #include<iostream>
// using namespace std ;
// int sum(int a , int b) {
//     int ans = a + b ; 
//     return ans ; 
// }
// void fun(){
//     cout<<"hello komal\n" ;
// }
// void mul(int a , int b){
//     int ans = a*b ; 
//     cout<<"mul = " <<ans<<endl  ; 
// }
// int main(){
//     int m , n ; 
//     cout<<" m:";
//     cin>>m ; 
//     cout<<" n:"; 
//     cin>>n ;
//     cout<<sum(m,n)<<endl ; 

//     mul(m,n) ; 

//     fun();
//     return 0 ; 
// }

// prime and factorial 
// #include<iostream>
// using namespace std ;
// bool prime(int m) {
//     if(m<2){
//         return 0 ; 
//     }
//     for(int i = 2 ; i<m ; i++){
//         if(m%i == 0){
//             return 0 ; 
//         }
//     }
//     return 1 ; 
// } 
// int fact(int m=6) {      //default parameter use this value 6 
//     int ans = 1 ; 
//     for(int i = 1 ; i<= m ; i++){
//         ans = ans *i ; 
//     }
//     return ans ; 
// }
// int main(){
//     int a , b ; 
//     cout<<"a:" ; 
//     cin>>a ; 
//     cout<<"b:" ; 
//     cin>>b ; 
    
//     cout<<prime(a)<<endl ; 
//     cout<<prime(b)<<endl  ; 
//     cout<<prime(a-b)<<endl ; 

//     cout<<fact() ;        //default parameter no any given value 
//     cout<<fact(a)<<endl ; 
//     cout<<fact(b)<<endl ; 
//     cout<<fact(a-b)<<endl ; 
// }


//swap 
// #include<iostream>
// using namespace std ; 
// void swap(int &a , int &b){
//     int c = a ; 
//     a =  b ;  
//     b = c ; 

// }
// void swap (float &a , float &b) {    //function overloading => same name but different argument 
//     float r = a ;
//     a= b ; 
//     b = r ; 
// }
// int main(){
//     int a , b ; 
//     cout<<"a:";
//     cin>>a ; 
//     cout<<"b:"; 
//     cin>>b ; 

//     swap(a ,b);

//     cout<<"a:"<<a<<" "<<"b:"<<b;
//     return 0 ;
// }


// convert a to A 
// #include<iostream>
// using namespace std ; 
// char convert(char name) {
//     name = name - 32 ;        // char ans = name - 'a'+'A' 
//     return name ; 
// }
// int main(){
//     char name ; 
//     cout<<"name :" ; 
//     cin>>name ; 

//     cout<<convert(name) ; 
// }


//armstrong number 
// #include<iostream>
// #include<math.h>  
// using namespace std ; 
// bool armstrong(int num , int digit ) {
//     int n = num ;
//     int ans = 0 ,rem ;
//     while(n){
//         rem = n%10 ; 
//         n = n/10 ; 
//         ans = ans + pow(rem ,digit ) ;
//     }
//     if(ans == num) {
//         return 1 ; 
//     }
//     else{
//         return 0 ; 
//     }
// }
// int count(int num ) {
//     int count = 0 ; 
//     while(num){
//          count++ ; 
//          num /= 10 ; 
//     }
//     return count ; 
// }
// int main(){
//     int num ;
//     cout<<"enter num:" ; 
//     cin>>num ; 
//     int digit = count(num) ; 
//     cout<< armstrong(num , digit ) ; 
    
// }

// find trailing zeros in a factorial 
// #include<iostream>
// using namespace std ; 
// int main(){
//     int n ; 
//     cout<<" n: "; 
//     cin>>n ; 

//     int count = 0 ; 
//     while(n>=5){
//         count += n/5 ; 
//         n/=5 ; 
//     }
//     cout<<count ; 
//     return 0 ; 
// }

//rectangle 
// #include<iostream>
// using namespace std ;
// void rectangle(int a , int b , int c , int d){
//     if(a==b&&c==d || a==c &&b==d || a==d && b==c){
//         cout<<"rectangle";
//     }
//     else{
//         cout<<"not rectangle "; 
//     }
// } 
// int main(){
//     int a , b,c , d;
//     cout<<"a:" ; 
//     cin>>a;
//     cout<<"b:";
//     cin>>b; 
//     cout<<"c:";
//     cin>>c;
//     cout<<"d:";
//     cin>>d ; 

//     rectangle(a,b,c,d); 
//     return 0 ; 
// }

 //bishop moves 
//  #include<iostream>
//  using namespace std ;
//  int main(){
//     int a,b ;
//     cout<<"a: ";
//     cin>>a;
//     cout<<"b:";
//     cin>>b ; 

//     int count = 0 ;  
//     count += min(8-a , 8-b) ;
//     count += min(8-a , b-1);
//     count += min(a-1 , b-1);
//     count += min(a-1 ,8-b) ; 

//     cout<<count;
//     return 0 ; 
//  }

//nim game => 
// #include<iostream>
// using namespace std ;
// int main(){
//     int n ; 
//     cout<<"n:";
//     cin>>n ; 
    
//     if(n%4 != 0){
//         cout<<"winner" ; 
//     }
//     else{
//         cout<<" 2nd winner" ;
//     }
//     return 0 ; 
// }

