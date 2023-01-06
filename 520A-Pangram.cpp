#include <bits/stdc++.h>

using namespace std;

int main(){

    // inputting and decleration
    int count{0};
    int n{0};
    string s;
    cin >> n >> s;

    // main algoritm

    for(int i = 0; i<n; i++){
        s[i] = towlower(s[i]);
    }
    sort(s.begin(), s.end());




    for(int i = 0; i<n; i++){
        if(s[i] != s[i+1]){
            count++;}
    }

    if(count==26){
        cout <<"YES\n";}

    else{
        cout << "NO\n";}
    



}