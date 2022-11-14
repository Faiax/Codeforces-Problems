
#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;
    

int main(){
    
    int n{0};
    int k{0};
    
    cin >> n >> k;
    /* 
    input : 512 4
    The first example corresponds to the following sequence:
    512→ 511 → 510→ 51→ 50
    */
    
    for(int i{0}; i<k; i++){
        
        if(n%10 == 0){
            n = n/10;}
        else{ n--;}
        }
    cout << n << endl;
    
    return 0;}