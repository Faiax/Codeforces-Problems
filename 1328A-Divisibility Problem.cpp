#include <bits/stdc++.h>

using namespace std;

int main(){

    // inputting and decleratoin 
    int n{0};
    cin >> n;
    int a[n];
    int b[n];
    for(int i = 0; i<n; i++){
        cin>> a[i] >> b[i];
    }
    // main algoritm

    for(int i = 0; i<n; i++){
        
        if(a[i]%b[i] == 0){
            cout << 0 << endl;
        }
        else{
            cout << (b[i]-(a[i]%b[i])) << endl;
        }
    
    
    
    }
    return 0;
}