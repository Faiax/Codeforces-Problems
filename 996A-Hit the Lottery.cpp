#include <bits/stdc++.h>

using namespace std;
int main(){

    // deleration and inputting
    int n{0};
    cin >> n;

    // main algorithm
    int ans = n/100;
    int left = n%100;

    ans  = ans + left/20;
    left = left%20;
    
    ans  = ans + left/10;
    left = left%10;
    
    ans  = ans + left/5;
    left = left%5;

    ans = ans + left/1;
    
    
    
    
    cout << ans << endl;

    return 0;
}
