
#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;
    

int main(){
    
    int up{0}; // count number of upper case
    int low{0}; // count the number of lower case
    string s;
    cin  >> s;
    
    for(int i = 0; i < s.size(); i++) {
        
        
        if(isupper(s[i])) {
            up++;}
            
        else{
            low++;}
        }
        
        
    if(up<low){
        
        for(int i = 0; i < s.size(); i++){
            s[i] = towlower(s[i]);}
        cout << s << endl;
        }
        
    if(up>low){
        
        for(int i = 0; i < s.size(); i++){
            s[i] = towupper(s[i]);}
        cout << s << endl;
        }
        
    if(up==low){
        
        for(int i = 0; i < s.size(); i++){
            s[i] = towlower(s[i]);}
        cout << s << endl;
        }
    
    return 0;}