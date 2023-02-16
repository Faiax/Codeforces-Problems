#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[4];

    for(int i = 0; i<=3; i++){
        cin >> arr[i];
    }
    sort(arr,arr+4);

    int a{0}, b{0}, c{0};

    c = (arr[3] - arr[0]);
    a = (arr[1] - c);
    b = (arr[2] - (b+c));


    cout << a << " " << b << " "<< c << endl;
    return 0;
}


