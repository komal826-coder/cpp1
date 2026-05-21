//trapping rain waterr
//time complixisity = o(n)  space complxisity = o(n) 
// #include<iostream>
// #include<vector>
// using namespace std ; 
// int main(){
//     int height[1000];
//     int n  ; 
//     cout<<"enter n:" ; 
//     cin>>n ; 
//    for( int i = 0 ; i<n;i++){
//         cin>>height[i] ; 
//     }
//     int leftmax[n] , rightmax[n] ; 
//     leftmax[0] = 0 ; 
//     for(int i = 1; i<n ;i++){
//         leftmax[i] = max(leftmax[i-1] , height[i]) ; 
//     }rightmax[n-1] = 0 ;
//     for( int i = n-2 ; i>=0 ; i--){
//         rightmax[i] = max(rightmax[i+1] , height[i]);
//     }
//     int water = 0 ; 
//     for(int i = 0 ; i<n ; i++){
//     int miniheight = min(leftmax[i] , rightmax[i]) ; 
//     if(miniheight-height[i] > 0) {
//         water += miniheight - height[i] ;
//     }
// }
// cout<<water ;
//     return 0 ; 
// }

//time complxity = o(n) space complxisity = o(1) 
// #include<iostream>
// #include<vector>
// using namespace std ; 
// int main(){
//     int height[1000];
//     int n  ; 
//     cout<<"enter n:" ; 
//     cin>>n ; 
//    for( int i = 0 ; i<n;i++){
//         cin>>height[i] ; 
//     }
//     int maxleft = 0 , maxright = 0 , water=0 ,index = 0 , maxheight = height[0]; 
//     for(int i = 1 ; i<n ; i++){
//         if(maxheight < height[i]){
//         maxheight = height[i] ;
//         index = i ; 
//         }
//     }
//     //left part 
//         for(int i = 0 ; i<index ; i++){
//             if(maxleft > height[i])
//             water += maxleft - height[i] ; 
//             else
//             maxleft = height[i] ; 
//         }
//         //right part
//         for(int i = n-1 ; i> index ; i--){
//             if(maxright > height[i])
//                 water += maxright - height[i] ; 
//             else
//                 maxright = height[i] ; 
//         }
//      cout<<water ; 
//     return 0 ; 
// }

// 3 sum 
//time complxisity = o(n^3) 

// #include<iostream>
// using namespace std ; 
// int main(){
//     int arr[1000] ; 
//     int n ; 
//     cout<<"enter n:" ; 
//     cin>>n ; 
//     for(int i = 0 ; i< n ;i++){
//         cin>>arr[i] ; 
//     }
//     int x ; 
//     cout<<"enter x:" ; 
//     cin>>x ; 
//     for(int i = 0 ; i<n-2 ; i++){
//         for(int j = i+1 ; j<n-1 ; j++){
//             for(int k = j+1 ; k <n; k++){
//                 if(arr[i] + arr[j] +arr[k] == x) {
//                     cout<< " yes" ; 
//                 }
//             }
//         }
//     }
//     return 0 ; 
// }

// time complxsity = o(n^2)
// #include<iostream>
// using namespace std ; 
// int main(){
//     int arr[1000] ; 
//     int n ; 
//     cout<<"enter n:" ; 
//     cin>>n ; 
//     for(int i = 0 ; i< n ;i++){
//         cin>>arr[i] ; 
//     }
//     int x ; 
//     cout<<"enter x:" ; 
//     cin>>x ;
//     for(int i= 0 ; i<n-2 ; i++){
//         for(int j = i+1 ; i<n-1 ; j++){
//              int find = x - arr[i] + arr[j] ; 
//              int start = j +1 ; 
//              int end = n-1 ; 
//              int mid ;
//              while(start<=end){
//                 mid = start + (end-start)/2 ;
//                 if(mid == find){
//                     cout<<"yes" ; 
//                 }
//                 else if( mid <find ){
//                     start++ ; 
//                 }
//                 else{
//                     end-- ; 
//                 }
//              }
//         }
//     }
//     return 0 ; 
// }  

//time complxsity o(n^2) 
// #include<iostream>
// using namespace std ; 
// int main(){
//     int arr[1000] ; 
//     int n ; 
//     cout<<"enter n:" ; 
//     cin>>n ; 
//     for(int i = 0 ; i< n ;i++){
//         cin>>arr[i] ; 
//     }
//     int x ; 
//     cout<<"enter x:" ; 
//     cin>>x ; 
//     //bubble sort 
//     for(int i = n-2 ; i>= 0 ; i--){
//         for(int j = 0 ; j<= i; j++){
//             if(arr[j] >arr[j+1])
//             swap(arr[j],arr[j+1]);
//         }
//     }
//     for(int i = 0 ; i<n-2 ; i++){
//         int ans = x - arr[i] ; 
//         int start = i+1 ,end = n-1 ; 
//         while(start<end){
//             if(arr[start]  + arr[end] == ans) 
//            return 1 ; 
//             else if (arr[start] + arr[end] > ans ) 
//             end-- ; 
//             else 
//             start++ ; 
//         }
//     }
//         return 0 ; 
// }

// 4 sum //time complxity = o(n^4)
// #include<iostream>
// using namespace std ; 
// int main(){
//     int arr[1000] ; 
//     int n ; 
//     cout<<"enter n:" ; 
//     cin>>n ; 
//     for(int i = 0 ; i< n ;i++){
//         cin>>arr[i] ; 
//     }
//     int x ; 
//     cout<<"enter x:" ; 
//     cin>>x ; 

//     for(int i = 0 ; i<n-3 ; i++){
//         for(int j = i+1 ; j< n-2 ; j++){
//             for(int k = j+1 ; k<n-1 ; k++){
//                 for(int l = k +1 ; l < n ; l++){
//                     if ( arr[i]+arr[j]+arr[k]+arr[l] == x) {
//                       cout<<"yes" ;  
//                     }
//                 }
//             }
//         }
//     }
// return 0 ; 
// }

