#include<iostream>
#include<vector>
using namespace std ; 

int pre = 0 , suf = 1 ; 

while(suf<s.size()){

    //match 
    if(s[pre] == s[suf] ){
        lps[suf] = pre +1 ; 
        suf++ , pre++ ;
    }
    //not match 
    else {
        if(pre == 0){
            lps[suf] = 0 ; 
            suf++ ;
        }
        else{
            pre = lps(pre-1);
        }
    }
}
int main(){
    string haystack ;
    string needle ;
    getline(cin, haystack);
    getline(cin, needle);

    vector<int>lps(needle.size(),0);
    lpsfind(lps,needle);

    int first = 0 ; second = 0 ; 

    while(first < haystack.size() && second < needle.size()){
        //match 
        if(haystack[first] == needle[second] ){
            first++ , second++ ;
        }

        //no match 
        else{
            if(second == 0)
            first++ ;
            else
            second = lps[second-1] ; 
        }
    }
    // answer exist 
    if(second == needle.size())
    return first + second ; 

    return -1 ; 
}
