// size of array start with 0
//     //address depend on data type 
//     // ADDRESS = arr + index* size of data type 
//     // int = 32 bit and 4 byte 

// 1st method of inserstion 
// #include<iostream>
//  using namespace std ;
//  int main(){
//     int arr[5] = { 1,2,3,4,5} ;  // array =>arr , size of araay store in [] , 
//     
//     for(int i = 0 ; i<5 ; i++){
//         cout<<arr[i] ; 
//     }
//     return 0 ; 
//  }

//2nd method of inserstion 
// #include<iostream>
// using namespace std ;
// int main(){
//     //int arr[] = { 1,2,3,4} ; 
//     int arr [5] = { 1,2,3} ; 
//     for(int i = 0 ;i<= 3 ; i++){
//         cout<<arr[i] ; 
//     }
//     return 0 ; 
// }

//char type array  => 1 byte , 8 bit 
// #include<iostream>
// using namespace std ; 
// int main(){
//     char arr[4] = { 'a','b','c','d'} ; 
//     for(int i = 0 ; i<4 ; i++){
//         cout<<arr[i] ; 
//     }
//     return 0 ;
// }

//intialize by 0 
// #include<iostream>
// using namespace std ;
// int main(){
//     int arr[6] = {0} ; 
//     for(int i = 0; i < 6 ; i++){
//         cout<<arr[i] ; 
//     }
//     return 0 ; 
// }

//input by user 
// #include<iostream>
// using namespace std ; 
// int main(){
//     int arr[9] ;

//     cout<<"size of array:"<<sizeof(arr)<<endl ;  //36 => 9*4
//     cout<<"number of element :"<<sizeof(arr)/sizeof(arr[0])<<endl ;   // 36/4 =>9
//     for(int i = 0 ; i<9 ; i++) {
//         cin>>arr[i] ; 
//     }
//     for(int i = 0 ; i<9 ; i++) {
//         cout<<arr[i] ; 
//     }
//     return 0 ; 
// }

// find min value 
// #include<iostream>
// #include<climits>
// using namespace std ; 
// int main(){
//     int arr[5] = { 7,4,8,3,2} ;

//     //min value 
//     int minAns = INT_MAX ;

//     for(int i = 0 ; i<5 ; i++){
//         if(arr[i]<minAns) {
//             minAns= arr[i] ; 
//         }
//     }
//     cout<<minAns<<endl ; 

//     //max value
//     int maxAns = INT_MIN ;

//     for(int i = 0 ; i<5 ; i++){
//         if(arr[i]>maxAns) {
//             maxAns = arr[i] ; 
//         }
//     }
//     cout<<maxAns ; 
//     return 0 ; 
// }

//sum of n element
// #include<iostream>
// using namespace std ; 
// int main(){
//     int arr[100] ; 
//     int sum = 0; 
//     for(int i = 0 ; i< 10 ; i++){
//         cin>>arr[i] ; 
//     }
//     for(int i = 0; i<10 ; i++){
//         sum = sum + arr[i] ; 
//     }
//     cout<<"sum:"<<sum ; 
//     return 0 ; 
// } 

//search element 
// #include<iostream>
// using namespace std ; 
// int main(){
//         int arr[6] ={10,20,4,7,11,8} ;
//         int x , index ;
//         cout<<"searching element:";
//         cin>>x ; 

//         for(int i = 0 ; i<6 ;i++){
//             if(arr[i] == x) {
//                 index = i ;
//                 break ;
//             }
//         }
//         cout<<"index:"<<index ;
//         return 0 ; 
// }

//reverse array 
// #include<iostream>
// using namespace std ; 
// int main(){
//       int arr[6] = { 2,5,8,3,5} ; 
//       int temp[6] ; 

//       for(int i = 0 ;i<6 ; i++){
//         cout<<arr[i]<<" "; 
//       }
//       int i = 5 , j = 0 ; 
//       while (i>= 0) {
//         temp[j] = arr[i] ; 
//         j++ ; 
//         i-- ; 
//       }
//       for(int j = 0 ;j<6 ;j++){
//         cout<<temp[j]<<" "; 
//       }
//       return 0 ; 
// }
 

// #include<iostream>
// using namespace std ; 
// int  main(){
//     int arr[6] = { 2,5,6,9,4,5} ;
//     int i , j ;

//     i =0 , j = 5 ;
//     while(i<j){
//         swap(arr[i] , arr[j]) ;
//         i++ ; 
//         j-- ; 
//     }
//     for(int j = 0 ; j<6 ; j++){
//     cout<<arr[j]<<" " ; 
//     }
//     return 0 ; 
// } 

//second highest number                  //check
// #include<iostream>
// #include<climits>
// using namespace std ; 
// int main(){
//     int arr[6]= { 2,5,8,3,6,1} ; int i ; 

//     for(int i = 0 ; i<6 ; i++){
//         cout<<arr[i] ; 
//     }
//     int minAns = INT_MIN ; 
//     //largest element
//     for(int i = 0 ; i<6 ; i++){
//         if(minAns <arr[i]) 
//         minAns = arr[i] ; 
//     }
//     //second largest element
//     if(minAns != arr[i]) {
//         minAns = max(minAns , arr[i]) ; 
//     }
// cout<<minAns ;
// return 0 ; 

// }

//missing number , unique number 
// #include<iostream>
// using namespace std ; 
// int main(){
//     int n ;
//     cout<<"n:" ; 
//     cin>>n ; 
//     int arr[n-1] = { 1,2,3,4,5,0} ; 
//     int sum = 0  ; 

//     // sum of element in an array 
//     for(int i = 0 ; i<n-1 ; i++){
//         sum = sum+arr[i] ; 
//     }

//     // sum of n number 
//     sum = n*(n+1)/2 - sum ; 

//     cout<<"missing element :"<<sum ; 
// }

//fibonacci series 
// #include<iostream>
// using namespace std ;
// int main(){
//     int n ; 
//     cout<<"enter n:" ;
//     cin>>n ; 
//     int arr[1000] ;
//     arr[0] = 0; 
//     arr[1] = 1 ;

//     for(int i = 2 ; i<n ; i++)
//         arr[i] = arr[i-1] + arr[i-2] ; 

//     cout<<arr[n-1]<<" " ;
//     return 0 ; 
// }

//rotate array by 1 
// #include<iostream>
// using namespace std ; 
// int main(){
//     int n ;
//     cout<<"enter n:" ; 
//     cin>>n ; 
//     int arr[100] ; 
//     for(int i = 0 ;i<n ; i++){
//         cin>>arr[i] ; 
//     }
//     int temp = arr[n-1] ; 

//     for(int i = n-2 ; i>= 0 ; i--){
//         arr[i+1] = arr[i] ; 
//     }
//     arr[0] = temp ; 
//     for(int i = 0 ; i<n ; i++){
//         cout<<arr[i]<<" " ; 
//     }
//     return 0 ; 
// }


//array with function 
// #include<iostream>
// using namespace std ; 
// void fun(int arr[] , int n ) {     // arr =>pointer (only address store) 4 bite => because computer 32 bit ka h  
//     cout<<sizeof(arr)<<endl ;
//     for(int i = 0 ; i<n ; i++){
//         cout<<arr[i]<<" " ; 
//     }
// }
// int main(){
//     int arr[5] = { 3,6,9,2,7} ;  // arr => array
//     cout<<sizeof(arr)<<endl ;  
//     fun (arr, 5) ; 
//     return 0 ; 
// }