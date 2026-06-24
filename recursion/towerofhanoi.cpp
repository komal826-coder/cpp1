// // tower of hanoi
// //rules => onle one time one move and upper disk move 
// //   choti disk ke upr bdi disk nhi rkh skte 
// //  2^n -1 step           
// // n disk and n-1 disk move helper rod 
// // source rod , helper rod , destination rod 

// // time complexity = o(2^n) 
// //space complexity = o(n)
// #include<iostream>
// #include<vector>
// using namespace std ; 
// void tower(int n , int source , int helper , int destination) {
//     if(n == 1) {
//         cout<<"move disk"<<n<<"from:"<<source<<"to"<<destination<<endl ; 
//         return ; 
//     }
//     tower(n-1 , source , destination , helper) ;
//     cout<<"move disk"<<n<<"from"<<source<<"to"<<destination<<endl ; 
//     tower(n-1 , helper , source ,destination) ;
// }
// // n = 3  source = 1 , helper = 2 , destination = 3 
// // move disk 1 from 1 to 3  (n-1 === 1) 
// // move disk 2 from 1 to 2 
// // move disk 1 from 3 to 2 
// // move disk 3 from 1 to 3 
// // move disk 1 from 2 to 1 
// // move disk 2 from 2 to 3 
// // move disk 1 from 1 to 3 
// int main() {
//     tower( 3 , 1 , 2 ,3 ) ; 
// }