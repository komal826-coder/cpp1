//prefix and suffix 
//6 4 5 -3 2 8 
// prefix sum 
//6 10 15 12 14 22 
//suffix sum 
//22 16 12 7 10 8 

//  #include<iostream>
//  using namespace std ; 
//  int main(){
//     int arr[1000] ; 
//     int prefix[1000];
//     int n ; 
//     cout<<"enter n:" ; 
//     cin>>n ; 
//     for(int i = 0 ; i<n ; i++){
//         cin>>arr[i] ; 
//     }
//      prefix[0] = arr[0] ; 
//     for(int i = 1 ; i<n ; i++){
//         prefix[i] = prefix[i-1] + arr[i] ; 
//     }
//     //print prefix array 
//     for(int i = 0 ; i<n ; i++){
//         cout<<prefix[i]<<" "; 
//     }
//     return 0 ; 
//  }


// suffix 
//  #include<iostream>
//  using namespace std ; 
//  int main(){
//     int arr[1000] ; 
//     int suffix[1000];
//     int n ; 
//     cout<<"enter n:" ; 
//     cin>>n ; 
//     for(int i = 0 ; i<n ; i++){
//         cin>>arr[i] ; 
//     }
//      suffix[n-1] = arr[n-1] ; 
//     for(int i = n-2; i>=0 ; i--){
//         suffix[i] = suffix[i+1] + arr[i] ; 
//     }
//     //print suffix array 
//     for(int i = 0 ; i<n ; i++){
//         cout<<suffix[i]<<" "; 
//     }
//     return 0 ; 
//  }

//subarray
//size : 1 ,2 ,3 ,4,5,......n => no. of Subarray => n ,n-1,n-2,n-3,n-4 , n-5 ......1 
 // divide array in 2 subarray with equL SUM 
 //TIME COMPLXISITY = O(n^2)
//  #include<iostream>
//  using namespace std ;
//  int main(){
//     int arr[1000];
//     int n ; 
//     cout<<"enter n:" ; 
//     cin>>n ; 
//     for(int i =0 ; i<n ;i++){
//         cin>>arr[i] ; 
//     }
//     int sum1 = 0 , sum2 = 0 ;
//     for(int i = 0 ; i<n-1 ; i++){
        
//         for(int j = 0 ; j<=i ; j++){
//             sum1= sum1+ arr[j] ; 
//         }
//         for(int j = i+1 ; j<n;j++){
//             sum2 = sum2+ arr[j] ; 
//         }
//     }
//         if(sum1 == sum2){
//             cout<<"subarray possible";
//         }
//         else{
//             cout<<"not";
//         }
//     return 0 ; 
//  }

//time complxisity  => o(n)
//  #include<iostream>
//  using namespace std ;
//  int main(){
//     int arr[1000];
//     int n ; 
//     cout<<"enter n:" ; 
//     cin>>n ; 
//     for(int i =0 ; i<n ;i++){
//         cin>>arr[i] ; 
//     }
//     int ans ;
//     int totalsum = 0 ; 
//     for(int i = 0 ; i<n ; i++){
//         totalsum += arr[i] ; 
//     }
//     int prefix = 0 ; 
//     for(int i = 0 ;i<n-1 ; i++){
//         prefix += arr[i] ; 
//         ans = totalsum-prefix ;
//     if(ans == prefix )
//     cout<<"yes subarray";
// }
//     return 0 ; 
// }

//largest sum contiguous subarray 
//loop 0-n-1 ,1-n-1 ,2-n-1 ,3-n-1  
//time complexisity = o(n^2)
// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<climits>
// using namespace std ;
// int largest(vector<int>arr,int n){
//     int maxi = INT_MIN;
//     for(int i = 0 ; i< n ; i++){
//         int prefix = 0 ; 
//         for(int j = i ; j<n ;j++){
//             prefix += arr[j] ; 
//             maxi = max(maxi,prefix) ; 
//         }
//     }
//     return maxi ; 
// }
// int main(){
//     int n ; 
//     cout<<"enter n" ; 
//     cin>>n ; 
//     vector<int>v(n) ;
//     for(int i = 0 ; i<n ; i++) {
//         cin>>v[i]; 
//     }
//     cout<<largest(v,n); 
// }

//kadanes algorithm  => -ve ko zero krna 
//time complixity = O(n) 
// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<climits>
// using namespace std ;
// int largest(vector<int>arr,int n){
//     int maxi = INT_MIN;
//     int prefix = 0 ;  
//     for(int i = 0 ; i<n ;i++){
//         prefix += arr[i] ; 
//         maxi = max(maxi , prefix) ; 
//         if( prefix < 0){
//             prefix = 0 ;  
//         }
       
//     }
//       return maxi ;
// }
// int main(){
//     int n ; 
//     cout<<"enter n" ; 
//     cin>>n ; 
//     vector<int>v(n) ;
//     for(int i = 0 ; i<n ; i++) {
//         cin>>v[i]; 
//     }
//     cout<<largest(v,n); 
// }

  // max difference between 2 element 
//   #include<iostream>
//   #include<vector>
//   #include<algorithm>
//   #include<climits>
//   using namespace std ; 
//   int largest(vector<int>arr,int n){
//     int suffix[n-1] = arr[n-1] ; 
//     for(int i = n-2 ; i>=0 ; i--){
//        suffix[i] = max(arr[i] , suffix[i+1]) ; 
//     }
//     // maximum difference 
//     int maxdiff = INT_MIN ; 
//     for(int i = 0 ; i<n-1 ; i++){
//         int diff = suffix[i+1] - arr[i] ; 
//         if(diff > maxdiff) {
//             maxdiff = diff ; 
//         }
//     }
//     return maxdiff ;  
//   }
//    int main(){
//     int n ; 
//     cout<<"enter n" ; 
//     cin>>n ; 
//     vector<int>v(n) ;
//     for(int i = 0 ; i<n ; i++) {
//         cin>>v[i]; 
//     }
//     cout<<largest(v,n); 
// }