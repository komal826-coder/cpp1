// subsetsum 

// time complexity => o(2^n)
// space complexity => o(n)

// #include<iostream>
// #include<vector> 
// using namespace std ; 
// void subsetsum(int arr[] , int index ,int n, int sum , vector<int>&ans ){
//     if( index == n ) {
//         ans.push_back(sum) ; 
//         return ; 
//     }
//     //not include 
//     subsetsum(arr , index+1 , n , sum , ans ) ; 
//     //include 
//     subsetsum(arr , index+1 , n , sum+arr[index] , ans) ; 
// }
// int main(){
//     int arr[] = { 1,2,3,4} ; 
//     vector<int>ans ;
//     subsetsum( arr, 0 , 4, 0 , ans) ;
//     for(int i = 0 ; i< ans.size() ; i++){
//         cout<<ans[i]<<endl ; 
//     }

// }

// target sum 
//time complecity => o(2^n) 
//space complexity = o(n)

// #include<iostream>
// using namespace std ; 
// bool targetsum( int arr[] , int index , int n , int target ) {
//     if(target == 0) 
//     return 1 ; 
//     if( target < 0 || index == n ) {
//         return 0 ; 
//     }
//    return  targetsum(arr , index+1 , n ,  target ) ||targetsum( arr , index+1 , n , target-arr[index]) ;  ; 

// }
// int main(){
//     int arr[] = { 3,4,6,5} ;
//     int target = 25 ; 
//     cout<<targetsum(arr , 0 , 4 , target ) ; 

// }

//perfect sum problem 
//time complexity = o(2^n) 

// #include<iostream>
// using namespace std ; 
// int perfect( int arr[] , int index , int n , int sum) {
//     if(index == n){
//         return sum == 0 ; 
//     }
//     //not include + include 
//     return perfect(arr , index+1 , n , sum ) + perfect(arr , index+1 , n , sum - arr[index] ) ;
     
// }
// int main(){
//     int arr[] = {2,5,6,1} ;
//     int sum = 8 ;
//     cout<<perfect(arr , 0 , 5 , sum) ; 
// }

//target sum with repetition 
// #include<iostream>
// using namespace std ; 
// int subsum(int arr[] , int index , int n , int sum){
//     if(sum == 0) 
//     return 1 ; 
//     if(index == n || sum<0) 
//     return 0 ; 

//     return subsum(arr,index+1 , n , sum ) + subsum(arr , index , n , sum-arr[index]) ; 
// }
// int main(){
//     int arr[] = {2,3,4} ;
//     int sum = 6 ; 
//     cout<<subsum(arr , 0 , 3, sum)<<endl ; 
// }


