// #include<iostream>
// using namespace std ; 
// int main(){
//     int a = 3 , b = 5 ; 
//     cout<<a*b<<endl ; 
//     cout<<a-b<<endl  ; 
//     cout<<"6*3";
//}

// hw 4 
// #include<iostream>
// using namespace std ;
// int main(){
//     int a = 8 , b = 5 ; 
//     if(a>b){
//         cout<<"a is greater";
//     }
//     else{
//         cout<<"b is greater";
//     } 
//     return 0 ;
// }

// #include<iostream>
// using namespace std ;
// int main(){
//     int age ; 
//     cout<<"age: " ;
//     cin>>age ; 

//     if(age>=18) {
//         cout<<"adult" ;
//     }
//     else{
//         cout<<"teenager";
//     }
//         return 0 ; 
// }

// #include<iostream>
// using namespace std ;
// int main(){
//     int n ; 
//     cout<<"n: ";
//     cin>>n ; 
    
//     switch(n) {
//         case 1 : cout<<"january" ; break ;   
//         case 2:  cout<<"feburary" ; break ;
//         case 3:  cout<<"march" ; break ; 
//         case 4:  cout<<"april" ; break ; 
//         case 5:  cout<<"mey" ; break ;
//         case 6:  cout<<"june" ; break ;
//         case 7:  cout<<"july" ; break ;
//         case 8:  cout<<"august" ; break ;
//         case 9:  cout<<"september" ; break ;
//         case 10:  cout<<"october" ; break ; 
//         case 11:  cout<<"november" ; break ;   
//         case 12:  cout<<"december" ; break ;  
        
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std ; 
// int main(){
//     int n ; 
//     cout<<"number: " ; 
//     cin>>n ; 

//     if(n>65 || n<12) {
//         cout<<"discount eligible" ;
//     }
//     else{
//         cout<<"not eligible" ;
//     }
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ;
// int main(){
//     int n = 20 ; 
//     for(int i = 0 ; i<= n ; i++){
//         cout<<"india will win the world cup 2023 "<<endl ;
//     }
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ; 
// int main(){
//     int n ; 
//     cout<<"enter n: " ; 
//     cin>>n ; 
//     for(int i = 0 ; i<= n ; i++){
//         if(i%2 != 0) {
//             cout<<i<<" " ; 
//         }
//     }
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ; 
// int main(){
//     int n ; 
//     cout<<"n:" ; 
//     cin>>n ; 

//     for(int i = 1 ; i<=n ; i++){
//         if(i%4 == 0 ) {
//             cout<<i<<" " ;
//         }
//     }
//     return 0 ; 
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i = 280 ; i>=250 ;i--){
//         cout<<i<<" " ; 
//     }
//     return 0 ;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(char i = 65 ; i<=90 ; i++){
//         cout<<i<<" " ; 
//     }
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ;
// int main(){
//     for(char i = 90 ; i>=65 ; i--){
//         cout<<i<<" " ; 
//     }
//     return 0 ; 
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i = 220 ; i<=730 ; i = i+7 ){
//         cout<<i<<" " ; 
//     }
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ; 
// int main(){
//     int n ; 
//     cin>>n ; 
//     int sum = 0 ; 
//     for(int i = 0 ; i<= n ;i++){
//         sum = sum +i*i ;
//     }
//     cout<<sum ;
//     return 0 ;
// }

// #include<iostream>
// using namespace std ;
// int main(){
//     int n , sum =0 ; 
//     cin>>n ; 
//     for(int i = 0 ; i<= n ; i++){
//         sum = sum+ i*i*i ; 
//     }
//     cout<<sum ; 
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ; 
// int main(){
//     int n , pre = 0 , last = 1 ; 
//     cout<<"N:" ; 
//     cin>>n ; 
//     cout<<pre<<" "<<last<<" "; 
//     for(int i = 0 ; i<= n ; i++){
//         i = pre + last ;
//         cout<<i<<" " ; 
//         pre = last ; 
//         last = i ; 
//     }
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ; 
// int main(){
//     for(int i = 0 ; i<5 ;i++){
//         for(int j = 0 ; j<5 ; j++){
//             cout<<"4"; 
//         }
//         cout<<endl;
//     }
//     return 0 ;
// }

// #include<iostream>
// using namespace std ; 
// int main(){
//     for(int i = 1 ; i<=6 ; i++){
//         for(int j = 1 ; j<=6 ; j++){
//             cout<<j*j ; 
//         }
//         cout<<endl ; 
//     }
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ;
// int main(){
//     for(int i = 1 ; i<= 6 ; i++){
//         for(int j = 1 ; j<= 6 ; j++){
//             cout<<j*j*j;
//         }
//         cout<<endl ; 
//     }
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ;
// int main(){
//     for(int i = 1 ; i<= 5 ; i++){
//         for(char j = 70; j<=75 ; j++){
//             cout<<j ; 
//         }
//         cout<<endl ; 
//     }
//     return 0 ;
// }

// #include<iostream>
// using namespace std ;
// int main(){
//     for(int i = 0 ; i< 7 ; i++){
//         for(int j = 1 ; j< i ; j++){
//             cout<<j ; 
//         }
//         cout<<endl ; 
//     }
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ;
// int main(){
//     for(int i = 0 ; i < 7 ; i++){
//         for(char j = 'A' ; j< 'A' + i ; j++){
//             cout<<j ; 
//         }
//         cout<<endl ; 
//     }
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ;
// int main(){
//     for(int i = 0 ; i < 7 ; i++){
//         for(int j = 10 ; j<10+ i ; j++){
//             cout<<j ; 
//         }
//         cout<<endl ; 
//     }
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ;
// int main(){
//     for(int i = 6; i>=0; i--){
//         for(char j = 'A' ; j<'A'+ i; j++){
//             cout<<j ; 
//         }
//         cout<<endl ; 
//     }
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ;
// int main(){
//     for(int i = 1 ; i<=5 ; i++){
//         for(int j = 3 ; j>=i ; j--){
//             cout<<"*" ; 
//         }
//         for(int k = i; k >= 1   ; k--){
//             cout<<k ; 
//         }
//         cout<<endl ; 
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std ; 
// int main(){
//     char a = 'A' ;
//     for(char i = 65 ; i< 70 ; i++){
//         for(int j = 69 ; j>=i ; j--){
//             cout<<" " ;
//         }
//         for(int k = i ; k >= 65 ; k--){
            
//             cout<<i; 
//         }
//         cout<<endl ;
//     }
//     return 0 ;
// }

//  #include<iostream>
//  using namespace std ; 
//  int main(){
//     for(int i = 5 ; i>=1 ; i--){
//         for(int j = 1 ; j< i ; j++){
//             cout<<" " ;
//         }
//         for(int k = 5 ; k>= i ; k--) {
//         cout<<k ; 
//         }
//         cout<<endl ; 
//     }
//     return 0 ; 

//  }

// #include<iostream>
// using namespace std ; 
// int main(){
//     int arr[4] = { 2,7,11,15} ; 
//     int target = 9 ; 
//     int start = 0 ; 
//     int end = 3 ;
//     for(int i = 0 ; i<4 ; i++){
//         if(arr[i] + arr[3] == target ){
//             cout<<"mil gya"  ;
//         }
//         else if ( arr[i] + arr[3] > target ){
//             end-- ; 
//         }
//         else{
//             start++ ; 
//         }
//     }
//     return 0 ; 
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char c ;
//     for(int i = 5 ; i>= 0 ; i--){
//         for(int j = 0 ;  j<i ; j++){
//             cout<<" " ; 
//         }
//         for(int k = 5 ; k>=i ; k--){
//            c = 'A' + k ; 
//            cout<<c ; 
//         }
//         cout<<endl ; 
//     }
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ;
// int main(){
//     int n ; 
//     cin>>n ; 
//     for(int i = 1 ; i<= n ; i++){
//         for(int k = 1 ; k<= n-i; k++){
//             cout<<" " ;
//         }
//         for(int j = 1 ; j<= i ;j++ ){
//             cout<<"* ";
//         }
//         cout<<endl ; 
//     }
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ; 
// int main(){
//     int n ;
//     cin>>n ; 
//     for(int i = 1 ; i<=n ; i++){
//         for(int j = 1 ; j<= n-i ; j++){
//             cout<<" " ; 
//         }
//         for(int k = 1 ; k<= i ; k++){
//             cout<<k<<" ";
//         }
//         cout<<endl ; 
//     }
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ; 
// int main(){
//     int n ; 
//     cin>>n ; 
//     char c ; 
//     for(int i = 1 ; i <= n ;i++){
//         for(int j = 1 ; j<= n-i ; j++){
//             cout<<" " ; 
//         }
//         for(int k = 0 ; k<i ; k++){
//             c = 'A' + k ; 
//             cout<<c ;
//         }
//         cout<<endl ; 
//     }
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ; 
// int main(){
//     int n ; 
//     cin>>n ; 
//     char c ; 
//     for(int i = 1 ; i <= n ;i++){
//         for(int j = 1 ; j<= n-i ; j++){
//             cout<<" " ; 
//         }
//         for(int k = 1  ; k <= i; k++){
//            // c = 'A' + k ; 
//             cout<<char('A' + k -1);
//         }
//         for(int k = i-1 ; k>= 1 ; k--){
//             cout<<char('A'+ k -1 ) ; 
//         }
//         cout<<endl ; 
//     }
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ; 
// int main(){
//     int n ; cin>>n ; 
//     for(int i = 1 ; i<= n ; i++){
//         for(int j = 1 ; j<= n-i ; j++){
//             cout<<" " ; 
//         }
//         for(int k = 1 ; k<= i ; k++){
//             cout<<"* ";
//         }
//         cout<<endl ; 
//     }
   
//     for(int i = 1 ; i<= n ; i++){
//         for(int j = 1 ; j<= i-1 ; j++ ){
//             cout<<" " ; 
//         }
//         for(int k = n ; k>=i ; k--  )
//         {
//             cout<<"* " ; 
//         }
//         cout<<endl ; 
//     }
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ;
// int main(){
//     int temp ; 
//     cin>>temp ; 
//     if(temp > 70 && temp<90 ) {
//         cout<<" suitable for swimming";
//     }
//     else{
//         cout<<"no" ;     }
//         return 0 ; 
// }

// #include<iostream>
// using namespace std ; 
// int main(){
//     int n ; 
//     cin>>n ; 
//     if(n%2 ==0 && n>0 ){
//         cout<<"yes" ; 
//     }
//     else{
//         cout<<"no" ; 
//     }
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ; 
// int main(){
//     int age ; 
//     cin>>age ; 
//     if(age > 13 && age<19){
//         cout<<"teenager";
//     }
//     else{
//         cout<<"not teenager" ;
//     }
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ;
// int main(){
//     int a,b,c;
//     cin>>a ; 
//     cin>>b ; 
//     cin>>c ; 
//     if(a>b && a>c ){
//         cout<<"yes";
//     }
//     else{
//         cout<<"not" ; 
//     }
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ;
// int main(){
//     if(2*3-48 == 5/4*6){
//         cout<<"yes" ;
//     }
//     else if(6<<2-4*8/2){
//         cout<<"second yes";
//     }
//     else if(5>4<3/2-8%4+5){
//         cout<<"third yes"; 
//     }
//     else if(14-8+92>>2+70){
//         cout<<"fourth yes" ;
//     }
//     else{
//         cout<<"no" ; 
//     }
//     return 0 ; 
// }
// #include<iostream>
// using namespace std ; 
// int main(){
//     int n ; 
//     cin>>n ; 
//     int i = 1 ;
//     while(i < n){
//         if(i%2 == 0){
//             cout<<i;
//         }
//         i++ ; 
//     }
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ; 
// int fact(int n ) {
//     int ans = 1 ; 
//     int i = 1 ; 
//     while(i<=n){
//         ans = ans * i  ;
//         i++ ; 
//     }
//     //return n*(n-1) + fact(n-1) ; 
//     return ans ; 
// }
// int main(){
//     int n ; 
//     cin>>n ; 
    
//     cout<<fact(n) ; 
//     return 0 ; 
// }


// #include<iostream>
// using namespace std ; 
// int main(){
//     int n ; 
//     cin>>n ; 
//     int i = 1 ; 
//     while(i <= n) {
//         if(i%3 != 0 && i%5 != 0)
//         cout<<i ; 
//         i++ ;
//     }
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ; 
// int main(){
//     char c = 'a' ;  
//     while(c<='z'){ 
//         cout<<c<<" " ; 
//         c++ ; 
//     }
//     cout<<endl ; 
//     char C = 'A' ; 
//     while(C< 'Z'){
//         cout<<C<<" " ; 
//          C++ ; 
//     }
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ; 
// int main(){
//     int n ; 
//     cin>> n ; 

//     if(n<= 1){
//         cout<<"not prime" ; 
//         return 0 ; 
//     }
//     int i = 2 ; 
//     bool isprime = true ; 

//     while(n%i == 0) {
//         isprime = false ; 
//         break ; 
//     }
//     i++ ; 

//     if(isprime){
//         cout<<" prime number " ; 
//     }
//     else{
//         cout<<"not prime" ; 
//     }
// }

// #include<iostream>
// #include<math.h>
// using namespace std ; 
// int main(){
//     string binary ; 
//     cin>>binary ; 
//     int decimal = 0 ; 
//     int n = binary.size() ; 
//     for(int i = 0 ; i<n ;i++){
//         decimal = decimal *2 + (binary[i] - '0');
//     }
//     cout<<decimal ; 
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ; 
// int main(){
//     int s ;
//     cin>>s ; 

//     int ans = 0 ; 
//     int binary[32] ; 
//     while(s>0){
//         binary[ans] = s%2 ; 
//         s = s/2 ; 
//         ans++ ; 
//     }
//     for(int i = ans-1 ; i>= 0 ; i--) {
//         cout<<binary[i] ; 
//     }
//      return 0 ; 
// }

// #include<iostream>
// using namespace std ; 
// int main(){
//     int n ; 
//     cin>>n ; 

//     int ans = 0 ; 
//     int octal[32] ;
//     while(n>0){
//         octal[ans] = n%8 ; 
//         n = n/8 ;  
//         ans++ ; 
//     }
//     for(int i = ans-1 ; i>= 0 ; i--){
//         cout<<octal[i] ; 
//     }
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ; 
// int main(){
//     string octal ; cin>>octal ; 

//     int decimal = 0 ; 
//     int n = octal.size() ; 
//     for(int i = 0 ; i<n ; i++){
//         decimal = decimal * 8 + (octal[i] - '0') ; 
//     }
//     cout<<decimal ; 
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ;
// int main(){
//     string binary ; 
//     cin>>binary ; 

//     int ans = 0 ; 
//     int decimal = 0 ; 
//     int octal[32] ; 
//     int n = binary.size() ; 
//     for(int i = 0 ; i< n ; i++){
//         decimal = decimal * 2 + (binary[i] -'0') ; 
//     }
//     while(decimal>0){
//         octal[ans] = decimal%8 ; 
//         decimal = decimal/ 8 ; 
//         ans++ ; 
//     }
//     for(int i = ans-1 ; i>= 0 ; i--){
//         cout<<octal[i] ; 
//     }
//     return 0 ; 
// }


// #include<iostream>
// using namespace std ; 
// int main(){
//     string octal ; 
//     cin>>octal ; 

//     int binary[32] ; 
//     int ans = 0 ; 
//     int decimal = 0 ; 
//     int n = octal.size() ; 
//     for(int i = 0  ; i<n ; i++){
//         decimal = decimal* 8 + (octal[i] -'0') ; 
//     }
//     while(decimal>0){
//         binary[ans] = decimal%2 ; 
//         decimal = decimal/2 ; 
//         ans++ ; 
//     }
//     for(int i = ans-1 ; i>=0 ; i--){
//         cout<<binary[i] ;  
//     }
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ; 
// int main(){
//     int n ; 
//     cin>>n ; 
// int sum = 0 ; 
//     while(n>9){
        
//         while(n>0){
//             sum = sum+n%10 ; 
//             sum = sum/10 ; 
//         }
//     }
//     cout<<sum ; 
//     return 0 ; 
// }

//power of two 
// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         if(n<= 0) {
//             return false ; 
//         }
//         while(n%2 == 0){
//             n = n/2 ; 
//         }
//         return n == 1 ; 
//     }
// };

//square root 
// class Solution {
// public:
//     int mySqrt(int x) {
//         if(x == 0 || x ==1 ){
//             return x ; 
//         }
//         long long start = 0 , end = x ; 
//         long long mid ; 
//         long long ans = 0 ; 
//         while(start<= end){
//             mid = start + (end-start)/2 ; 
//             if(mid*mid == x){
//                 return mid ; 
//             }
//             else if(mid*mid <= x){
//                 ans = mid ; 
//                 start = mid+ 1  ; 
//             }
//             else{
//                 end = mid -1  ; 
//             }
//         }
//         return ans ; 
//     }
// };

// #include<iostream>
// using namespace std ;
// int cube(int n) {
//     int ans = n *n*n ; 
//     return ans ; 
// }
// int main(){
//     int  n ; 
//     cin>>n ; 

//     cout<<cube(n) ; 
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ; 

// // function to reverse number 

// int reverse(int n){
// int rev = 0 ; 
// int sign = (n<0) ? -1 : 1 ; 
// n = abs(n) ; 
// while(n>0){
//     int digit = n%10 ; 
//     rev = rev *10 +digit ; 
//     n = n/10 ; 
// }
// return sign*rev ; 
// }
// int main(){
//     int n ; 
//     cin>>n ; 
//     if(n< -5000 ||n>5000){
//         cout<<" out of range" ; 
//         return 0 ; 
//     }

//     cout<<reverse(n) ; 
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ; 
// void swap(int &a , int &b){
//      a = a+b ; 
//      b = a-b ; 
//      a = a-b;
// }
// int main(){
//     int a , b ; 
//     cout<<"a:" ; 
//     cin>>a ;
//     cout<<"b:" ; 
//     cin>>b ; 
//     if( a <-1000|| b<-1000 || b>1000 || a >1000){
//         cout<<"out of range" ; 
//         return 0 ; 
//     }
    
//     swap(a,b); 
//     cout<<"a:"<<a<< " "<<"b:"<< b ;
//     return 0 ; 
// }


// // #include<iostream>
// using namespace std ; 
// void fun(int a) {
//     for(int i = 0 ; i< a ; i++){
//         cout<<" hello coder army " ; 
//     }
// }
// int main(){
//     int a ; 
//     cin>>a ; 
//     fun(a);
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ; 
// int fact(int m ){
//     int fact = 1 ; 
//     for(int i = 1 ; i<= m ; i++){
//         fact = i * fact ; 
//     }
//     return fact ; 
// }
// int ncr(int n , int r) {
//     int ncr = fact(n)/fact(r)*fact(n-r) ; 
//     return ncr ; 
// }
// int main(){
//     int n , r ; 
//     cout<<"N:" ; 
//     cin>>n ;
//     cout<<"R:";
//     cin>>r ; 

//     cout<<ncr( n , r) ; 
//     return 0  ; 

// }


