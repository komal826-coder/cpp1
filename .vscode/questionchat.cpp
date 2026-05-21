// input and display a 2d array 
// #include<iostream>
// using namespace std ;
// int main(){
//     int arr[3][3] ; 
//     for(int i = 0 ;i < 3 ; i++){
//         for(int j = 0 ; j<3 ; j++){
//             cin>>arr[i][j] ; 
//         }
//         cout<<endl ; 
//     }
//     for(int i = 0 ;i < 3 ; i++){
//         for(int j = 0 ; j<3 ; j++){
//             cout<<arr[i][j] ; 
//         }
//         cout<<endl ;
//     }
//     return 0 ; 
// }

//sum lf all element 
// #include<iostream>
// using namespace std ; 
// int main(){
//     int sum = 0 ; 
//     int arr[3][3];
//     for(int i = 0 ;i < 3 ; i++){
//         for(int j = 0 ; j<3 ; j++){
//             cin>>arr[i][j] ; 
//         }
//         cout<<endl ; 
//     }
//     for(int i = 0 ;i < 3 ; i++){
//         for(int j = 0 ; j<3 ; j++){
//             cout<<arr[i][j] ; 
//         }
//         cout<<endl ;
//     }

//     for(int i = 0 ; i< 3 ; i++){
//         for(int j = 0 ; j< 3 ; j++) { 
//           sum  = sum + arr[i][j];
//         }
//     }
//     cout<<sum ; 
//     return 0 ; 
// }

//find maximum element 
// #include<iostream>
// #include<climits>
// using namespace std ; 
// int main(){
//     int arr[3][3] ; 
//     for(int i = 0 ;i < 3 ; i++){
//         for(int j = 0 ; j<3 ; j++){
//             cin>>arr[i][j] ; 
//         }
//         cout<<endl ; 
//     }
//     for(int i = 0 ;i < 3 ; i++){
//         for(int j = 0 ; j<3 ; j++){
//             cout<<arr[i][j] ; 
//         }
//         cout<<endl ;
//     }
//     int MAX =0 ;
//     for(int i = 0 ; i< 3 ; i++){
//         for(int j = 0 ; j< 3 ; j++){
//             MAX = max(MAX , arr[i][j] );
//         }
//     }
//     cout<<MAX ; 
//      return 0 ; 
// }

// row wise sum 
// #include<iostream>
// using namespace std ; 
// int main(){
//     int rsum = 0 ; 
//      int arr[3][3] ; 
//      for(int i = 0 ;i < 3 ; i++){
//         for(int j = 0 ; j<3 ; j++){
//             cin>>arr[i][j] ; 
//         }
//         cout<<endl ; 
//     }
//     for(int i = 0 ;i < 3 ; i++){
//         for(int j = 0 ; j<3 ; j++){
//             cout<<arr[i][j] ; 
//         }
//         cout<<endl ;
//     }
//       for(int i = 0 ; i< 3 ; i++){
//         for(int j = 0 ; j< 3 ; j++){
//            rsum = rsum + arr[i][j] ; 
//         }
//         cout<<rsum ; 
//         rsum = 0 ; 
//       }
//       return 0 ; 
// }

//column wise sum 
// #include<iostream>
// using namespace std ; 
// int main(){
//     int csum = 0 ; 
//      int arr[3][3] ; 
    //  for(int i = 0 ;i < 3 ; i++){
    //     for(int j = 0 ; j<3 ; j++){
    //         cin>>arr[i][j] ; 
    //     }
    //     cout<<endl ; 
    // }
    // for(int i = 0 ;i < 3 ; i++){
    //     for(int j = 0 ; j<3 ; j++){
    //         cout<<arr[i][j] ; 
    //     }
    //     cout<<endl ;
    // }
      
//     for(int j = 0 ; j< 3 ; j++){
//         for(int i = 0 ; i< 3 ; i++){
//            csum = csum + arr[i][j] ; 
//         }
//         cout<<csum ; 
//         csum = 0 ; 
//       }
//       return 0 ; 
// }

//matrix transpose 
// #include<iostream>
// using namespace std ;
// int main(){
    // int arr[3][3] ; 
    //      for(int i = 0 ;i < 3 ; i++){
    //     for(int j = 0 ; j<3 ; j++){
    //         cin>>arr[i][j] ; 
    //     }
    //     cout<<endl ; 
    // }
    // for(int i = 0 ;i < 3 ; i++){
    //     for(int j = 0 ; j<3 ; j++){
    //         cout<<arr[i][j] ; 
    //     }
    //     cout<<endl ;
    // }
    // cout<<endl ;

//     for(int j = 0 ; j < 3 ; j++){
//         for(int i = 0 ; i< 3 ; i++){
//             cout<<arr[i][j] ; 
//         }
//         cout<<endl ; 
//     } 
//     return 0 ;
// }

// diagonal sum 
// #include<iostream>
// using namespace std ; 
// int main(){
//     int primarysum = 0 ; 
//     int secondarysum = 0 ; 

//     int arr[3][3] ; 
//         for(int i = 0 ;i < 3 ; i++){
//     for(int j = 0 ; j<3 ; j++){
//         cin>>arr[i][j] ; 
//     }
//     cout<<endl ; 
// }
// //input 
// for(int i = 0 ;i < 3 ; i++){
//     for(int j = 0 ; j<3 ; j++){
//         cout<<arr[i][j] ; 
//     }
//     cout<<endl ;
// }
// cout<<endl ;

// for(int i = 0 ; i < 3 ; i++){
//     for(int j = 0 ; j< 3 ; j++){
//         if( i == j ) {
//             primarysum = primarysum += arr[i][j]; 
//         }
//         secondarysum += arr[i][3-i-1] ;
//     }
// }
// cout<<"primarysum"<<primarysum<<endl ; 
// cout<<"secondarysum"<<secondarysum ; 
// return 0 ; 

// }
// #include <iostream>
// using namespace std;

// int main() {
//     int r, c, key;

//     cout << "Enter rows and columns: ";
//     cin >> r >> c;

//     int arr[r][c];

//     // Input
//     cout << "Enter elements:\n";
//     for(int i = 0; i < r; i++) {
//         for(int j = 0; j < c; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     cout << "Enter element to search: ";
//     cin >> key;

//     bool found ;

//     // Search
//     for(int i = 0; i < r; i++) {
//         for(int j = 0; j < c; j++) {
//             if(arr[i][j] == key) {
//                 cout << "Found at position (" << i << ", " << j << ")";
//                 found = 1;
//                 break;
//             }
//         }
//         if(found == 1)
//             break;
//     }

//     if(found == 0)
//         cout << "Not Found";

//     return 0;
// }

// count even and odd number 
// #include<iostream>
// using namespace std ; 
// int main(){
//     int arr[3][3] ; 
//     int numbereven = 0 ; 
//     int oddnumber = 0; 
//     for(int i = 0 ; i< 3 ; i++){
//         for(int j = 0 ; j< 3 ; j++){
//             cin>>arr[i][j] ; 
//         }
//         cout<<endl ; 
//     }
//     for(int i = 0 ; i < 3 ; i++){
//         for(int j = 0 ; j<3 ; j++){
//             cout<<arr[i][j] ; 
//         }
//         cout<<endl ; 
//     }
//     for(int i = 0 ; i< 3 ; i++){
//         for(int j = 0; j < 3 ; j++){
//             if(arr[i][j] % 2 == 0 ) {
//                 numbereven++ ;
//             }
//             else
//             oddnumber++ ;
//     }
// }
//     cout<<"even = " << numbereven ; 
//     cout<<"odd = " << oddnumber ; 
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ; 
// int main(){
//     int a = 10 ; 
//     int *p = &a ; 
//     int **q = &p ; 

//     cout<<a<<endl ; 
//     cout<<p<<endl ; 
//     cout<<*p<<endl ; 
//     cout<<q<<endl ; 
//     cout<<**q<<endl ; 
//     cout<<&q<<endl ; 
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ; 
// void value(int **p ) {
//     **p = 45 ; 
// }
// int main(){
//     int a = 90 ; 
//     int *q = &a ;
//     int **p = &q ; 

//     value(p) ; 
//     cout<<a ; 
// }

// #include<iostream>
// using namespace std; 
// void swap (int **p , int **q) {
//     int *temp ;
//     temp = *p ; 
//     *p = *q ; 
//     *q = temp ; 
// }
// int main(){
//     int a = 45 ; 
//     int b = 9 ; 
//     int *p = &a ; 
//     int *q = &b ; 
//     cout<<*p<<endl<<*q<<endl ;
//     swap( &p , &q) ; 
//     cout<<a<<endl ; 
//     cout<<b<<endl ; 
//     cout<<*p<<endl ; 
//     cout<<*q<<endl ; 
//     return 0 ; 
// }

#include<iostream>
using namespace std ; 
int main(){
    int *p = new int[4] ; 
    int**q = &p ; 
}