#include <bits/stdc++.h>

using namespace std;
int main(){

    // deleration and inputting
    int count{0};
    int n;
    cin >> n;
    int x[n];
    int y[n];
    for(int i = 0; i<n; i++){
        cin >> x[i] >> y[i];
    }
    // main algoritm

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(x[i] == y[j] ){ // for 1 variable of x all the variable of y will be checked
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}