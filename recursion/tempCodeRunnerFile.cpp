#include<iostream>
using namespace std ; 
bool targetsum( int arr[] , int index , int n ,int sum , int target ) {
    if(index == n ) {
        return ; 
    }
    //not include 
    targetsum(arr , index+1 , n ,sum ,  target ) ;
    // include 
    if(sum == target ) 
    return ; 
    targetsum( arr , index+1 , n , sum +arr[index] , target ) ; 

}
int main(){
    int arr[] = { 3,4,6,5} ;
    int target = 12 ; 
    targetsum(arr , 0 , 4 , 0 , 12 ) ; 

}