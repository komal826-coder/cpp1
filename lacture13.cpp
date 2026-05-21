// leet code question solve 

// #include<iostream>
// using namespace std; 
// int main(){
//     int num ; 
//     cout<<"enter num: ";
//     cin>>num ;
//     while(num>9){ 
//     int ans = 0 , rem; 

//     while(num!=0) {
//         rem = num%10 ; 
//         num = num/10 ; 
//         ans = rem + ans ; 
//     }
//     num = ans ; 
// }
//     cout<<num ; 
//     return 0 ; 
// }

//leap year 
// #include<iostream>
// using namespace std ; 
// int main(){
//     int year ;
//     cout<<"enter year :"; 
//     cin>>year ; 
//     if(year%400 == 0){
//         cout<<"leap year" ; 
//     }
//     else if(year%4==0 && year%100 != 00) {
//         cout<<"leap year" ; 
//     }
//     else 
//     cout<<"not a leap year ";
//     return 0 ; 
// }

//reverse integer 
// #include<iostream>
// #include<math.h>
// using namespace std ;
// int main(){
//     int ans = 0 , rem  ; 
//     int num  ; 
//     cin>>num ; 

//     while(num!=0){
//         rem = num%10 ; 
//         num = num/10 ; 
//         //overflow condition  => use in leap code
//         //if(ans>INT_MAX/10 || ans<INT_MIN/10) 
//         //return 0 ; 
//         ans = ans*10 + rem ; 

//     }
//     cout<<ans ; 
//     return ans ; 
// }

// power of 2 
// #include<iostream>
// using namespace std ; 
// int main(){
//     int num ; 
//     cout<<"enter num:"; 
//     cin>>num ; 
//     if(num<1){
//     cout<<"not a power of 2";
//     return 0 ; 
//     }
//     while(num != 1) {
//         if ( num%2 == 1) {
//             cout<<"not a power of 2 ";
//         return 0 ;
//         }
//         num = num/2 ; 
//     }cout<<"power of 2 " ; 
//     return 0 ; 
// }

//square root of x 


//palindrome
// #include<iostream>
// #include<math.h>
// using namespace std ;
// int main(){
//     int x  ; 
//     cin>>x ; 
//     if(x<0){
//         cout<<"not a palindrome number";
//         return 0 ; 
//     }
//     int ans = 0 , rem , num = x; 
//     while(num!=0){
//         rem = num%10 ; 
//         num = num/10 ; 
//         //overflow condition  => use in leap code
//         //if(ans>INT_MAX/10 || ans<INT_MIN/10) 
//         //return 0 ; 
//         ans = ans*10 + rem ; 

//     }
//     if(ans == x ) {
//         cout<< "palindrom " ; 
//     }
//     else{
//         cout<<"not palindrom" ; 
//     }
//     return 0 ; 
// }

//compliment of a number 
// #include<iostream>
// using namespace std ;
// int main(){
//     int num ; 
//     cout<<"enter num:";
//     cin>>num ; 
//     int ans = 0 , mul = 1 , rem;
//      while (num!=0) {
//         rem = num % 2 ;
//         rem = rem^1 ;   //exor 
//         num = num/2 ; 
//         ans = ans + rem*mul ; 
//         mul = mul * 2 ;  

//      }
//      cout<<ans ; 
//      return 0 ; 
// }

 