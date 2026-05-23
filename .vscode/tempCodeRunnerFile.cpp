#include<iostream>
using namespace std ; 
int binary( int arr[] , int start , int end , int x) {
    int mid = start + ((end-start)/2) ; 
    if(start>end) {
        return -1 ; 
    }
    if(arr[mid] == x) {
        return mid ; 
    }
    else if(arr[mid] < x ){
        return binary(arr , mid+1 , end , x) ;
    }
    else{
        return binary(arr,start,mid-1 , x) ; 
    }
}
int main(){
    int arr[] = { 3,8,11,15,20,22}  ;// non-decrning order 
    int x = 20 ; 
    cout<<binary( arr , 0 , 5 , x) ; 
    return 0 ; 
}