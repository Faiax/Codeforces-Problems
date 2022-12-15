#include <bits/stdc++.h>

using namespace std;

void sortString(string &s ){
    sort(s.begin(), s.end());
}

int main(){

    string guestName , host,  shufLetter; // decleration
    cin >> guestName >> host >> shufLetter; // imputting

    string all = guestName+host;
    

    sortString(all);
    sortString(shufLetter);


    if(all == shufLetter){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}