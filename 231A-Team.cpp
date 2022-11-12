#include <iostream>
using namespace std;
int main(){
    int a{0}; // player 1
    int b{0}; // player 2
    int c{0}; // player 3
    int n{0}; // number of problems
    int count{0}; // answer

    cin >> n;
    
    for(int i=0; i < n; i++){ // repetes the command for n number of times
        
        cin >> a >> b >> c; // takes the command for each round
        
        if(a + b + c >= 2){
           count++;
            }
        }
    cout << count;
}