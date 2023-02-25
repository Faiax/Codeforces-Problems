#include <bits/stdc++.h>
using namespace std;
int main(){

    int count{0};
    int n;
    cin >> n;
    int a[n];

    for(int i{0}; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    int maxx = a[n-1];

    if(n==1){
    count = 0;
    }

    else{
        for(int i{0}; i<n; i++){

            int y = maxx -a[i];
            count = count + y;
        }
    }

    cout << count << endl;
    return 0;
}