#include <bits/stdc++.h>
using namespace std;

int main(){

    int a{0}, b{0};
    cin >> a >> b;

    if(a>b){
        cout << b << " ";
        cout << (a-b)/2;
    }
    else{
        cout << a << " ";
        cout << (b-a)/2; 
    }

    return 0;
}