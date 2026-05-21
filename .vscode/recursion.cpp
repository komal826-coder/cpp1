// A function which calls itself again and again 
// Until a specific condition met  => base case 

//                     recurssive tree     
//                        fun(3) 
//                 cout            fun(2) 
//                            cout        fun(1) 
//                                   cout         fun(0) 
//                                              happy birthday 

// print(n) = n days left for birthday , print(n-1) 

// happy birthday 
// #include<iostream>
// using namespace std ; 
// void fun(int n ) {
//     //base case 
//     if(n== 0 ) {
//         cout<<"happy birthday";
//         return ; 
//     }
//     cout<<n<<" days left for birthday" ; 
//     cout<<endl ;
//     fun(n-1) ; 
// }
// int main(){
//     fun(3) ; 
//     return 0 ; 
// }


//print n to 1 ; 
// #include<iostream>
// using namespace std ;
// void num(int n) {
//     if(n == 1) {
//         cout<<"1" ; 
//         return ;
//     }
//     cout<<n ; 
//     num(n-1) ; 
// }
// int main(){
//     int n ; 
//     cin>>n ; 
//     num(n) ; 
//     return 0 ;
// }

// n to 1 print even number 
// #include<iostream>
// using namespace std ; 
// void even(int n ) {
// //     if(n == 0) {
// //         cout<<"0" ; 
// //         return ; 
// //     }
// //     if(n%2 == 0) {
// //         cout<<n ; 
// //         cout<<endl ; 
// //     }
// //     even(n-1) ;
// }
// int main(){
//     int n ; 
//     cin>>n ; 
//     even(n) ; 
//     return 0 ; 
// }

// print 1 to n ; 
// #include<iostream>
// using namespace std ;
// void print(int num , int n) {
//     if(num == n){
//         cout<<n ; 
//         return ; 
//     }
//     cout<<num<<endl ; 
//     print(num+1 , n) ; 
// }
// int main(){
//     int n ; 
//     cin>>n ; 
//     int num =1 ; 
//     print(num , n) ;    
// }

//print 1 to n 
// print(n) = print(n-1) , n
// #include<iostream>
// using namespace std ;
// void print(int num) {
//     if(num == 1){
//         cout<<1 ; 
//         return ; 
//     }
//     print(num-1 ) ;
//     cout<<endl; 
//     cout<<num ; 
// }
// int main(){
//     int num ; 
//     cin>>num ; 
//     print(num) ;    
// }

// print 1 to n ( even number) 
// #include<iostream>
// using namespace std ;
// void print ( int num , int n ) {
//     if( num > n ){
//         return ; 
//     }
//     cout<<num ; 
//     print(num-2 , n) ;
// }
// int main(){
//     int n ; 
//     cin>>n ; 
//     print(2, n) ; 
// }

// #include<iostream>
// using namespace std ; 
// void print( int n) { 
//     if( n == 2) { 
//         cout<<"2"<<endl ; 
//         return ; 
//     }
//    print( n-2) ; 
//    cout<<n<<endl ; 
// }
// int main(){
//     int n ; 
//     cin>>n ; 
//     if( n % 2 == 1) {
//         n-- ; 
//     }
//     print(n) ; 
// }

// factorial 
// #include<iostream> 
// using namespace std ; 
// int fact( int n){
//     if( n == 0 ) { 
//         return 1 ;
//     }
//    return n * fact(n-1); 
// }
// int main(){
//     int n ; 
//     cin>>n ; 
//     if(n < 0) { 
//         cout<< " factorial is not possible ";
//         return 0 ; 
//     }
//     cout<<fact(n)<<endl  ; 
//     return 0 ; 
// }

  
// sum of n number 
// #include<iostream> 
// using namespace std ; 
// int sum( int n) {
//     if(n == 0) { 
//         return 0 ; 
//     }
//     return n + sum(n-1) ; 
// }
// int main(){
//     int n ; 
//     cin>>n ; 
//     sum(n) ; 
//     cout<<sum(n)<<endl ;  
//     return 0 ; 
// }

// power of 2 
// #include<iostream>
// #include<climits>
// using namespace std ; 
// int power(int num , int n ) { 
//     if( n == 0) { 
//         return 1 ; 
//     }
//     return num * power(num , n-1) ;
// }
// int main(){
//     int n ; 
//     cin>> n ; 
//     int num = 2 ; 
//     power(num , n) ; 
//     cout<<power(num,n)<<endl ; 
//     return 0 ; 
// }

// sum of squre of n number 
// #include<iostream> 
// using namespace std; 
// int square(int n){
//     if(n == 1) { 
//         return 1 ; 
//     }
//      return n*n + square(n-1) ;
// }
// int main(){
//     int n ; 
//     cin>>n ; 
//     cout<<square(n) ; 
//     return 0 ; 
// }

//fibonacci series 
// #include<iostream>
// using namespace std ; 
// int fibo(int n ) {
//     if( n <= 1 ) {
//         return n ; 
//     }
//     return fibo(n-1) + fibo(n-2) ; 
// }
// int main(){
//     int n ; 
//     cin>>n ; 
//     cout<<fibo(n)<<" ";
//     return 0 ; 
// }

//gcd of 2 number 
// example => 
// (18 , 48 ) // ( a , b) 
// (48 , 18 ) // ( b , a%b)
// (18 , 12 ) // ( b , a%b) 
// (12 , 6  )
// (6  , 0  )  // answer = 6 

// #include<iostream>
// using namespace std ; 
// int gcd(int num1 , int num2 ){
//     if( num2 == 0 ) { 
//         return num1 ; 
//     }
//  return gcd(num2 , num1%num2) ;
// }
// int main(){
//     int num1 ; 
//     cin>>num1 ; 
//     int num2 ; 
//     cin>>num2 ; 
    
//    cout<<gcd( num1 , num2) ; 
// }

// print array 
// #include<iostream>
// using namespace std ; 
// void point( int arr[] , int index , int n ) { 
//     if(index == n) {
//         return ; 
//     }
//     cout<<arr[index]<<" " ; 
//     point(arr, index+1, n);
// }
// int main(){
//     int arr[5] = { 2,3,4,5,8} ; 
//     int index =0 ; 
//     int n  = 5 ; 
//     point(arr , index, n) ; 
//     return 0 ; 
// }


// #include<iostream>
// using namespace std ;
// void point( int arr[] , int index ) {
//     if ( index == -1 ) {
//         return  ; 
//     }cout<<arr[index] ; 
//     point(arr,index-1) ; 
// }
// int main(){
//     int arr[5] = { 1,2,3,4,5} ; 
//     int index = 5; 
//     point( arr , index ) ; 
//     return 0 ; 
// }

 // sum of array 
//  #include<iostream>
//  using namespace std ; 
//  int sum( int arr[] , int index ){
//     if( index == -1 ) { 
//         return 0 ; 
//     }
//     return arr[index]+ sum(arr, index-1 ) ; 
    
//  }
//  int main(){
//     int arr[] = { 1,2,3,4,5} ; 
//     sum(arr , 5) ; 
//     cout<<sum ; 
//     return 0 ; 
//  }

// #include<iostream>
//  using namespace std ; 
//  int sum( int arr[] , int index , int n){
//     if( index == n ) { 
//         return 0 ; 
//     }
//     return arr[index]+ sum(arr, index+1 , n) ; 
    
//  }
//  int main(){
//     int arr[] = { 1,2,3,4,5} ; 
//     cout<<sum(arr , 0 , 5) ; 
//     return 0 ; 
//  }

// find minimum element 
// #include<iostream>
// using namespace std ; 
// int min(int arr[] , int index ,int n) {
//     if( index == n-1) {
//         return arr[index] ; 
//     }
//     return min(arr[index] , min(arr , index+1,n )) ; 
// }
// int main(){
//     int arr[] = { 3,4,21,4} ; 
//     cout<<min(arr , 0 , 5 ) ; 
//     return 0 ; 
// }

// maximum element
// #include<iostream>
// using namespace std ; 
// int min(int arr[] , int index ,int n) {
//     if( index == n-1) {
//         return arr[index] ; 
//     }
//     return max(arr[index] , min(arr , index+1,n )) ; 
// }
// int main(){
//     int arr[] = { 3,4,21,4,5} ; 
//     cout<<min(arr , 0 , 5 ) ; 
//     return 0 ; 
// }

//