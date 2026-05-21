// #include<iostream>
// using namespace std ; 
// int main(){

//     int a = 10 ; 
//     //print address of a 
//     cout<<&a<<endl ;
    
//     int *p = &a ;
//     cout<<p<<endl;
//     cout<<sizeof(p)<<endl;
//     cout<<*p<<endl ; 

//     float m = 0.9;
//     float *ptr1 = &m ;               // *ptr => null hota h 
//     cout<<ptr1<<endl ; 
//     cout<<*ptr1<<endl ; 
//     cout<<sizeof(ptr1)<<endl;

//     float b = 200 ; 
//     ptr1 = &b ;           // ptr => value present hoti h phle se hi null nhi hota 
//     cout<<ptr1<<endl ; 
//     cout<<*ptr1<<endl ;
// } 


// #include<iostream>
// using namespace std ; 
// int main(){
//     int arr[5] = { 1,6,3,8,4};

//     //print the address of first element 
//     cout<<arr<<endl ; 
//     cout<<arr+0<<endl ; 
//     cout<<&arr[0]<<endl ; 
//      int *ptr = arr ;
//      cout<<ptr<<endl;

//      //print the address of second element 
//      cout<<arr+1<<endl ; 
//      cout<<&arr[1]<<endl ;


//      //print the value 
//      cout<<arr[0]<<endl ;
//      cout<<*ptr<<endl ; 
//      cout<<*arr<<endl ; 
//      cout<<*(arr+0)<<endl;

//      //print a;; address 
//      for(int i = 0 ; i< 5 ; i++){
//         cout<<arr+i<<" "<<endl;

//         //print alll the value 
//         cout<<*(arr+i)<<" "<<endl;
//      }

//      // all values print with airthmatic operation 
//      int *ptr1 = arr ;
//      for(int i = 0 ; i< 5 ;i++){
//         cout<<*ptr1<<endl ; 
//         ptr1++ ; 
//      }

//      int *ptr2 = arr+4;
//      for(int i = 0 ; i<5 ; i++){
//         cout<<*ptr2<<endl;
//         ptr2-- ; 
//      }
// //print all values 
//      for(int i = 0 ; i< 5 ; i++){
//          cout<<ptr[i]<<" " ; 
//      }
// //print all address 
//      for(int i = 0; i<5 ; i++){
//         cout<<ptr+i<<endl ; 
//      }
// }



// #include<iostream>
// using namespace std ; 
// int main(){
//     char arr[5] = "1234" ; 
//     char *ptr = arr ; 
//     cout<<arr<<endl ; 
//     cout<<ptr<<endl ;
//     cout<<(void*)arr<<endl;
//     cout<<(void*)ptr<<endl;
//     cout<<static_cast<void*>(arr)<<endl;

//     char name = 'a bc  & s';
//     char *ptr1 = &name ;
//     cout<<ptr1<<endl ; 
//     cout<<*ptr1<<endl ;
//     cout<<(void*)ptr1<<endl ; 
//     cout<<name<<endl;
//     cout<<&name<<endl;
// }

// #include<iostream>
// using namespace std ;
// void dob(int *ptr){
//     for(int i = 0 ; i< 5 ; i++){
//         ptr[i] = 2*ptr[i] ;
//     }
//     // return *ptr ;
// }
// int main(){
//     int arr[5] = { 1,3,4,5,6} ;
//     dob(arr) ;
//     for(int i = 0 ; i< 5 ; i++){
//         cout<<arr[i]<<" " ; 
//     }
// }

// #include<iostream>
// using namespace std ; 
// void swap(int *ptr1 , int *ptr2){
//     int temp = *ptr1; 
//     *ptr1 = *ptr2 ;
//     *ptr2 = temp ;  
//     cout<<&ptr1<<endl ; 
//     cout<<&ptr2<<endl ; 
//     cout<<ptr1<<endl ;  //print address of first  // value of ptr1
//     cout<<ptr2<<endl ;   //print address of second  //value of ptr2 
// }
// int main(){
//     int first = 10 ; 
//     int second = 90 ;
//     swap(&first , &second) ; 
//     cout<<&first<<" "<<&second<<endl ; 
//     cout<<first<<endl ; 
//     cout<<second<<endl ; 
// }

// #include<iostream>
// #include<vector>
// using namespace std ; 
// void swap(int &ptr1 , int &ptr2){      //pass by reference 
//     int temp = ptr1; 
//     ptr1 = ptr2 ;
//     ptr2 = temp ;  
//     cout<<&ptr1<<endl ; 
//     cout<<&ptr2<<endl ; 
//     cout<<ptr1<<endl ;  //print address of first  // value of ptr1
//     cout<<ptr2<<endl ;   //print address of second  //value of ptr2 
// }

// void pass(vector<int>&p){
//     for(int i =0 ; i< 5 ; i++){
//         p[i] = 10 ; 
//     }
// }
// int main(){

//     vector<int>v(5,0) ;
//     pass(v) ; 
//     for(int i = 0 ; i<5 ; i++){
//         cout<<v[i]<<" " <<endl ; 
//     }

//     int first = 10 ; 
//     int second = 90 ;
//     swap(first , second) ; 
//     cout<<&first<<" "<<&second<<endl ; 
//     cout<<first<<endl ; 
//     cout<<second<<endl ; 
// }


// vector , string solve by reference  mostly 
// int arr , char arr solve by pointer mostly


// #include<iostream>
// using namespace std ; 
// void fun(int **p1){
//     *p1 = *p1 + 1;
// }
// int main(){
//     int n = 10 ; 
//     int *p = &n ; 
//     int **ptr = &p ; 
//     int fun(**ptr) ;
//     cout<<p ; 
// }

// #include<iostream>
// using namespace std ; 
// void fun(int *p ){
//     *p =  *p + 5 ;
//     //*ptr = *ptr++ ; 
// }
// int main(){
//     int n = 10 ; 
//     int *p = &n ; 
//     int **ptr = &p ;   // double pointer 
//     int ***p2 = &ptr ; // triple pointer
//     fun(p ) ;
//     // cout<<p<<endl ; 
//     // cout<<&p<<endl ; 
//     // cout<<ptr<<endl ; 
//     // cout<<&ptr<<endl ; 
//     // cout<<p2<<endl ; 
//     // cout<<&p2<<endl ; 
//     // //value modify 
//     // //*p = *p + 5;
//     // //**ptr = **ptr +5 ; 
//     // //***p2 = ***p2 + 10 ; 
//     cout<<n<<" "; 
   
// }


// memory management 

// #include<iostream>
// using namespace std ;
// int main(){
//     // variable ke liye heap memory allocate kro 
//     //dynamic allocation 
//     int *ptr = new int ; 
//     *ptr = 5 ;  // value assign 
//     cout<<*ptr<<endl ;

//     float *ptr2 = new float ; 
//     *ptr2 = 3.5 ; 
//     cout<<*ptr2<<endl ; 

//     int n ; 
//     cout<<" enter n " ;
//     cin>>n ; 

//     int *p = new int[n] ; 

//     //value daalo 
//     for(int i = 0 ; i< n ;  i++){
//         p[i] = i+1 ; 
//     }

//     //print krao 
//     for(int i = 0 ; i< n  ; i++){
//         cout<<p[i]<<endl ; 
//     }

//     //delete keyword use 
//     delete ptr ; 
//     delete[] p ; 
// }

// 2d array 
//  #include<iostream>
//  using namespace std ; 
//  int main(){
//     // array create karne hai , jo store karega address 

//     int n ,m;  // n = rows , m = columns 
//     cout<<"enter n :" ; 
//     cin>>n ;
//     cout<<"enter m" ;
//     cin>>m ;  

//     int **ptr = new int *[n] ; 

//     //create 2d array 
//     for(int i = 0 ; i<n ; i++){
//         ptr[i] = new int[m];
//     }

//     for(int i  = 0 ; i<n ; i++){
//         for(int j = 0 ; j<m ; j++){
//             cin>>ptr[i][j] ; 
//         }
//     }

//     //print the value [m] ; 
//     for(int i = 0 ; i<n ; i++){
//         for(int j = 0 ; j<m ; j++){
//             cout<<ptr[i][j]<<" " ; 
//         }
//         cout<<endl ; 
//     }

//     //relesed the memory , heap mein 

//     for(int i = 0 ; i< n ; i++)
//     delete[] ptr[i] ; 
 
//     delete[] ptr ; 
//  }

// 3d array 
//  #include<iostream>
//  using namespace std ; 
//  int main(){
//     int n,p,h ; 
//     cout<<"enter n" ;
//     cin>>n ; 
//     cout<<"enter p";
//     cin>>p ; 
//     cout<<"enter h" ; 
//     cin>>h ; 

//     int ***ptr = new int **[n] ; 

//     //create 2d array and store it is address in ptr 

//     for(int i = 0 ; i< n ; i++){
//         ptr[i] = new int *[p] ; 

//         for(int j =0 ; j< p ; j++){
//             ptr[i][j] = new int[h] ; 
//         }
//     }
//     for(int i = 0 ; i< n ;i++){
//         for(int j = 0 ; j< p ; j++){
//             for(int k = 0 ; k< h ; k++){
//                 ptr[i][j][k] = i+j+k ;
                
//             }
//         }
//     }
//     for(int i = 0 ; i< n ;i++){
//         for(int j = 0 ; j< p ; j++){
//             for(int k = 0 ; k< h ; k++){
//                 cout<<ptr[i][j][k]<<" " ; 
//             }
//         }
//     }
//  }

 