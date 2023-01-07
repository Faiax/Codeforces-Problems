#include <bits/stdc++.h>

using namespace std;

int main(){

    // inputting and decleratoin 
    int count{0};
    string s;
    getline(cin,s); // cout doesnt work; thats why getline
    sort(s.begin(), s.end());
    // main algoritm


    for(int i = 0; i<s.size(); i++){

        if(s[i] == ' ' || s[i] == '{' || s[i] == ','|| s[i] == '}'){
            continue;
        }
        else{

            if(s[i]!= s[i+1]){
                count++;
            }
        }

    }

    

    cout << count;





    return 0;
}