#include <bits/stdc++.h>
using namespace std;
int main(){
// need to find a number between "0 <= x <= n" 
// if you do a modolus of k with x
// then remainder is y


    int t{0};
    cin >> t;
    while(t--){
        int x{0} , y{0}, n{0};
        cin >> x >> y >> n;
        int k = n%x;
        if(k-y>=0){
            n  = n-(k-y);
        }
        else{
            n = n-k-x+y;
            
        }
        cout << n << endl;
    }

    return 0;
}