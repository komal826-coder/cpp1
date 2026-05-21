// array continues memory store like a linear way 
//index = row index*column + columnindex 
//row index = index/column ; column index = index%column 
//0 base indexing 
// 32 = 3 * 3 + 2 
//22 = 2*3 + 2 
//arr[index] = base address + index*size of element
//arr[][] base address + index*size of element 
//arr[i][j] = base address + ( i * column + j ) *size of element
//arr[row][column]
//row*column = total value 


// #include<iostream>
// using namespace std ;
// void printcol(int arr[][3], int row , int column){
//     for(int i =  0 ; i<column ; i++){
//         for(int j = 0 ; j <row; j++){
//             cout<<arr[i][j]<<" " ; 
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     //create 2d array 
//     int arr[4][3] = {{1,2,3},{3,4,5},{5,6,7},{7,8,9}};

//     //print all the value in array row wise 
//     for(int i = 0 ; i< 4 ; i++){
//         for(int j = 0 ; j<3 ;j++){
//             cout<<arr[i][j];
//         }
//         cout<<endl;
//     }

//     //print all the value in array column wise , function call
//     printcol(arr,4,3);

//     //search element in __ARRAY
//     int x = 7 ; 
//     for(int i = 0 ; i<4 ; i++){
//         for(int j = 0 ; j<3 ; j++){
//             if(arr[i][j] == x ){
//                 cout<<"yes" ; 
//                 break;
//             }
//         }
//     }

//     return 0  ;
// }


//add 2 matix 
//time complxity = o(n^2) => O(row*column)
//space complxity = O(row*column)
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[4][3] = { 1,2,3,4,5,6,7,8,9,10,11,12};
//     int brr[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};
//     for(int i = 0 ; i<4 ; i++){
//         for(int j = 0 ; j<3 ; j++){
//             cout<<arr[i][j] + brr[i][j]<<" "; 
//         }
//         cout<<endl ; 
//     }
//     return 0 ; 
// }

//print row index with max sum 
//  #include<iostream>
//  #include<climits>
//  using namespace std ;
//  int main(){
//     int arr[4][3] = { 1,2,3,4,5,6,7,8,9,10,11,12} ; 
//     int index = -1 ; 
//     int sum = INT_MIN;
//     for(int i = 0 ; i < 4 ; i++) { 
//         int totalsum = 0 ; 
//         for(int j = 0 ; j < 3 ; j++){
//             totalsum += arr[i][j] ; 
//         }
//         if(sum < totalsum){
//             sum = totalsum ; 
//             index = i ; 
//         }
        
//     }
//     cout<<index<<" "; 
//     return 0 ; 
//  }

//print sum of diagonal elementn
//  #include<iostream>
//  #include<climits>
//  using namespace std ;
//  int main(){
//     int arr[4][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16} ; 
//     int first = 0 ; 
//     for(int i = 0 ; i< 4 ;i++){
//         first+=arr[i][i] ; 
//     }
//     cout<<first<<endl ; 
//      int i = 0 ; int j = 3 ; int second = 0 ; 
//      while(j>= 0) {
//         second += arr[i][j] ; 
//         i++ ; j-- ;
//      }
//      cout<<second<<endl ; 
// return 0 ; 
//  }

//reverse each row of matrix 
//  #include<iostream>
//  #include<climits>
//  using namespace std ;
//  int main(){
//     int arr[4][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16} ;
//     for(int i = 0 ;i< 4 ; i++){
//         int start = 0 , end = 3 ; 
//         while(start<end){
//             swap(arr[i][start],arr[i][end] );
//             start++ , end -- ;
//         }
//     } 
//     for(int i = 0 ; i<4 ; i++){
//         for(int j = 0 ; j<4 ; j++){
//             cout<<arr[i][j]<<" "; 
//         }
//         cout<<endl ;
//     }
//     return 0 ; 
//  }

//column major order 
//index = column index*row + rowindex 

//vector in 2d 
// vector<vector<int> >matrix(rows, vector<int>(column , intialize)) 
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std ;
// int main(){

//     //create 2d vector 
//     vector<vector<int> >matrix(3,vector<int>(4,1)) ; 

//     for(int i = 0 ; i<3 ; i++)
//     for(int j = 0 ; j<4 ; j++)
//     cout<<matrix[i][j]<<" " ; 
//     cout<<endl ; 

//     cout<<"rows: "<<matrix.size(); 
//     cout<<endl ; 
//     cout<<"column: "<<matrix[0].size(); 
//     return 0 ; 
// }

//wave form 
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std ;
// int main(){
//     int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12};
//     // vector<vector<int> >arr(4,vector<int>(4 , 1)) ;
//     //     for(int i = 0 ; i<4 ; i++){
//     //         for(int j = 0 ; j<4 ; j++){
//     //             cin>>arr[i][j] ; 
//     //         }
//     //     }
    
//     for(int i = 0 ; i< 4 ; i++){
//         if( i %2 == 0){
//             for(int j = 0 ;j<3 ; j++){
//                 cout<<arr[j][i]<<" " ; 
//             }
//         }
//         else{
//             for(int j = 2 ; j>= 0 ; j--) {
//                 cout<<arr[j][i]<<" " ; 
//             }
             
//         }
       
//     }
//     return 0 ; 
// }

//spiral form 
// #include<iostream>
// using namespace std ;
// int main(){
//     int arr[6][6] ={{1,2,3,4,5,6},{7,8 ,9,10,11,12},{13,14,15,16,17,18},{19,20,21,22,23,24},{25,26,27,28,29,30},{31,32,33,34,35,36}};
//     for(int i = 0 ; i < 6 ; i++){
//         for(int j = 0 ; j<6 ; j++){
//             cout<<arr[i][j]<<" " ; 
//         }
//         cout<<endl ; 
//     } 
//     int top = 0 ,bottom = 5 , right = 5 , left = 0 ;
//     while(left<= right && top<= bottom ){
//     //print top 
//     for(int j = left ; j<= right ; j++)
//         cout<<arr[top][j];
//         top++;
//     //print right 
//     for(int i = top ; i<= bottom ; i++)
//     cout<<arr[i][right] ;
//     right--;
//     //print bottom 
//     if(top<=bottom)
//     for(int j = right ; j>= left ; j--)
//     cout<<arr[bottom][j];
//     bottom-- ; 
//     //print left 
//     if(left<=right)
//     for(int i = bottom ; i>= top ; i--)
//     cout<<arr[i][left] ; 
//     left++;
//     }

//     return 0 ; 
// }

//transpose matrix 
//01 =10 , 02 = 20 , 23 = 32 
//time = o(n^2) space = o(1)
// #include<iostream>
// using namespace std ;
// int main(){
//     int arr[6][6] ={{1,2,3,4,5,6},{7,8 ,9,10,11,12},{13,14,15,16,17,18},{19,20,21,22,23,24},{25,26,27,28,29,30},{31,32,33,34,35,36}};
//     for(int i = 0 ; i < 6 ; i++){
//         for(int j = 0 ; j<6 ; j++){
//             cout<<arr[i][j]<<" " ; 
//         }
//         cout<<endl ; 
//     } 
//     for(int i = 0 ; i< 5; i++){
//         for(int j = i +1 ; j<6 ; j++){
//             swap(arr[i][j] , arr[j][i] );
//             cout<<arr[i][j] ; 
//         }
//     }
    
//     return 0 ; 
// }

//rotate matrix by 90 clockwise 
//timeo(n^2) , space o(n^2)
// #include<iostream>
// using namespace std ; 
// int main(){
//     int arr[4][4] ,res[4][4]; 
//     for(int i = 0 ; i< 4 ; i++){
//         for(int j = 0 ; j<4 ; j++){
//             cin>>arr[i][j] ; 
//         }
//         cout<<endl ; 
//     }
//     for(int i = 0 ; i< 4 ; i++){
//         for(int j = 0 ; j<4 ; j++){
//             cout<<arr[i][j] ; 
//         }
//         cout<<endl ;
//     }
//     for(int i = 0 ; i <4 ; i++){
//         for(int j = 0 ; j<4; j++){
//             res[j][4-1-i] = arr[i][j] ; 
//         }
//     }for(int i = 0 ; i< 4 ; i++){
//         for(int j = 0 ; j<4 ; j++){
//             cout<<res[i][j] ; 
//         }

//     }


//     return 0 ; 
// }

//time = O(n^2) , space = o(1)
// #include<iostream>
// using namespace std ; 
// int main(){
//     int arr[4][4] ,res[4][4]; 
//     for(int i = 0 ; i< 4 ; i++){
//         for(int j = 0 ; j<4 ; j++){
//             cin>>arr[i][j] ; 
//         }
//         cout<<endl ; 
//     }
//     for(int i = 0 ; i< 4 ; i++){
//         for(int j = 0 ; j<4 ; j++){
//             cout<<arr[i][j] ; 
//         }
//         cout<<endl ;
//     }
//         //trnspose 
//         for(int i = 0 ; i< 4 ; i++){
//             for(int j = i ; j<4 ; j++ ){
//                 swap(arr[i][j] , arr[j][i] );
//             }
//         }
//         //reverse
        // for(int i = 0 ; i< 4 ; i++){
        //     int start= 0 , end = 3 ; 
        //     while(start<end){
        //         swap(arr[i][start], arr[i][end] ) ;
        //     start++ , end-- ; 
        //     }
        // }
//         for(int i = 0 ; i< 4 ; i++){
//             for(int j = 0 ; j<4 ; j++){
//                 cout<<arr[i][j] ; 
//             }
//             cout<<endl ; 
//         }
//         return 0 ; 
//     }

//REVERSE MATRIX 180 
// #include<iostream>
// using namespace std ; 
// int main(){
//     int arr[4][4] ,res[4][4]; 
//     for(int i = 0 ; i< 4 ; i++){
//         for(int j = 0 ; j<4 ; j++){
//             cin>>arr[i][j] ; 
//         }
//         cout<<endl ; 
//     }
//     for(int i = 0 ; i< 4 ; i++){
//         for(int j = 0 ; j<4 ; j++){
//             cout<<arr[i][j] ; 
//         }
//         cout<<endl ;
//     }cout<<endl ; 
//     //
//     for(int i = 3 ; i>= 0 ; i--){
//         for(int j = 0 ; j <4 ; j++){
//             cout<<arr[i][j] ; 
//         }
//         cout<<endl ; 
//     }
//     cout<<endl ; 
//     //
//     for(int i = 0 ; i<4 ; i++){       // solve baad me 
//         int start = 0 , end = 3 ; 
//         while(start<end){
//         swap(arr[start][i] , arr[end][i] );
//         start++ , end-- ; 
//     }        
// }
//     for(int i = 0 ; i< 4 ; i++){
//         for(int j = 0 ; j<4 ; j++){
//             cout<<arr[i][j] ; 
//         }
//         cout<<endl ;
//     }
//     return 0 ; 
// }

// #include<iostream>
// using namespace std ; 
// int main(){
//     int arr[4][4] ,res[4][4]; 
//     for(int i = 0 ; i< 4 ; i++){
//         for(int j = 0 ; j<4 ; j++){
//             cin>>arr[i][j] ; 
//         }
//         cout<<endl ; 
//     }
//     for(int i = 0 ; i< 4 ; i++){
//         for(int j = 0 ; j<4 ; j++){
//             cout<<arr[i][j] ; 
//         }
//         cout<<endl ;
//     }cout<<endl ; 

//     // column wise reverse 
    // for(int j = 0 ; j< 4 ; j++){
    //     int start = 0 , end = 3 ; 
    //     while(start<end){
    //         swap(arr[start][j],arr[end][j]);
    //         start++ , end-- ; 
    //     }
    // }
//     //row wise reverse 
//     for(int i = 0 ; i< 4 ; i++){
//         int start = 0 , end = 3 ; 
//         while(start<end){
//             swap(arr[i][start],arr[i][end]);
//             start++ , end-- ; 
//         }
//     }
//     for(int i = 0 ; i<4 ;i++){
//         for(int j = 0 ; j<4 ; j++){
//             cout<<arr[i][j] ; 
//         }
//         cout<<endl ; 
//     }
// return 0 ; 
// }

//rotate matrix 90 anticlockwise  => 270 clockwise 
// #include<iostream>
// using namespace std ; 
// int main(){
//     int arr[4][4] ,res[4][4]; 
//     for(int i = 0 ; i< 4 ; i++){
//         for(int j = 0 ; j<4 ; j++){
//             cin>>arr[i][j] ; 
//         }
//         cout<<endl ; 
//     }
//     for(int i = 0 ; i< 4 ; i++){
//         for(int j = 0 ; j<4 ; j++){
//             cout<<arr[i][j] ; 
//         }
//         cout<<endl ;
//     }cout<<endl ; 
//     //transpose 
//     for(int i = 0 ; i <4-1 ; i++){
//         for(int j = i+1 ; j<4 ; j++){
//             swap(arr[i][j], arr[j][i]) ; 
//         }
//     }
//     //column reverse 
//     for(int j = 0 ; j< 4 ; j++){
//         int start = 0 , end = 3 ; 
//         while(start<end){
//             swap(arr[start][j],arr[end][j]);
//             start++ , end-- ; 
//         }
//     }
//     for(int i = 0 ; i<4 ;i++){
//         for(int j = 0 ; j<4 ; j++){
//             cout<<arr[i][j] ; 
//         }
//         cout<<endl ; 
//     }
// return 0 ; 
// }

//rotate matrix by k time  => ktimes%4                                                                                                         


//binary search in 2d array 
//time = O(n+logm)
//space = o(1)
// #include<iostream>
// using namespace std ; 
// int main(){
//     int arr[1000][1000] ; 
//     int n ; 
//     cout<<"n:" ; 
//     cin>>n ;
//     int m ;
//     cout<<"m:" ; 
//     cin>>m ; 
//     for(int i = 0 ; i< n ; i++){
//         for(int j = 0 ; j< m ; j++){
//             cin>>arr[i][j] ; 
//         }
//     }
//     int x ; 
//     cout<<"x:" ; 
//     cin>>x ; 
//     bool found = false ; 
//     for(int i = 0 ; i<n ; i++){
//         if(arr[i][0] <= x && x <= arr[i][m-1]){
//         int start = 0 ,  end = m-1 ; 
//         int mid ; 
//         while(start <= end){
//             mid = start + (end-start)/2 ;
//             if(arr[i][mid] == x ){
//                 cout<<"mil gya";
//                 found = true ; 
//                 break ; 
//             }
//             else if(arr[i][mid] < x){
//                 start = mid + 1 ; 
//             }
//             else{
//                 end = mid -1 ; 
//             }
//         }
//     }
//         if(found) break ; 
//     }
//     if(!found){
//         cout<<"not found"; 
//     }
    
// }


// row index = index/column 
//column index = index%column 
//time = O(log(nm))
//space = O(1)
// #include<iostream>
// using namespace std ; 
// int main(){
//     int arr[4][5] ={{2,6,10,14,18},{20,24,27,29,30},{47,52,78,90,102},{108,111,115,200,265}} ;
//     for(int i = 0 ; i< 4 ; i++){
//         for(int j = 0 ; j< 5 ; j++){
//             cout<<arr[i][j] ; 
//         }
//         cout<<endl ;
//     }
//     int x ; 
//     cout<<"x:" ; 
//     cin>>x ; 
//     bool found = false ; 
//     int start = 0 , end = 4*5-1 ; 
//     int mid ; 
//     while(start<= end){
//         mid = start+(end-start)/2 ; 
//         int rowindex = mid/5 ; 
//         int columnindex = mid%5 ; 
//         if(arr[rowindex][columnindex] == x){
//             cout<<"mil gya"; 
//             found = true ; 
//             break ; 
//         }
//         else if (arr[rowindex][columnindex] < x){
//         start = mid +1 ; 
//         }
//         else{
//             end = mid - 1 ; 
//         }
//         if(found) break ; 
//     }
//     if(!found){
//         cout<<"not find";
//     }
//     return 0 ; 
// }

//search in sorted row column wise matrix 
//time = o(n+m)
//space = o(1) 
//   #include<iostream>
//   using namespace std ;
//   int main(){
//     int arr[5][5] = {{4,8,15,25,60},{18,22,26,42,80},{36,40,45,68,104},{48,50,72,83,130},{70,99,114,124,136}};
//      for(int i = 0 ; i<5 ;i++){
//         for(int j = 0 ; j<5 ; j++){
//             cout<<arr[i][j] ; 
//         }
//         cout<<endl ;
//     }
//     int x ; 
//     cout<<"x:";
//     cin>>x ; 
    
//     int i = 0 , j = 4 ; 
//     while(i<5 && j>=0){
//         if(arr[i][j] == x){
//             cout<<"mil gya "; 
//             break ; 
//         }
//         else if( arr[i][j] < x){
//             i++ ; 
//         }
//         else{
//             j-- ; 
//         }
//     }
//     return 0 ; 
//   }

// find missing and repeating NUMBER WITH THE HELP OF STORE 2 NUMBER IN 1 POSITION 
// #include<iostream>
// using namespace std ; 
// int main(){
//     int arr[7] = { 4,3,2,1,2,7,6} ; 

//     //decrease value by 1 
//     for(int i = 0 ; i<7 ; i++){
//         arr[i]-- ; 
//     }
    
//     //occurance 
//     for(int i =0 ; i< 7 ; i++){
//         arr[arr[i]%7] += 7 ; 
//     }

//         // repeating element
//         for(int i = 0 ; i<7 ; i++){
//             if(arr[i]/7 == 2 )
//             cout<<i+1<<endl ; 
            
//         }

//         //missing element 
//         for(int i = 0 ; i<7 ; i++){
//             if(arr[i]/7 == 0 ) 
//             cout<<i+1<<endl ; 
            
//         }
//         return 0 ; 
// }

//find the occurance of number 

// #include<iostream>
// using namespace std ; 
// int main(){
    
//     int arr[8] = { 3,2,5,3,1,2,3,7};
//     //decrease
//     for(int i = 0 ; i< 8 ; i++){
//         arr[i]-- ; 
//     }

//     //occurance 
//     for(int i = 0 ; i< 8 ;i++){
//         arr[arr[i]%8] += 8 ; 
//     }

//     for(int i = 0 ; i< 8 ;i++){
//         if(arr[i]/8 != 0 && arr[i]/8 !=1)
//         cout<<i+1<<endl ; 
//     }
//     return 0 ; 
// }


//#include<iostream>
// using namespace std ; 
// int main(){
//     int count = 0 ; 
//     int arr[8] = { 3,2,5,3,1,2,3,7};
//     for(int i =0 ; i<8 ; i++){
//         if(arr[i] == 3)
//         count++ ; 
//     }
//     cout<<count;
// }


//majority element => n/2 == occurance find (must be only one number)
//cancel out each other and remaing element is answer 
//MOORE voting algorithm  
//time O(n) 
//space O(1)
// #include<iostream>
// using namespace std ;
// int main(){
//     int arr[11] ={ 3,3,2,3,1,3,2,2,1,3,3} ;
//     int count = 0 ,candidate ;
//     for(int i= 0 ;i<11 ;i++){
//         if(count == 0) {
//             candidate = arr[i];
//         } 
//     else{
//         if(candidate == arr[i]){
//             count++ ;
//         }
//         else{
//             count-- ; 
//         }
//     }
// }
// //varify 
//     count = 0 ;
//     for(int i = 0 ;i<11; i++){
//         if(arr[i] == candidate)
//         count++ ;
//     }
//     if(count= 11/2)
//     cout<<candidate ; 
//     else
//     cout<<"-1";
//     return 0 ; 
// }

