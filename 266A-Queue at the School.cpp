#include <bits/stdc++.h>
using namespace std;


int main(){

    // Decleration and Inputting
    int n{0};
    int t{0};
    string s;
    cin >> n >> t>> s;


    // Main algorithm

    for(int i = 0; i<t ;i++){
        for(int j = 0; j<s.size()-1; j++){

            if(s[j] == 'B' && s[j+1] == 'G' ){

                s[j] =  'G';
                s[j+1] = 'B';
                j++;
            }
            else{

            }
        
        }   
    }


    cout << s;
    
    return 0;
}