 //TIME COMPLXITY => O(N*N!)
//  #include<iostream>
//  #include<vector>
//  using namespace std ; 
//  void permut(int arr[] ,vector<vector<int> >&ans , vector<int>&temp , vector<bool>&visited){
//     if(visited.size() == temp.size()){
//         ans.push_back(temp) ;
//         return ; 
//     }
//     for(int i = 0 ; i<visited.size() ;i++){
//         if(visited[i] == 0) {
//             visited[i] = 1 ;
//             temp.push_back(arr[i]) ; 
//             permut(arr,ans,temp,visited);
//             visited[i] = 0 ; 
//             temp.pop_back() ; 
//         }
//     }
//  }
//  int main(){
//     int arr[] = {1,2,3} ;
//     vector<vector<int> > ans ; 
//     vector<int>temp;
//     vector<bool>visited(3,0) ;
//     permut(arr,ans,temp,visited) ;

//     for(int i = 0 ; i<ans.size();i++){
//         for(int j = 0 ; j<ans[i].size() ; j++)
//         cout<<ans[i][j]<<" " ;
//         cout<<endl ; 
//     }
//  }

// swap                                            // problem error 
// #include<iostream>
// #include<vector>
// using namespace std ; 
// void permut(vector<int>&nums , vector<vector<int> >&ans , int index) {
//     if(nums.size()  == index) {
//         ans.push_back(nums) ;
//         return ; 
//     }
//     for(int i = index ; i<nums.size() ; i++){
//         swap(nums[i], nums[index]);
//         permut(nums,ans,index+1 ) ;
//         swap(nums[i] , nums[index]);
//     }
// }
// int main(){
//     vector<int>nums = {1,2,3,4} ;
//     vector<vector<int> >ans ; 
//     permut(nums, ans , 0) ;
//     cout<<ans ; 
// }


// permutation with repetition ways to sum N
// #include<iostream>
// #include<vector>
// using namespace std ; 
// void permute(vector<int>&arr , vector<vector<int> >&ans , int index) {
//     if(index == arr.size() ){
//         ans.push_back(arr) ;
//         return ; 
//     }
//     vector<bool> use(21,0) ;
//     for(int i = index ; i<arr.size(); i++){
//         if(use[arr[i] + 10] == 0) {
//             swap(arr[i] , arr[index] ) ;
//             permute(arr,ans,index+1) ;
//             swap(arr[i] , arr[index]);
//             use[arr[i] + 10 ] = 1 ;
//         }
//     }
// }

// int main(){
//     vector<int>arr = {1,1,2,2} ;
//     vector<vector<int> >ans ; 
//     permute(arr,ans,0) ;
//     for(int i = 0 ; i<ans.size() ; i++){
//         for(int j = 0 ; j<ans[i].size() ; j++){
//              cout<<ans[i][j] ; 
//         }
//         cout<<endl ; 
//     }
 
    
// }

// way to sum n 
// #include<iostream>
// #include<vector>
// using namespace std ; 
// int way(int arr[] , int m , int sum ) {
//     if(sum == 0) 
//     return 1 ; 
//     if(sum < 0) 
//     return 0 ; 

//     int ans = 0 ; 
//     for(int i = 0 ; i<m ; i++) {
//         ans += way(arr , m , sum - arr[i] )  ;
//     }
//     return ans ;  
// }
// int main(){
//     int arr[] = { 1,5,6} ;
//     cout<<way(arr,3,7) ;

// }

