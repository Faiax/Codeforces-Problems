#include <bits/stdc++.h>


using namespace std;

int main(){


    
    string s;
    cin >> s;

    int size = s.size();
    
    for(int i= 0; i<size; i = i+2){ // i = i+2 beacouse + is ignored during the loop

        for(int j = 0; j< size-1; j = j+2){ // size-1 -> while the loop ends the last digit is already counted

            if(s[j]> s[j+2]){

                swap(s[j], s[j+2]);
            }
        }
    }

    cout << s<< endl;


}