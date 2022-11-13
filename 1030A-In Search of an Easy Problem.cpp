
#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;
    

int main(){
    
    int n{0};
    int x{0};
    cin >> n; // imputting the number of participants 
    int a[n];
    
    for(int i = 0; i<n; i++){ // if any 1 of n people said its hard then asnwer is hard
        
        cin>> a[i]; // imputting the n number of answers
        
        if(a[i] == 1){ // 1 means hard 0 means easy
            
            x++;} // if anyone says hard, the number of it will be added.
                  // this is will never be zere if we get more than one hard
        
    }
    if(x == 0){
        cout << "EASY";}
    else{
        
        cout << "HARD";}
}