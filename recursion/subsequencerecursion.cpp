// subsequence => power set => { 1 , 2 ,3} => { {} , {1} , {2} , {3} , {2,3} ,{1,3} ,{1,2} ,{1,2,3}} => 2^3 
// 000 , 001 , 010 , 011 , 100 , 101 , 110 , 111   =>> 0 = no , 1 = yes (selected)

// time complexity => O(2^(n+1) - 1) 
//space complexity => O(2^n * n * n^2) => O(2^n) 

// #include<iostream>
// #include<vector>
// using namespace std ; 
// void subsequence(int arr[] ,int index , int n , vector<vector<int> >&ans , vector<int>temp ) {
//     if(index == n){
//         ans.push_back(temp) ; 
//         return ; 
//     }
//     // not include 
//     subsequence(arr,index+1 , n , ans , temp) ; 
//     // included
//     temp.push_back(arr[index]);
//     subsequence(arr,index+1 , n , ans , temp) ; 
//     temp.pop_back() ; 

// }
// int main(){
//     int arr[] = { 1,2,3} ; 
//     vector<vector<int> >ans ; 
//     vector<int>temp ; 

//     subsequence(arr , 0 , 3,ans ,temp) ;
//     for(int i = 0 ; i<ans.size(); i++){
//         for(int j = 0 ; j<ans[i].size(); j++)
//         cout<<ans[i][j]<<" " ; 
//          cout<<endl ; 
//     }
// }




// #include<iostream>
// #include<vector>
// using namespace std ; 
// void subset( string &s , int index , int n , vector<string>&ans , string &temp ) {
//     if(index == n){
//         ans.push_back(temp) ; 
//         return ; 
//     }
//     //not include 
//     subset(s,index+1,n,ans,temp);
//     //include
//     temp.push_back(s[index]) ; 
//     subset(s,index+1 , n,ans,temp);
//     temp.pop_back() ; 
// }
// int main(){
//     string s = "abc" ; 
//     vector<string>ans ; 
//     string temp ; 
//     subset(s , 0 , s.size() , ans , temp);
//     for(int i = 0 ; i<ans.size() ; i++){
//         cout<<ans[i]<<endl ; 
//     }
// }




//generate parentheses 
// n = 2 => (()) , ()() , 
// n = 3 => ((())) , () (()) , (()) () , () () () , (()()) 
// left = n , right = n 
// no. of opening >= no. of closing 
// time complexity => 2^n 
//space complexity => 

// #include<iostream>
// #include<vector>
// using namespace std ; 
// void parenth(int n , int left , int right , vector<string>&ans , string &temp) {
//     if(left + right == 2*n){
//         ans.push_back(temp) ;
//         return ; 
//     }
//     //left part 
//     if(left <n){
//         temp.push_back('(') ; 
//         parenth(n ,left+1 , right , ans , temp) ;
//         temp.pop_back() ; 
//     }
//     //right part 
//     if(right<left) {
//         temp.push_back(')');
//         parenth(n , left , right+1 , ans , temp) ; 
//         temp.pop_back() ; 
//     }

// }
// int main(){
//     int n = 3 ; 
//     vector<string>ans ;
//     string temp ; 
    
//     parenth(n , 0 , 0 , ans , temp) ; 

//     // for(string s : ans ) {
//     // cout<<s<<endl ; 
//     // }

//     for(int i = 0 ; i<ans.size() ; i++){
//         cout<<ans[i]<<endl ;  
//     }

// }