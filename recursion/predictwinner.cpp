// // JOSEPHUS PROBLEM 
// //let n = 5 and eliminate k = 3 and remaining is winner 
// // time complexity => o(n^2) 
// // space complexity => o(n) 

                                                                                                     // // km smjh aaya 

// #include<iostream>
// #include<vector>
// using namespace std ; 
// int winner(vector<bool>&person, int n , int index ,  int person_left ,int k) {
//     if(person_left == 1 ) {
//         for(int i = 0 ; i<n ; i++){
//             if(person[i] == 0) 
//             return i ; 
//         }
//     }
//     // find the position kill 
//     int kill = (k-1)%person_left ;

//     while(kill--) {
//         index = (index+1)%n ; 
//         while(person[index] == 1) 
//         index = (index+1)%n ;  // skip the kill person 
//     }
//     person[index] = 1 ; 
//     //next alive person 
//      while(person[index] == 1)
//      index = (index+1)%n ;

//      return winner(person,n,index,person_left-1 , k );
// }
// int main(){
   
//     int k = 3 ; 
//     int n = 6 ; 
//     vector<bool>person(n,0) ;

//    cout<<winner(person , n , 0 , n , k)+1 ; 
//    return 0 ; 
// }