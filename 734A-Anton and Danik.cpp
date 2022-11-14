#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

  /*
 if number of A>D then A
 if number of D>A then D
 if number of D==A then "Friendship"
 */
 
int main(){
    
    
    int n{0};
    string s;
    int anton{0};
    int Danik{0};
    
    cin >> n >> s;
    
    for(int i = 0; i<n; i++){
        
        if(s[i] == 'A'){
            anton++;
            }
        else{
            Danik++;}
        }
        
        
    if(Danik>anton){
        cout << "Danik";}
    else if(anton> Danik){
        cout << "Anton";}
    else{cout << "Friendship";}
    return 0;
}