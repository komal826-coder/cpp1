#include<iostream>
using namespace std ; 
int min(int arr[] , int index ,int n) {
    if( index == n-1) {
        return arr[index] ; 
    }
    return max(arr[index] , min(arr , index+1,n )) ; 
}
int main(){
    int arr[] = { 3,4,21,4,5} ; 
    cout<<min(arr , 0 , 5 ) ; 
    return 0 ; 
}