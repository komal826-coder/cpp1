// #include<iostream>
// using namespace std ; 
// int main(){
//     string s ; 
//     cin>>s ;  // end at space , tab , enter only print single name 
//     cout<<s ; 
// }

// #include<iostream>
// using namespace std ; 
// int main(){
//     string s ; 
//     getline(cin,s);    // no end at space and tab only end at enter so we print paragraph 
//     cout<<s<<endl ; 
//     cout<<s.size() ;  
// }


// #include<iostream>
// using namespace std ; 
// int main(){
//     string s1 = "komal" , s2 = "kittu";
//     string s3 = s1+s2 ;  // s1.append(s2) 
//     cout<<s3<<endl ; 
//     s1.push_back('p') ;  // s1 = s1 + "p" ;  // add 
//     s2.pop_back() ;                // delete 
//     cout<<s1<<endl ; 
//     cout<<s2 ; 

// }

// #include<iostream>
// using namespace std ;
// int main(){
//     string s = "komal is a \"good\" girl . " ;  //escape  character (\)
//     cout<<s<<endl ; 
//     string s1 = "\\0" ; 
//     cout<<s1 ;
//     string s2 = "\0" ;  //homework research krna 
//     cout<<s2 ; 
// }

// #include<iostream>
// using namespace std ; 
// int main(){

//     //reverse string 
//     string s ; 
//     cin>>s ; 
//      int start = 0 , end = s.size()-1 ; 

//      while(start<end){
//         swap(s[start],s[end]) ; 
//         start++ , end-- ; 
//      }
//      cout<<s<<endl ; 


//      //calculate size of string 
//      int size = 0 ; 
//      while(s[size] != '\0'){
//         size++ ; 
//      }
//      cout<<size<<" " ; 


//      //check palindrome
//      string s2 = "naman" ; 
//      int start1 = 0 ,end1 = s2.size() - 1 ; 

//      while(start<end) {
//         if(s2[start1] != s2[end1]){
//             cout<<"not a palindrome" ;
//             return 0 ; 
//         }
//         start1++ ; end1-- ; 
//      }
//      cout<<" it is a palindrome" ; 
// }


// // defanging ip address 
// //time = o(n)        
// //space = O(n)
// #include<iostream>
// using namespace std ; 
// int main(){
//     string ans ; 
//     string address ;
//     cin>>address ; 
//     int index = 0  ; 
//     while(index < address.size()){
//         if(address[index] == '.'){
//             ans = ans + "[.]" ;
//         }
//         else{
//             ans = ans + address[index] ; 
//         }
//         index++ ; 
//     }
//     cout<<"ans:"<<ans ; 
//     return 0 ; 
// }


//check if string is rotated by 2 place 
// #include<iostream>
// using namespace std ; 

// //clockwise rotated 
//     void rotatedclockwise( string &s){
//          char c = s[0] ; 
//          int index = 1 ; 

//          while(index < s.size()){
//             s[index-1] = s[index] ; 
//             index++ ; 
//          }
//          s[s.size()-1]= c ; 
//     }

//     //anticlockwise rotation 
//     void rotatedanticlockwise(string &s){
//         char c = s[s.size()-1] ;
//         int index = s.size() - 2 ; 

//         while(index >= 0) {
//             s[index+1] = s[index] ;
//             index-- ; 
//         }
//         s[0] = c ; 
//     }
    
//     //check rotation 
//     bool isrotated(string str1 , string str2){
//          if(str1.size() != str2.size()) 
//          return 0 ; 

//          string clockwise , anticlockwise ; 

//          clockwise = str1 ; 
//          rotatedclockwise(clockwise);
//          rotatedclockwise(clockwise);

//          if(clockwise == str2){
//             return 1 ; 
//          }

//          anticlockwise = str1 ; 
//          rotatedanticlockwise(anticlockwise);
//          rotatedanticlockwise(anticlockwise); 

//          if(anticlockwise == str2){
//             return 1 ; 
//          }
          
//          return 0 ; 
//     }
    

//     int main(){
//         string str1 = "amazon";
//         string str2 = "azonam" ;

//         if(isrotated(str1 , str2))
//         cout<<"yes , rotated " ; 
//         else
//         cout<<"not rotated " ; 

//         return 0 ; 
// }

// check pangram 
//time = O(n)  space =O(1)
// #include<iostream>
// #include<vector>
// #include<cctype>
// using namespace std ;

    
//     bool checkpangram(string sentence){
//     vector<bool>alpha(26,0) ;
//         for(int i = 0 ; i< sentence.size(); i++){
//             char ch = tolower(sentence[i]);
//             if(ch>= 'a' && ch<= 'z')
//             alpha[ch - 'a'] = 1 ; 
//         }
//         for(int i = 0 ; i< 26 ;  i++){
//             if(alpha[i] == 0){
//                 return 0 ; 
//             }
//         }
//             return 1 ; 
//     }

//     int main(){
//     string sentence = "the quick brown fox jumps over the lazy dog" ; 

//     if(checkpangram(sentence))
//     cout<<"pangram"  ; 
//     else 
//     cout<<"not pangram" ; 
//     return 0 ; 
// }
 

//sort a string 
//time = o(n) space = o(n)
// #include<iostream>
// #include<vector>
// using namespace std ;
// int main(){
//     string s = "eabcabd";

//     vector<int>alpha(26,0);
//     for(int i = 0 ; i<s.size() ; i++){
//         alpha[s[i]-'a']++ ;
//     }
//     string ans ; 
//     for(int i = 0 ; i<26 ;i++){
//         char c = 'a' + i ; 
//         while(alpha[i]){
//             ans+=c ; 
//             alpha[i]-- ; 
//         }
//     }
//     cout<<ans ; 
//     return  0 ; 
// }

//longest palindrome 
// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std ; 
// int main(){
//     string s ; 
//     cin>>s ; 
//     vector<int>lower(26,0);
//     vector<int>upper(26,0) ; 
    
//     //frequency updated 
//     for(int i = 0 ; i<s.size(); i++){
//         if(s[i] >= 'a' && s[i]<= 'z') 
//         lower[s[i]-'a']++ ; 
//         else
//         upper[s[i]-'A' && s[i] <= 'Z']++ ; 
//     }
//     int count = 0 ; 
//     bool odd = 0 ; 

//     for(int i = 0 ;i< 26 ;i++){
//         //lower 
//         if(lower[i]%2 ==0) 
//         count += lower[i] ; 
//         else
//         {
//             count+=lower[i] - 1 ; 
//             odd = 1 ; 
//         }
//         if(upper[i]%2 == 0)
//         count += upper[i] ; 
//         else{
//             count += upper[i]-1 ; 
//             odd = 1 ; 
//         }
//     }
//     cout<<count+odd ; 
// }


// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<string>
// using namespace std ;
// int main(){
//     string s ;
//     getline(cin,s);
//     vector<string>ans(10);

//     string temp ; 
//     int count = 0 , index = 0 ;
//     while(index < s.size()){
//         if(s[index] == ' ') {
//             int pos = temp[temp.size() - 1]-'0' ; 

//             temp.pop_back() ; 
//             ans[pos] = temp ; 
//             temp.clear() ; 
//             count++ ; 
//             index++ ; 
//         }
//         else{
//             temp += s[index] ; 
//             index++ ; 
//         }
//     }
//     //handle last word 
//         if(!temp.empty()) {
//             int pos = temp[temp.size() - 1]-'0' ; 

//             temp.pop_back() ; 
//             ans[pos] = temp ;  
//             count++ ;
//     }
//      temp.clear() ;
//     for(int i = 1 ; i<=count ; i++){
//         temp += ans[i] ; 
//         if(i != count)
//         temp += ' ' ; 
//     }
//     temp.pop_back();
   
//  cout<<temp ; 
//  return 0 ; 
// }


//sort vowel in a string 
//time = o(n) 
//space = o(n)
// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<string>
// using namespace std ;
// int main(){
//     string s ; 
//     cin>>s ; 
    
//     vector<int>lower(26,0);
//     vector<int>upper(26,0) ; 
//     for(int i = 0 ; i<s.size() ; i++){

//         //lower a e  i o u 
//         if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o'|| s[i] == 'u')
//         {
//             lower[s[i] - 'a']++ ; 
//             s[i] = '#' ; 
//         }
//         //upper A E I O U 
//         else if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O'|| s[i] == 'U'){
//             upper[s[i] - 'A']++ ; 
//             s[i] = '#' ;
//         }
//     }
//     string vowel ;
//     //upper 
//     for(int i = 0 ;i< 26 ;i++){
//         char c = 'A' + i ; 
//         while(upper[i]){
//             vowel+=c ; 
//             upper[i]-- ; 
//         }
//     }
//     //lower
//      for(int i = 0 ;i< 26 ;i++){
//         char c = 'a' + i ; 
//         while(lower[i]){
//             vowel+=c ; 
//             lower[i]-- ; 
//         }
//     }
//     int first = 0 , second = 0 ; 
//     //second point kr rha h vowel ko 
//     while(second<vowel.size()){
//         if(s[first] == '#'){
//             s[first] = vowel[second];
//             second++ ; 
//         }
//         first++ ; 
//     }
//     cout<<s ; 
//     return 0 ; 
// }


// //add string 
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std ;
// string add(string num1 , string num2){
//     string ans ; 
//     int index1 = num1.size()-1 , index2 = num2.size() - 1 ; 
//     int carry = 0 , sum ; 

//     //index2 >= 0 

//     while(index2>= 0){
//         sum = (num1[index1] - '0') + (num2[index2] - '0') + carry ; 
//         carry = sum/10 ; 
//         char c = '0' + sum%10 ; 
//         ans += c ; 
//         index2--, index1-- ; 
//     }
//     //index1 >= 0 
//     while(index1>= 0){
//         sum = (num1[index1] - '0')  + carry ; 
//         carry = sum/10 ; 
//         char c = '0' + sum%10 ; 
//         ans += c ; 
//         index1-- ; 
//     }
//     if(carry) 
//     ans+=1 ; 
//     reverse(ans.begin(), ans.end());
//     return ans ; 

// }
// int main(){
//     string num1 , num2 ; 
//     cin>>num1 ; 
//     cin>>num2 ; 
//     if(num1.size() > num2.size()){
//         cout<<add(num1 , num2) ; 
//     }
//     else{
//         cout<<add(num2 , num1) ; 
//     }
// }

//roman to integer 
// #include<iostream>
// using namespace std ;

//     int num(char c){
//         if(c == 'I' )
//         return 1 ; 
//         else if (c =='V') 
//         return 5 ; 
//         else if (c =='X') 
//         return 10 ; 
//         else if (c =='L') 
//         return 50 ; 
//         else if (c =='C') 
//         return 100 ; 
//         else if (c =='D') 
//         return 500 ; 
//         else 
//         return 1000 ; 
//     }
//     int main(){
//     string s ; cin>>s ; 

//     int sum = 0 , index = 0 ; 
//     while(index<s.size()-1){
//         if(num(s[index])>num(s[index+1]))
//         sum -= num(s[index]);
//         else 
//         sum += num(s[index]);
//         index++ ; 
//     }
//     sum += num(s[index]) ; 
//     cout<<sum ; 
// }

//factorial of a number in string and array 
// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std ; 
// int main(){
//     vector<int>ans(1,1);
//     int n ; 
//     cin>>n ; 
//     while(n>1){
//         int carry = 0 , res , size = ans.size() ; 
//         for(int i = 0 ; i< size ; i++){
//             res = ans[i]*n + carry ; 
//             carry = res/10 ; 
//             ans[i] = res%10 ; 
//         }
//         while(carry ) {
//         ans.push_back(carry%10) ;
//         carry /= 10 ; 
//     }
//     n-- ; 
//     }
//     reverse(ans.begin() , ans.end());
//     for(int i = 0 ; i <ans.size(); i++){
//         cout<<ans[i] ; 
//     }
//     return 0 ; 
// }

//longest substring without repeating char
// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std ;
// int main(){
//     string S ; 
//     getline(cin,S); 
//     vector<int>count(256,0);
//     int first = 0 ,second = 0 , len = 0; 

//     while(second<S.size()){
//         //repeating char 
//         while(count[S[second]]){
//             count[S[first]] = 0 ; 
//             first++ ; 
//         }
//         count[S[second]] = 1 ; 
//         len = max(len,second-first+1);
//         second++ ;
//     }
//     cout<<len ; 
// } 

//smallest distinct window
// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std ; 
// int main(){
//     string s ; 
//     getline(cin,s) ;

//     vector<int>count(256,0);

//     int first = 0, second = 0 ,len = s.size(),diff = 0;
// //calculate all unique character 
//     while(first<s.size()){
//         if(count[s[first]]== 0)
//         diff++ ;  
//         count[s[first]]++;
//         first++;
//     }
//     for(int i = 0 ; i<256 ; i++){
//         count[i] = 0 ; 
//     }
//     first = 0 ; 
//     while(second<s.size()){
//         //diff exist krta h 
//         while(diff&& second<s.size()){
//             if(count[s[second]]==0)
//             diff-- ; 

//             count[s[second]]++;
//             second++;
//         }
//         len = min(len,second-first);
        
//         //diff li value 1 na bn jaye 
//         while(diff!=1){
//             len = min(len , second-first);
//             count[s[first]]--;

//             if(count[s[first]]==0)
//             diff++;

//             first++;

//         }
//     }
//     cout<<len ; 
// }


//kmp algorithm 
// #include<iostream>
// #include<vector>
// using namespace std ; 
// int main(){
//     string s ; 
//     getline(cin,s) ; 

//     vector<int>lps(s.size() , 0) ; 

//     int pre= 0 , suf = 1 ; 
//     while(suf<s.size()){
//         if(s[pre] == s[suf]) {
//             lps[suf] = pre+1 ; 
//             pre++ , suf++ ;  
//         }
//         else{    
//             if(pre ==0){
//                 lps[suf] = 0 ; 
//                 suf++ ; 
//             } 
//             else{
//                 pre = lps[pre-1] ; 
//             }
//         }
//      }//for(int i = 0 ;i <s.size(); i++)
//     cout<<lps[s.size()-1] ;
//     return 0; 
// }

//STRING MATCHING 
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
