#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >>  d >> p >> nl>> np;

    int totalDrinks = k*l;
    totalDrinks = totalDrinks/nl;
    int totalSlices = c*d;
    int totalSalt =p/np;

    int ans = min(min(totalDrinks, totalSlices), totalSalt)/n;
    cout << ans << endl;
}