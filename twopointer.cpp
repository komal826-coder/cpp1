// #include<iostream>
// using namespace std ; 
// int main(){
//     int arr[7] = {1,0,0,1,1,0}; 
//     int count0 = 0 ; 
//     int count1 = 0 ; 
//     for(int i = 0 ; i<6 ; i++){
//         if(arr[i] == 0 ){
//             count0++ ; 
//         }
//         else{
//             count1++ ; 
//         }
//     }
//     for(int i = 0 ; i<count0 ; i++){
//         arr[i] = 0 ; 
//         cout<<arr[i]<<" " ; 
//     }
//     for(int i = count0 ; i<6 ;i++){
//         arr[i] = 1 ; 
//         cout<<arr[i]<<" " ;
//     }
// }

//two pointer use 
// 1 0 1 0 1 0 
// #include<iostream>
// using namespace std ; 
// int main(){
//     int arr[1000] ;
//     int n ; 
//     cout<<"enter n:"; 
//     cin>>n ; 
//     for(int i = 0 ; i<n ; i++){
//         cin>>arr[i] ; 
//     }
//     int start = 0  ; 
//     int end = n-1 ;  
//     while(start<end) {
//         if(arr[start] == 0){
//             start++ ; 
//         }
//         else{
//             if(arr[end] == 0 ) {
//                 swap(arr[start],arr[end]); 
//                 start++ , end--;

//             }
//             else{
//                 end-- ; 
//             }
//         }
//     }
//     for(int i = 0 ; i<n ;i++){
//         cout<<arr[i] ; 
//     }
//     return 0 ; 
// }

//two sum  time complexisity = o(nlogn)
// #include<iostream>
// using namespace std ; 
// int main(){
//     int arr[1000] ; 
//     inr n ; 
//     cout<<"enter n:" ;
//     cin>>n ; 
//     for(int i = 0 ;i<n ; i++){
//         cin>>arr[i] ; 
//     }
//     int target ;
//     cout<<"enter target:" ;
//     cin>>target ; 
//     for(int i = 0 ; i<n-1 ; i++){
//         int x = target - arr[i] ; 
//         start = i+1 ; 
//         end = n-1 ; 
//     }
//     if() //binary search use
// }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std ; 
// int main(){
//     int arr[1000] ; 
//     int n ; 
//     cout<<"enter n:" ;
//     cin>>n ; 
//     for(int i = 0 ;i<n ; i++){
//         cin>>arr[i] ; 
//     }
//     int target ;
//     cout<<"enter target:" ;
//     cin>>target ; 
//     int start = 0 , end = n-1 ; 
//     vector<int>ans;
//     while(start<end){
//         if(arr[start]+arr[end] == target ){
//             // ans.push_back(start+1);
//             // ans.push_back(end+1);
//             // return ans ; 
//             cout<<arr[start]<<" "<<arr[end]; 
//             return 0 ; 
//         }
//         else if(arr[start] + arr[end] <target){
//             start++;
//         }
//         else{
//             end--;
//         }
//     }
//     //cout<<ans ; 
//     return 0 ;
// }

//pair with  given difference     time complxisity = o(n)
// #include<iostream>
// #include<vector>
// using namespace std ; 
// int main(){
//     int arr[1000] ; 
//     int n ; 
//     cout<<"enter n:" ;
//     cin>>n ; 
//     for(int i = 0 ;i<n ; i++){
//         cin>>arr[i] ; 
//     }
//     int target ;
//     cout<<"enter target:" ;
//     cin>>target ; 
//     int start = 0 , end = 1 ; 
//      if(target<0)
//       target = target*-1 ;
//     vector<int>ans;
//     while(start<end){
//         if(arr[end]-arr[start] == target ){
//             // ans.push_back(start+1);
//             // ans.push_back(end+1);
//             // return ans ; 
//             cout<<arr[start]<<" "<<arr[end]; 
//             return 0 ; 
//         }
//         else if(arr[end] - arr[start] <target){
//             end++;
//         }
//         else{
//             start++ ; 
//         }
        // if(start==end)
        // end
 //       }
//     //cout<<ans ; 
//     return 0 ;
// }


 