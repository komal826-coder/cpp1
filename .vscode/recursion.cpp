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

//check recursion 
// #include<iostream>
// using namespace std ;
// bool checkpal(string str , int start , int end ){
//     //base condition 
//     if(start >= end){
//         return 1 ; 
//     }
//     if(str[start] != str[end] ){
//         return 0 ; 
//     }
//     else{
//         return checkpal(str,start+1 , end-1) ; ; 
//     }
    
// }
// int main(){
//     string str = "namat" ; 

//     cout<<checkpal(str,0,4) ; 
//     return 0 ; 
// }

//count vowels 
// #include<iostream>
// using namespace std ;
// int count(string str , int start , int end ){
//     if(start>=end) {
//         return 0; 
//     }
//     if(str[start] == 'a'|| str[start] == 'e'||str[start] =='i'||str[start] =='o'||str[start] =='u'){
//         return 1 + count(str , start+1 , end-1) ;
//     }
//     else{
//         return count(str , start+1 , end-1) ;
//     }
    
// }
// int main(){
//      string str = "komal" ; 
//      cout<<count(str , 0  ,4 ) ; 
//      return 0 ; 
// }


// #include<iostream>
// using namespace std ;
// int count(string str , int index ){
//     if(index == -1) {
//         return 0; 
//     }
//     if(str[index] == 'a'|| str[index] == 'e'||str[index] =='i'||str[index] =='o'||str[index] =='u'){
//         return 1 + count(str , index-1) ;
//     }
//     else{
//        return  count(str , index-1 ) ;
//     }
    
// }
// int main(){
//      string str = "koeal" ; 
//      cout<<count(str , 4 ) ; 
//      return 0 ; 
// }

//reverse a string 
// #include<iostream>
// using namespace std ;
// void reverse(string &str , int start , int end) {
//     if(start >= end){
//         return ; 
//     }
//     char c = str[start] ;
//     str[start] = str[end] ;
//     str[end] = c ;  
// reverse(str , start+1 , end-1 ) ; 
// }  
// int main(){
//      string str = "komal" ; 
//      reverse(str , 0 , 4 ) ; 
//      cout<<str<<endl;
//      return 0 ;   
// }

//lower case to upper 
// #include<iostream>
// using namespace std ;
// void lowertoupper(string &str , int index){
//     if(index == -1){
//         return ; 
//     }
//     str[index] = 'A'+str[index]-'a';
//     lowertoupper(str , index-1) ; 
// }
// int main(){
//      string str = " komal" ; 
//      lowertoupper(str ,4);
//      cout<<str ; 
//      return 0 ; 
// }

//linear search 
// #include<iostream>
// using namespace std ; 
// bool linear(int arr[] , int index , int x , int n) {
//     if(index== n){
//         return 0 ; 
//     }
//     if(arr[index] == x){
//         return 1 ; 
//     }
//     else{
//         return linear(arr , index+1 , x , n) ; 
//     }
// }
// int main(){
//      int arr[] = { 2,4,6,8,3,4,5,9} ; 
//      int x = 6 ; 
//      cout<<linear(arr, 0 , x , 7) ;
//      return 0 ;
// }

//linear search with index
// #include<iostream>
// using namespace std ; 
// int linear(int arr[] , int index , int x , int n) {
//     if(index== n){
//         return -1 ; 
//     }
//     if(arr[index] == x){
//         return index ; 
//     }
//     else{
//         return linear(arr , index+1 , x , n) ; 
//     }
// }
// int main(){
//      int arr[] = { 2,4,6,8,3,4,5,9} ; 
//      int x = 6 ; 
//      cout<<linear(arr, 0 , x , 7) ;
//      return 0 ;
// }

//binary search 
// #include<iostream>
// using namespace std ; 
// int binary( int arr[] , int start , int end , int x) {
//     int mid = start + ((end-start)/2) ; 
//     if(start>end) {
//         return -1 ; 
//     }
//     if(arr[mid] == x) {
//         return mid ; 
//     }
//     else if(arr[mid] < x ){
//         return binary(arr , mid+1 , end , x) ;
//     }
//     else{
//         return binary(arr,start,mid-1 , x) ; 
//     }
// }
// int main(){
//     int arr[] = { 3,8,11,15,20,22}  ;// non-decrning order 
//     int x = 20 ; 
//     cout<<binary( arr , 0 , 5 , x) ; 
//     return 0 ; 
// }

// time and space complexity 
// TOTAL TIME TAKEN BY AN ALGORITHM TO RUN OR A FUNCTION OF ITS INPUT SIZE

// time complexity => print(n) == o(n) == 1 + print(n-1) => 1 + print(n-2).......=>1 + print(1)== 1+1 == 2 => print(1) == 1 

// T(n) = 1 + T(n-1)  == k + T(n-k)

//space complxity => print(n) = o(n) 
//space complxity => reference variable => o{n^2)

// time complexity of binary search  => o( log(base 2)n pppp
//space complexity of binary search => o(log(base 2)n

//time complexity of fibonacci series => o(2^n) 
//space complexity of fibonacci series => o(n)       hint = sbse bda tree (check stack ) 

