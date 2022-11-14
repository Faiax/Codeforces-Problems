
#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;
    

int main(){
    
    int a = 0;
    int b = 0;
    int year = 0; // this will be the answer
    cin >> a  >> b;
    
    // in 1 year a's weight a*3
    // in 1 year b's weight b*2
    
    
    if(a > b){
        
        year = 0;
        
        }
    else{
        
        while(a<=b){
            
            a = a*3;
            b = b*2;
            year ++;
            
            
            
            }}

    cout << year;
    return 0;}