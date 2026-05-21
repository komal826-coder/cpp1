#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
int main(){
    // // create vector , declare 
    // vector<int>v ; 
    // //size and capacity 
    // cout<<"size of v:"<<v.size()<<endl ; 
    // cout<<"capacity of v:"<<v.capacity()<<endl ; 
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // cout<<"size of v:"<<v.size()<<endl ; 
    // cout<<"capacity of v:"<<v.capacity()<<endl ; 
    // //update value 
    // v[1] = 5 ; 

    // vector<int>v1(5,1) ; 
    // cout<<"size of v:"<<v1.size()<<endl ; 
    // cout<<"capacity of v:"<<v1.capacity()<<endl ; 
    // v1.push_back(5) ; 
    // cout<<"size of v:"<<v1.size()<<endl ; 
    // cout<<"capacity of v:"<<v1.capacity()<<endl ; 

    // vector<int>v3 ={ 1,2,3,4,5} ; 

    // //delete value from vector 
    // vector<int>vnew ;
    // vnew.push_back(40) ;  
    // vnew.push_back(41) ;
    // vnew.push_back(42) ;  
    // vnew.push_back(43) ;
    // vnew.push_back(44) ;
    // delete
    // vnew.pop_back() ; 
    // cout<<"size of v:"<<vnew.size<<endl ; 
    // cout<<"capacity of v:"<<vnew.capacity<<endl;

    // //delete at a index 
    // vnew.erase(vnew.begin()+1); 
    // cout<<"size of v:"<<vnew.size<<endl ; 
    // cout<<"capacity of v:"<<vnew.capacity<<endl;
    // for(int i = 0 ;i<vnew.size();i++){
    //     cout<<vnew[i]<<" "<<endl  ; 
    // }
    // vnew.insert(vnew.begin()+1,50) ; 
    // for(int i = 0 ;i<vnew.size();i++){
    //     cout<<vnew[i]<<" "<<endl  ; 
    // }
    // vnew[1] = 333; 
    // for(int i = 0 ;i<vnew.size();i++){
    //     cout<<vnew[i]<<" "<<endl  ; 
    // }
    // //single element print 
    // cout<<vnew[vnew.size()-1]<<endl ;  //lat element 
    // cout<<vnew.back()<<endl;   //last element
    // cout<<vnew[0]<<endl ; 
    // cout<<vnew[2]<<endl ; 
    // //clear remove all the element
    // vnew.clear();
    // cout<<"size of v:"<<vnew.size<<endl ; 
    // cout<<"capacity of v:"<<vnew.capacity<<endl;

    // vector<int>a ; 
    // //copy value of 1 vector to another 
    // a = vnew ;
    // cout<<a.size();
    // for(auto it = vnew.begin(); it != vnew.end();it++){
    //     cout<<*it<<" " ; 
    // }
    // cout<<endl ; 
    // for(auto i:vnew)
    // cout<<i; 

    
    vector<int>ans ; 
    ans.push_back(4) ; 
    ans.push_back(40) ;
    ans.push_back(140) ;
    ans.push_back(57) ;
    ans.push_back(400) ;
    ans.push_back(44) ;
    // // sort in increasing order 
    // sort(ans.begin(),ans.end());
    // for(int i = 0 ;i<ans.size();i++){
    //     cout<<ans[i]<<" " ; 
    // }
    // cout<<endl ; 
    // // sort in decreasing order 
    // sort(ans.begin(),ans.end(),greater<int>()); 
    // for(int i = 0 ; i<ans.size();i++){
    //     cout<<ans[i]<<" " ; 
    // }
    // cout<<endl ;

    //  sort(ans.rbegin(),ans.rend());
    // for(int i = 0 ;i<ans.size();i++){
    //     cout<<ans[i]<<" " ; 
    // }
    // cout<<endl ;

    // //search in binary search 
    // cout<<binary_search(ans.begin(), ans.end(),57)<<endl ; 
    // cout<<binary_search(ans.begin(), ans.end(),37)<<endl ; 

    // cout<<find(ans.begin(),ans.end(),57)-ans.begin() <<endl ; 

    //count 
    cout<<count(ans.begin(),ans.end(),5);

    //max or min
    cout<<*max_element(ans.begin(),ans.end())<<endl;
    cout<<*min_elemnt(ans.begin(),ans.end());

    //lower bound // upper bound 
    sort(ans.begin(),ans.end());
    cout<<*lower_bound(ans.begin(),ans.end(),4);
    cout<<*upper_bound(ans.begin(),ans.end(),4);
    return 0 ; 
} 