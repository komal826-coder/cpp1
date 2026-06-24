// #include<iostream>
// #include<cstdlib>
// #include<ctime>
// #include<vector>
// using namespace std ; 
// int random_number(int random , int a ){
//     int guesses = 1 ; 
//     while(a != random) {
//         cout<<"guess the number" ; 
//         cin>>a ; 
//         if(a > random) {
//             cout<<"lower number please\n" ; 
//             guesses+=1  ; 
//         }
//         else if(a < random) {
//             cout<<"higher number please\n" ; 
//             guesses += 1 ; 
//         }
//     }
//     cout<<"correct guess!\n" ; 
//     return guesses ;
// }
    
// int main(){
//     srand(time(0)) ; 
//     int random = rand() % 100 +1 ; 
//     int a = -1 ;
//     cout<<"number of guesses ="<<random_number(random , a)  ;
//     return 0 ; 
// }