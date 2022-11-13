#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;
    

int main(){
    
   string s;
    string t; // decleration
    cin >> s >> t; //  imput 
    
    reverse(s.begin(), s.end()); // input: abcdef
                                // output: fedcba
    if(s==t){
        
        cout << "YES";}
        
    else{
        cout << "NO";}
   
}