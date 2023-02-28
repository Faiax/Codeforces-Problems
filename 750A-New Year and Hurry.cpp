#include <bits/stdc++.h>
using namespace std;
int main(){
    int ans{0};
    int n{0},k{0};
    cin >> n >> k;
    int sum{0};
    for(int i = 1; i<=n ;i++){
        sum = (i*5)+sum;
        if(sum+k >240){
            break;
        }
        ans = i;
    }
    cout << ans << endl;
}