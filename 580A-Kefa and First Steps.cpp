#include <bits/stdc++.h>
using namespace std;

int main(){
    // decleration and inputting
    int count{0};
    int maxcnt{1};
    int n{0};
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }

    // main algorithm
    for(int i = 0; i<n; i++){


        if(a[i]>=a[i-1]){
            count++;
            maxcnt = max(maxcnt, count);
        }
        else{
            count = 1;
        }

    }

    cout << maxcnt << endl;

    

    return 0;
}