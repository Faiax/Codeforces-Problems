#include <bits/stdc++.h>
using namespace std;
int main(){

    int n{0};
    cin >> n;
    int x{0};
    int y{0};

    if(n%2 == 0){
        cout << 4 << " " << n-4;
    }


    if(n%2 != 0){
        cout << 9 << " " << n-9;
    }



    return 0;
}