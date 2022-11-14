
#include <iostream>
using namespace std;
    

int main(){
    
    int x;
    cin >> x;
    int pas = x/5;
    
    if(x%5 > 0){
        pas++;}
    
    cout << pas;
    return 0;}