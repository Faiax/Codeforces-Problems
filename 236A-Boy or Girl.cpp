#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    
    string s;// decleration
    cin >> s; // input
    
    int count = 0;
    
    
    sort(s.begin(), s.end()); // input: ZYXWVUTSRQPONMLKJIHGFEDCBA
                             // output: ABCDEFGHIJKLMNOPQRSTUVWXYZ
    
    for( int i = 0; i < (s.size());i++){// will run for (size of string)th times
        
        if(s[i] != s[i+1]) // get the distinct value
            count++;
        //after sorting if first letter is not equals to
        //second letter then there is no same letter

        }
        

     if(count%2 ==0){
        cout << "CHAT WITH HER!" << endl;}
        else{
        cout << "IGNORE HIM!" << endl;}
        
        return 0;}