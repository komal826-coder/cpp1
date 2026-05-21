// binary search 
// #include<iostream>
// using namespace std ;
// int binarysearch(int arr[] , int n , int key ){
//     int start = 0 ,mid ; 
//         int end = n-1 ; 
        
//         while(start<= end){
//             mid = (start + end) / 2 ;

//             if(arr[mid] == key ){
//                 return mid ;
//             }
//             else if(arr[mid] < key ){
//                 start = mid+1 ; 
//             }
//             else{
//                 end = mid - 1 ; 
//             }
//         }
//         return -1 ; 
        
//     }
//     int main(){
//         int arr[1000] ;
//         int n ; 
//         cout<<"enter n :" ; 
//         cin>>n ; 
//         for(int i = 0 ; i< n ; i++){
//             cin>>arr[i] ; 
//         }
//         int key  ; 
//         cout<<"enter key:" ;
//         cin>>key ; 
        
//         cout<<binarysearch(arr,n,key);
//     return 0 ; 
// }


// #include<iostream>
// using namespace std ;
// int binarysearch(int arr[] , int n , int key ){
//     int start = 0 ,mid ; 
//         int end = n-1 ; 
        
//         while(start<= end){
//             mid = (start + end) / 2 ;

//             if(arr[mid] == key ){
//                 return mid ;
//             }
//             else if(arr[mid] > key ){
//                 start = mid+1 ; 
//             }
//             else{
//                 end = mid - 1 ; 
//             }
//         }
//         return -1 ; 
        
//     }
//     int main(){
//         int arr[1000] ;
//         int n ; 
//         cout<<"enter n :" ; 
//         cin>>n ; 
//         for(int i = 0 ; i< n ; i++){
//             cin>>arr[i] ; 
//         }
//         int key  ; 
//         cout<<"enter key:" ;
//         cin>>key ; 
        
//         cout<<binarysearch(arr,n,key);
//     return 0 ; 
// }


// FIND FIRST AND LAST POSITION OF ELEMENT IN SORTED ARRAY 
//time complexity => o(logn)
// #include<iostream>
// using namespace std ; 
// //find first
// int first(int n , int arr[] , int target ){
   
//     int start = 0 ; 
//     int end = n-1 ; 
//     int first = -1 ; 
//     int last = -1 ; 
//     int mid ;

//     while(start <= end ) {
//         mid = start + (end-start)/2 ; 
//         if(arr[mid]== target ) {
//             first = mid ; 
//             end = mid - 1 ; 
//         }
//         else if (arr[mid] <target ) {
//             start = mid + 1 ; 
//         }
//         else {
//             end = mid - 1 ; 
//         }
//     }
//     return first ; 
// }
// //find last 
//  int last( int n , int arr[] , int target){
//     int start = 0 ; 
//     int end = n-1 ; 
//     int first = -1 ; 
//     int last = -1 ;
//     int mid ; 
    
//     while(start <=end){
//         mid = start +(end - start )/2 ; 

//         if(arr[mid] == target ){
//             last = mid ; 
//             start = mid + 1 ; 
//         }
//         else if ( arr[mid] < target ){
//             start = mid +1 ;
//         }
//         else{
//             end = mid - 1 ; 
//         }
//     }
//     return last ; 
//  }
// int main(){
//     int n , arr[1000]; 
//     cout<<"enter n :" ; 
//     cin>>n ; 
//     for(int i = 0 ; i< n ; i++){
//         cin>>arr[i] ; 
//     }
//     int target ; 
//     cout<<"target element:" ; 
//     cin>>target ; 

//     cout<<"first position:"<<first(n , arr,target )<<endl ; 
//     cout<<"last position:"<<last( n , arr , target ) ; 
//     return 0 ;   
// }


//search insert position 
// #include<iostream>
// using namespace std ;
// int insert(int arr[] , int n , int target ){
//     int start = 0 ; 
//     int end = n - 1 ;  
//     int mid ,index = end  ; 

//     while(start<= end) {
//         mid = start + (end - start)/2 ; 
//         if(arr[mid] == target ){
//             index = mid; 
//             break ; 
//         }
//         else if(arr[mid] < target ) {
//             start   = mid + 1 ; 
//         }
//         else{ 
//             index = mid ; 
//             end = mid - 1 ; 
//         }
//     }
//     return index ; 
// } 
// int main(){
//     int arr[1000] ; 
//     int n ; 
//     cout<<" enter n:";
//     cin>>n ; 

//     for(int i = 0 ; i< n ; i++){
//         cin>>arr[i] ; 
//     }
//     int target ;
//     cout<<"target element :" ; 
//     cin>>target ; 

//     cout<<insert(arr , n , target ) ;
//     return 0 ; 
// }

//sqrt(x) 
//time complexity = o(logn) 
// #include<iostream>
// using namespace std ;
// int sqrt ( int arr[] , int n , int target ) {
//     if ( target < 2 )       //overflow 
//     return target ; 
//     int start = 0; int end = n-1 ; 
//     int mid ; 
//     int ans ; 
//     while(start<= end){
//         mid = start + (end - start)/2 ;
//         if(arr[mid]== target/arr[mid] ) {      //over flow 
//             ans = mid ; 
//             break ; 
//         }
//         else if( arr[mid]  < target/arr[mid] ){
//             ans = mid ; 
//             start = mid +1 ; 
//         }
//         else{
//             end = mid - 1 ;
//         }
//     }
//     return ans ; 
// }
// int main(){
//     int arr[1000] ; 
//     int n ; 
//     cout<<"enter n:" ; 
//     cin>> n ; 
//     for(int i = 0 ; i< n ; i++){
//         cin>>arr[i] ; 
//     }
//     int target ; 
//     cout<<"target element :" ; 
//     cin>> target ; 

//     cout<<sqrt(arr , n , target) ; 
//     return 0 ; 
// }


// number of occurrence 
// #include<iostream>
// using namespace std ;
// int first( int arr[] , int n , int target ) {
//     int start = 0 ; int end = n-1 ; 
//     int first  = -1 ; 
//     int mid ; 
//     while(start<= end){
//         mid = start +(end - start)/2 ; 
//         if(arr[mid] == target) { 
//             first = mid ; 
//             end = mid -1 ; 
//         }
//         else if(arr[mid] < target){
//             start = mid +1 ;
//         }
//         else{
//             end = mid - 1 ; 
//         }
//     }
//     return first ; 
// }
// int last( int arr[] , int n , int target ) {
//     int start = 0 ; int end = n-1 ; 
//     int last  = -1 ; 
//     int mid ; 
//     while(start<= end){
//         mid = start +(end - start)/2 ; 
//         if(arr[mid] == target) { 
//             last = mid ; 
//             start = mid +1  ; 
//         }
//         else if(arr[mid] < target){
//             start = mid +1 ;
//         }
//         else{
//             end = mid - 1 ; 
//         }
//     }
//     return last; 
// }
// int main(){
//     int arr[1000] ; 
//     int n ; 
//     cout<<"enter n : " ; 
//     cin>>n ; 
//     for(int i = 0 ; i< n ; i++){
//         cin>>arr[i] ; 
//     }
//     int target ; 
//     cout<<" target element :" ; 
//     cin>>target ; 

//     int f = first( arr , n , target ) ;
//     int l = last( arr , n , target ) ;
//     cout<<(l-f+1);
//     return 0 ; 
// }

//peak index in mountain array
//2 4 6 8 10 8 5 
// #include<iostream>
// using namespace std ;
// int mountain(int arr[] , int n ) {
//     int start = 0 ; 
//     int end = n-1 ; 
//     int mid ; 
//     int ans ;
//     while(start <= end){
//         mid = start +(end-start)/2 ; 
//         if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1] ) {
//           return arr[mid];
//         }
//         else if(arr[mid] > arr[mid-1]) {
//             start =mid +1 ; 
//         }
//         else{
//             end = mid -1 ; 
//         }
//     }
//     return -1;
// } 
// int main(){
//     int arr[100] ; 
//     int n ; 
//     cout<<"enter n:" ;
//     cin>>n ; 
//     for(int i = 0 ; i<n ;i++){
//         cin>>arr[i] ; 
//     }
//     cout<<mountain(arr , n ) ; 
//     return 0 ; 
// } 

//rotated array 
// i 2 4 6 8 10 => after rotation 4 6 8 10 1 2 
// #include<iostream>
// using namespace std ; 
// int rotated ( int arr[] , int n ) {
//     int start = 0 ; 
//     int end = n-1 ; 
//     int mid , ans = arr[0] ; 
//     while(start<= end){
//         mid = start + (end-start)/2 ; 
//      // left side sorted 
//         if(arr[mid] >= arr[0]){
//             start = mid +1 ;
//         }
//        // right side sorted 
//         else{
//             ans = arr[mid] ; 
//             end = mid -1 ; 
//         }
//     }
//     return ans ; 
// }
// int main(){
//      int arr[1000] ; 
//      int n ; 
//      cout<<"enter n:" ; 
//      cin>>n ; 
//      for(int i = 0 ; i<n ;i++) {
//         cin>>arr[i] ; 
//      }
//      cout<<rotated(arr, n) ;
//      return 0 ; 
// }

// search in rotated array 

// #include<iostream>
// using namespace std ; 
// int search(int arr[] , int n , int target ) {
//     int start = 0 ; 
//     int end = n-1 ; 
//     int mid ; 
//     int ans =-1 ;
//     while(start<= end){
//         mid = start + (end - start)/2 ; 
//         if(arr[mid] == target ) {
//             return mid ; 
//         }
//         //left side sorted
//         else if(arr[mid] >= arr[0] ){
//             if(arr[start]<=target && arr[mid]>= target){
//             end = mid - 1 ;
//             }
//             else {
//                 start = mid +1 ;
//             }
//          } //right side sorted 
//         else{
//             if( arr[mid] <= target && arr[end] >= target){
//                 start = mid + 1 ;
//             }
//             else{
//                 end = mid -1 ; 
//             }
//         }
//     }
// }
// int main(){
//     int arr[1000];
//     int n ; 
//     cout<<"enter n:" ; 
//     cin>>n ; 
//     for(int i = 0 ; i< n ; i++){
//         cin>>arr[i] ; 
//     }
//     int target ; 
//     cout<<"target element :" ; 
//     cin>>target ; 
//     cout<<search(arr,n,target);
//     return 0 ; 
// }


//kth missing positive integer 
// #include<iostream>
// using namespaces std ;
// int missing(arr[], int n , int kth){
//     int start = 0 , end = n-1 ; 
//     int mid , ans 
//     while(start<= end){
//         mid = start + (end - start)/2 ;
//         if(arr[mid]-mid -1>kth) [
//             ans = mid ;                                 // nhi smjh aaya 
//             end = mid - 1 ;
//         ]
//         else{
//             start = mid +1 ;
//         }
//     }
//     return ans + k;
// }
//  int main(){
//     int arr[1000];
//     int n ; 
//     cout<<"enter n:" ; 
//     cin>>n ; 
//     for(int i = 0 ; i< n ; i++){
//         cin>>arr[i] ; 
//     }
//     int target ; 
//     cout<<"target element :" ; 
//     cin>>target ; 
//     cout<<missing(arr,n,target);
//     return 0 ; 
// }

// book allocation 
// #include<iostream>
// using namespace std ; 
// int book ( int arr[] , int n , int m ) {
//     int start = 0 ; int end = 0 ; 
//     int mid , ans ;
//     if(m>n){
//         return -1 ; 
//     }
//     for(int i = 0 ; i<n ; i++){
//         start = max(start , arr[i]) ; 
//         end += arr[i] ; 
//     }
//     while(start <= end){
//         mid = start + (end - start)/2 ; 

//         int page = 0 , count = 1 ; 
//         for(int i = 0 ; i<n ; i++){
//             page += arr[i] ; 
//             if(page>= mid){
//                 count++ ;  
//                 page = arr[i] ; 
//             }
//         }
//         if(count <= m){
//             ans = mid ; 
//             end = mid -1 ; 
//         }
//         else{
//             start = mid +1 ; 
//         }
//     }
//     return ans ; 
// }
// int main(){
//     int arr[1000] ; 
//     int n ; 
//     cout<<"enter books:" ; 
//     cin>>n ; 
//     for(int i = 0 ; i<n ; i++){
//         cin>>arr[i] ; 
//     }
//     int m ; 
//     cout<<"count of student :" ; 
//     cin>>m ;  

//     cout<<book(arr, n , m ) ; 
//     return 0  ; 

//}

//painter partition => same as upper 

//ship packages 

// aggressive cow 
// #include<iostream>
// using namespace std ; 
// int aggressive(int arr[] , int n , int m){
//     int start = 1 ; 
//    int end = arr[n-1]-arr[0]; 
//    int mid , ans = -1 ; 
//    if(n<m){
//     return -1 ; 
//    } 
//    while(start<= end){
//     mid = start + (end - start)/2 ; 
//     int pos = arr[0] , count = 1 ; 
//     for(int i = 1 ; i<n ; i++){ 
//         if(pos+mid<=arr[i])
//         {
//             count++ ; 
//             pos = arr[i] ; 
//         }
//         }
//      if(count<m)
//         end = mid -1 ; 
//         else{
//             ans = mid ; 
//             start=mid+1 ; 
//     }
//    }
// return ans ; 
// }
// int main(){
//     int arr[1000] ; 
//     int n ; 
//     cout<<"position n:"; 
//     cin>>n ; 
//     for(int i = 0 ; i<n ; i++){
//         cin>>arr[i] ; 
//     }
//     int m ;
//     cout<<"no. of cow:" ; 
//     cin>>m ; 

//     cout<<aggressive(arr, n, m ) ; 
//     return 0 ; 
// }

// KOKO EATING BANANA 
// #include<iostream>
// using namespace std ;
// int koko(int arr[] , int n , int h){
//     int start = 0 , end = 0 ; 
//     int mid , ans ; 
//     for(int i = 0 ;i<n ;i++){
//         start +=arr[i] ; 
//         end = max(end , arr[i]) ; 
//     }
//     if(start = 0) {
//         start = 1 ; 
//     }
//     while(start<=end){
//         mid = start+(end - start) ; 
//     // mid ammount of banana to consume in time 
//         int total_time = 0 ; 
//         for(int i = 0 ;i<n ;i++){
//             total_time += arr[i] /mid ; 
//             if(arr[i]%mid){
//                 total_time++;
//             }
//         }
//             if(total_time> h){
//                 start = mid+1 ;
//             }
//             else{
//                 ans = mid ; 
//                 end = mid -1 ;     
//             }
//     }
//     return ans ; 
// } 
// int main(){
//     int arr[1000] ; 
//     int n ;
//     cout<<"enter banana :" ; 
//     cin>>n ; 
//     for(int i = 0 ;i<n ; i++){
//         cin>>arr[i];
//     }
//     int h ;
//     cout<<"hourse:";
//     cin>>h ; 

//     cout<<koko(arr,n,h);
//     return 0 ; 
// }