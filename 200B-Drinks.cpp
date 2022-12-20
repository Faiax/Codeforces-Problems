#include <bits/stdc++.h>

using namespace std;

int main(){

    int n{0};
    cin >> n;
    int arr[n];

    long double count = 0;

    for(int i= 0; i<n; i++){
        cin >> arr[i];}

    for(int i = 0; i<n;i++){
        
        count = arr[i]+ count;        
    }

    cout << count/n << endl;

    return 0;
}