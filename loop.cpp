// #include<iostream>
// using namespace std ; 
// int main(){
//       for(int i =0 ; i<100 ; i++) {
//         cout<<i ; 
//       }
//       return 0 ; 
// }

// #include<iostream>
// using namespace std ;
// int main(){
//     char name ; 
//     for(name = 'a' ;name <= 'z' ; name++){
//         cout<<name<<" " ; 
//     }
//     return 0 ; 
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n ; 
//     for(int i = 100 ; i>= 1 ; i--){
//         cout<<i<<endl ; 
//     }
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ; 
// int main(){
//     for(int i =0 ; i<= 10; i=i+3 ){
//         cout<<i<<" " ; 
//     }
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ; 
// int main(){
//     for(int i = 1 ; i<= 10 ; i++) {
//        cout<<i*6<<endl   ; 
//     }
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ; 
// int main(){
//     int n ; 
//     cout<<"enter number:";
//     cin>> n ; 
//     for(int i = 1 ; i<= 10 ; i++) {
//         cout<<n<<"*"<<i<<"="<<n*i<<endl ; 
//     }
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ; 
// int main(){
//     int num , pow,n ,i; 
//     cout<<"enter the num:" ; 
//     cin>>num ; 
//     cout<<"enter the power:";
//     cin>>pow ; 
//     n = num ; 
//     for( i = 1 ; i< pow ; i++) {
//         n = i*num ; 
//     }cout<<n; 
//     return 0 ; 
// }

//sum of n natural number 
// #include<iostream>
// using namespace std ; 
// int main(){
//     int sum , i , n  ;
//     cout<<"enter number:";
//     cin>>n ; 
//     sum = 0 ; 
//     for(i = 0 ; i<= n ;i++) {
//         sum = sum + i ; 
//     }
//     cout<<"sum :"<<sum ; 
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ; 
// int main(){
//     int sum , i , n  ;
//     cout<<"enter number:";
//     cin>>n ; 
   
//     cout<<"sum :"<<(n*(n+1))/2; 
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ; 
// int main(){
//     int sum , i , n  ;
//     cout<<"enter number:";
//     cin>>n ; 
//     sum = 0 ; 
//     for(i = 0 ; i<= n ;i++) {
//         sum = sum + i*i ; 
//     }
//     cout<<"sum :"<<sum ; 
//     return 0 ; 
// }

//factorial
// #include<iostream>
// using namespace std ;
// int main(){
//     int n , fact , i ; 
//     cout<<"enter n :"; 
//     cin>>n ; 
//     fact = 1 ; 

//     for(i = 1 ; i<= n ; i++) {
//         fact = fact* i  ; 
//     }
//     cout<<fact ; 
//     return 0 ; 
// }

//prime number
// #include<iostream>
// using namespace std ; 
// int main(){
//     int n ,i;
//     cout<<"enter the n :"; 
//     cin>> n ; 

//         if(i<2 ) {
//             cout<<"not prime " ; 
//         }
//         else {
//             for( i = 2 ; i <  n ;i++) {
//                 if(n% i == 0 ) {
//                     cout<<" not prime "; 
//                     return 0 ; 
//                 }
//         }
//     }
//     cout<<"prime " ; 
//     return 0 ; 
// }

//fibonachi series 
// #include<iostream>
// using namespace std ; 
// int main(){
//     int n , i , pre ,last ;
//     pre = 1; 
//     last = 0 ; 
//     cout<<"enter n :"; 
//     cin>>n ; 
//     cout<<last ; 
//     cout<<pre; 
//     for(i = 0; i < n ; i++) {
//         i = pre + last ; 
//         cout<<i ;
//         last = pre ; 
//         pre = i ; 
//     }
//     return 0 ; 
// }
    
//while 
// #include<iostream>
// using namespace std ; 
// int main(){
//     int i = 1 ; 
//     while(i<= 10 ) {
//         cout<<i<<endl ; 
//         i++ ; 
//     }
//  }
 
// #include<iostream>
// using namespace std ; 
// int main(){
//     int i = 1 ; 
//     while(i<= 100) {
//         cout<<"8"<<"*"<<i<<"="<<8*i<<endl ; 
//         i++ ; 
//     }
//  }
 
// #include<iostream>
// using namespace std ; 
// int main(){
//     int i = 1 ; 
//     while(i<= 10 ) {
//         if(10%i== 0 )
//         cout<<i<<endl ; 
//         i++ ; 
//     }
//  }
 
// #include<iostream>
// using namespace std ; 
// int main(){
//     int i = 1 ; 
//     while(i<= 10 ) {
//         if(i%2== 0 )
//         cout<<i<<endl ; 
//         i++ ; 
//     }
//  }

// #include<iostream>
// using namespace std ; 
// int main(){
//     int i = 1 ; 
//     while(i<= 10 ) {
//         if(i%2 != 0 )
//         cout<<i<<endl ; 
//         i++ ; 
//     }
//  }
 

//do while loop 
// #include<iostream>
// using namespace std ; 
// int main(){
//     int i = 1 ; 
//     do{
//         cout<<i<<endl ; 
//         i++;
//     }while(i<=10 ) ; 
//     return 0 ; 
//  }

// #include<iostream>
// using namespace std ; 
// int main(){
//     int i = 1 ; 
//     do{
//         cout<<2*i<<endl ; 
//         i++;
//     }while(i<=10 ) ; 
//     return 0 ; 
//  }
 
// #include<iostream>
// using namespace std ; 
// int main(){
//     int i = 1 ; 
//     int sum = 0 ;
//     do{
//         sum = sum+i ; 
//         cout<<sum<<endl ; 
//         i++;
//     }while(i<=10 ) ; 
//     return 0 ; 
//  }
 
//break 
// #include<iostream>
// using namespace std ; 
// int main(){
//     int i = 1 ; 
//     while(i<=10 ){
//         if(i == 4 ) 
//         break ; 
//         cout<<i <<" " ; 
//         i++;
//     }
//     return 0 ; 
//  }
 
//continue 
// #include<iostream>
// using namespace std ; 
// int main(){
//     int i = 1 ; 
//     while(i<=10 ) {
//         if(i%6== 0 ) 
//         continue ; 
//         cout<<i<<" " ; 
//         i++; 
//     }
//     return 0 ; 
// }

//switch 
// #include<iostream>
// using namespace std ; 
// int main(){
//     int i = 1 ; 
//     switch(i) {
//        case 1 :
//        cout<<"rohit" ; 
//        break ; 
//        case 2 : 
//        cout<<"mohit" ;
//        break ; 
//        default:
//        cout<<"sohit" ; 
//     }
//     return 0  ; 
// }

// #include<iostream>
// using namespace std ; 
// int main(){
//     char name= 'b' ; 
//     switch(name) {
//        case 'a':
//        cout<<"rohit" ; 
//        break ; 
//        case 'b' : 
//        cout<<"mohit" ;
//        break ; 
//        default:
//        cout<<"sohit" ; 
//     }
//     return 0  ; 
// }

// #include<iostream>
// using namespace std ; 
// int main(){
//     int i ; 
//     cin>>i ; 
//     switch(i) {
//        case 1:
//        cout<<"monday" ; 
//        break ; 
//        case 2 : 
//        cout<<"tuesday" ;
//        break ; 
//        case 3 : 
//        cout<<"wednesday" ;
//        break ; 
//        case 4:
//        cout<<"thrusday" ;
//        break ; 
//        case 5 :
//        cout<<"friday" ;
//        break ; 
//        case 6: 
//        cout<<"saturday" ;
//        break ; 
//        case 7:
//        cout<<"sunday" ;
//        break ; 
//        default:
//        cout<<"no present " ; 
//     }
//     return 0  ; 
// }