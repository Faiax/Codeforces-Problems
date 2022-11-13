


#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;
    

int main(){

    /*
    distinct digit:
    1 9 8 7
    | | | |
    a b c d
    
    a≠b && a≠c %% a≠d && b≠c && b≠d && c≠d
    */
    
    int n{0};
    int a,b,c,d;
    cin >> n;
    
    while(true){
    n=n+1;
    a =  n/1000;
    b = (n/100)%10;
    c = (n/10)%10;
    d = n%10;
    
    if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
        break;}
    }
    cout << n;
    }