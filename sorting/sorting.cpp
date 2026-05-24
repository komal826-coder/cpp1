 // sorting 

 //selection sort      //time complexity =>  , space complexity =>
//  #include<iostream>
//  using namespace std ; 
//  int main(){
//     int arr[6] = { 2,6,3,8,4,1} ;
//     for(int i = 0 ; i<5; i++){
//     int index = i ;                 //   check gadwad 
//     for(int j =i+1 ; j<6 ; j++){
//         if(arr[j] < arr[index]){
//         index= j ;
//     swap(arr[i],arr[index] ) ;
//         }
// }
//     }
//     for(int i = 0; i< 6 ;i++){
//         cout<<arr[i]<<" " ; 
//     }
//     return 0 ; 
//  }

// #include<iostream>
// using namespace std ; 
// int main(){
//     int arr[6] = { 5,3,8,9,1,6} ; 
//     for(int i = 0 ; i<5 ; i++){
//         int index = 5 ;

//         for(int j =0 ; j<4 ; j++){
//             if(arr[j]> arr[index]);
//         }
//         swap(arr[i] , arr[index] );
//     }  
//     for(int i = 0 ;i<6 ; i++){
//         cout<<arr[i]<<" " ; 
//     }
//     return 0 ; 
// }



// BUBBLE SORT 

// #include<iostream>
// using namespace std ; 
// int main(){
//     int arr[6] ={ 3,6,9,4,1,8};
    
//     for(int j = 0 ; j< 5 ; j++){        // for(i = n-2 ; i>=0 ;  i--)
//     for(int i =0;i<5;i++){
//         if(arr[i]>arr[i+1]){
//             swap(arr[i], arr[i+1]);
//         }
//     }
// }
// for(int i = 0 ; i<6 ; i++){
//     cout<<arr[i]<<" " ; 
// }
// return 0 ; 
// }

// #include<iostream>
// using namespace std ; 
// int main(){
//     int arr[6] ={ 3,6,9,4,1,8};
    
//     for(int j = 4 ; j>=0 ;  j--){
//     for(int i =0;i<5;i++){
//         if(arr[i]>arr[i+1]){
//             swap(arr[i], arr[i+1]);
//         }
//     }
// }
// for(int i = 0 ; i<6 ; i++){
//     cout<<arr[i]<<" " ; 
// }
// return 0 ; 
// }

//decreasing order 
// #include<iostream>
// using namespace std ; 
// int main(){
//     int arr[6] = { 1,6,9,4,8,15};
//     for(int i = 4 ; i>= 0 ; i--){
//         for(int j = 0 ; j <5 ; j++){
//             if(arr[j]<arr[j+1]){
//             swap(arr[j] , arr[j+1]);
//             }
//         }
//     }
//     for(int i = 0 ; i<6 ; i++){
//         cout<<arr[i]<<" " ; 
//     }
//     return 0 ; 
// }

//increasing order last se 
// #include<iostream>
// using namespace std ; 
// int main(){
//     int n ; 
//     cin>>n ; 
//     int arr[n] ;
//     for(int i = 0 ; i<n ;i++){
//         cin>>arr[i] ; 
//     }
//     for(int i = n-1 ; i>0 ; i-- ){
//         for(int j = n-1 ; j >= 1 ; j--){
//             if(arr[j] <arr[j-1]){
//                 swap(arr[j],arr[j-1]);
//             }
//         }
//     }
//     for(int i = 0 ; i<6 ; i++){
//         cout<<arr[i] ; 
//     }
//     return 0 ; 
// }


//insertion sort 
// #include<iostream>
// using namespace std ; 
// int main(){
//     int n ;
//     int arr[1000];
//     cin>>n ; 
//     for(int i = 0 ; i< n ;i++){
//         cin>>arr[i] ; 
//     }
    
//     for(int i = 1 ; i<n ; i++){
//         for(int j = i ; j>0  ;  j--){
//             if(arr[j] < arr[j-1]) {
//                 swap(arr[j] , arr[j-1]) ;
//             }
//             else 
//             break ; 
//         } 
//     }
//     for(int i = 0 ; i< n ; i++){
//         cout<<arr[i]<<" " ; 
//     }
//     return 0 ; 
// }

//decreasing order
// #include<iostream>
// using namespace std ; 
// int main(){
//     int n ;
//     int arr[1000];
//     cin>>n ; 
//     for(int i = 0 ; i< n ;i++){
//         cin>>arr[i] ; 
//     }
    
//     for(int i = 1 ; i<n ; i++){
//         for(int j = i ; j>0  ;  j--){
//             if(arr[j] > arr[j-1]) {
//                 swap(arr[j] , arr[j-1]) ;
//             }
//             else 
//             break ; 
//         } 
//     }
//     for(int i = 0 ; i< n ; i++){
//         cout<<arr[i]<<" " ; 
//     }
//     return 0 ; 
// }

//increasing order up to last 
// #include<iostream>
// using namespace std ; 
// int main(){
//     int n ;
//     int arr[1000];
//     cin>>n ; 
//     for(int i = 0 ; i<n;i++){
//         cin>>arr[i] ; 
//     }
    
//     for(int i = n-2 ; i>=0 ; i--){
//         for(int j = i ; j<n-1  ;  j++){
//             if(arr[j] > arr[j+1]) {
//                 swap(arr[j] , arr[j+1]) ;
//             }
//             else 
//             break ; 
//         } 
//     }
//     for(int i = 0 ; i< n ; i++){
//         cout<<arr[i]<<" " ; 
//     }
//     return 0 ; 
// }