// DECIMAL TO BINry 

// #include<iostream>
// using namespace std ; 
// int main(){
//     int ans, mul , num ,rem; 
//     cout<<"enter the num :" ; 
//     cin>>num ; 
//     ans = 0 ; 
//     mul = 1 ; 
    
//     while(num>0){
//         //reminder 
//         rem = num&1; 
//         //quotient 
//         num = num/2 ; 
//         //ans 
//         ans = rem * mul + ans ; 
//         //mul 
//         mul *=10 ; 
//     }
//     cout<<ans<<endl ; 
// return 0 ; 

// }


  // BINARY TO DECIMAL 

//   #include<iostream>
//   using namespace std ; 
//   int main(){
//     int num ;
//     cout<<"enter num:" ; 
//     cin>>num ;  
//     int ans = 0 , mul = 1 , rem ; 

//     while(num>0 ) {
//         rem = num%10 ; 
//         num = num/10 ; 
//         ans = rem * mul +ans ; 
//         mul = mul *2 ; 
//     }
//     cout<<ans ; 
//     return 0 ;
//   }  

// OCTA TO DECIMAL ; 

// #include<iostream>
//   using namespace std ; 
//   int main(){
//     int num ;
//     cout<<"enter num:" ; 
//     cin>>num ;  
//     int ans = 0 , mul = 1 , rem ; 

//     while(num>0 ) {
//         rem = num%10; 
//         num = num/10 ; 
//         ans = rem * mul +ans ; 
//         mul = mul *8 ; 
//     }
//     cout<<ans ; 
//     return 0 ;
//   }  

// DECIMAL TO OCTA 

// #include<iostream>
// using namespace std ; 
// int main(){
//     int ans, mul , num ,rem; 
//     cout<<"enter the num :" ; 
//     cin>>num ; 
//     ans = 0 ; 
//     mul = 1 ; 
    
    // while(num>0){
    //     //reminder 
    //     rem = num%8; 
    //     //quotient 
    //     num = num/8 ; 
    //     //ans 
    //     ans = rem * mul + ans ; 
    //     //mul 
    //     mul *=10 ; 
    // }
//     cout<<ans<<endl ; 
// return 0 ; 
// }


// BINARY TO OCTA => BINARY TO DECIMAL AND THEN DECIMAL TO OCTA 
//   #include<iostream>
//   using namespace std ; 
//   int main(){
//     int num ;
//     cout<<"enter num:" ; 
//     cin>>num ;  
//     int ans = 0 , mul = 1 , rem,ans1 = 0 ; 
  
//     while(num>0){
//     while(num>0 ) {
//         rem = num%10 ; 
//         num = num/10 ; 
//         ans = rem * mul +ans ; 
//         mul = mul *2 ; 
//     }
//         rem = ans%8; 
//         ans = ans/8 ; 
//         ans1= rem * mul + ans1 ; 
//         mul *=10 ; 
//     }
//     cout<<ans1 ; 
//     return 0 ;
//   }  