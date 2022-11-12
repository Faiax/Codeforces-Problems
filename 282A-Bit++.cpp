#include <iostream>
using namespace std;
int main(){

    int n{0}; // The number of statements in programm
    int x{0};
    string s; // string that stores plus or minus
    
    
    cin >> n;//  imputs how many times the code will run
    
    for(int i= 0; i<n; i++){// runs the programm n no. times
        
        cin >> s;
        
        if(s[1] == '+'){ // + or - can be found in the second value 
            x = x+1;}
        else{
            x = x-1;}}
            
    cout << x;

}