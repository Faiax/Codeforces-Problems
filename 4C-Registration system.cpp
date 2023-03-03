#include<iostream>
#include <bits/stdc++.h>
using namespace std;




int main(){

    map<string,int> reg;
    string s;
    int t;
    cin >> t;
    for(int i = 0; i<t; i++){
        cin >> s;

        if(reg[s] == 0){
            reg[s] = 1;
            cout << "OK\n";
        }        
        else{
            cout << s <<reg[s] << endl;
            reg[s]++;
        }
    }


    

    return 0;
}