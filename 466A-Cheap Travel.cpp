#include <bits/stdc++.h>
using namespace std;

int main(){

    int n{0}, m{0}, a{0}, b{0};
    cin >> n >> m >> a >> b;

    if(m*a > b){
        
        int x = (n%m)*a;
        if(x>b){
            cout << n/m *b + b;
        }
        else{
            cout << n/m * b +x;

        }
    
    }
    else{
        
        cout << a*n << endl;
    }

    return 0;
}