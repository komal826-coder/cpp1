//file handling 
//ofstring 
//ifstring 
//read , write 
//    ios => (istream => ifstream, ostream => ofstream ,) => iostream

//write 
// #include<iostream>
// #include<fstream>
// using namespace std ;
// int main(){
//     //file ko open karna 
//     ofstream fout;
//     fout.open("zoom.txt"); //create kar dega aur fr open kr dega
//     //write kar skta h 
//     fout<<"hello india";
//     fout.close(); // resource relese kr paaun
// }


//read 
// #include<iostream>
// #include<fstream>
// using namespace std ;
// int main(){
//     ifstream fin ; 
//     fin.open("zoom1.txt") ;
//     //fr read karo 
//     char c ; 
//     //fin>>c ; 
//     c = fin.get(); // for space read 
//     while(!fin.eof()){ //eof => end of file 
//         cout<<c;
//         //fin>>c ;
//         c = fin.get() ;  
//     };
//     fin.close();
// }


// #include<iostream>
// #include<fstream>
// #include<vector>
// using namespace std ; 
// int main(){
//     vector<int>arr(5) ; 
//     cout<<"enter the input :"; 
//     for(int i = 0 ; i<5 ; i++){
//         cin>>arr[i] ; 
//     } 

//     //file ko open krna h 
//     ofstream fout;
//     fout.open("zero.txt") ; 
//     fout<<"original saata\n" ;
//     for(int i = 0 ; i<5 ; i++){
//         fout<<arr[i]<<" " ; 
//     };
//     fout<<"\n sorted data\n" ;
//     sort(arr.begin() , arr.end()) ; 
//     for(int i = 0 ; i<5 ; i++){
//          fout.close() ; 
//     } 
// }


// #include<iostream>
// #include<fstream>
// using namespace std ; 
// int main(){
//     ofstream fout; 
//     fout.open("z1.txt") ;
//     fout<<"hello india" ; 
//     fout<<"hello rohit " ; 
//     fout<<"hello komal"; 
//     fout.close() ; 

//     ifstream fin; 
//     fin.open("z1.txt") ; 

//     string line ; 
//     while(getline(fin,line)) {
//         cout<<line<<endl ; 
//     }
//     fin.close() ; 
// }