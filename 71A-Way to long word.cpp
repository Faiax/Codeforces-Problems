#include <iostream>

using namespace std;

int main(){
    string s;
    int n{0}; // declear variable
    cin >> n; // taking input
    
    for(int i = 0; i < n; i++){ // the block of code will run till n number of times
        
        cin >> s;
        if(s.length() > 10){ // if the length of the string is less than 10
            
            cout << s[0] << s.length()-2 << s[s.length()-1] << endl;
            
        }
        else{
            cout << s << endl;}
        
    }
}