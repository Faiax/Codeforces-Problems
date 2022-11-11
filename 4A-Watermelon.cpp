#include <iostream>
using namespace std;

int main(){
    
    int w{0}; // initializing the variable
    
    cin >> w; // inputting the varibale
    
    if(w%2==0 && w>2){ // placing the condition
                       // && means both of the operations should be true
                       // % =  remainder or signed remainder of a division
        cout << "YES";
    }
    else{
        cout << "NO" ;
    }
    
    return 0;}
