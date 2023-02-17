#include <bits/stdc++.h>
using namespace std;

int main(){

    int n{0}, m{0};
    cin >> n >> m;
    // first move akshat  = odd
    // second move Malvika = even

    int x = min(n,m);

    if(x%2==0){
        cout << "Malvika\n";
    }
    else{
        cout<< "Akshat\n";
    }


    return 0;
}