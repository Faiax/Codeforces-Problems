#include <bits/stdc++.h>
using namespace std;

int main(){

    // decleration and inputting
    int k{0};
    int l{0};
    int m{0};
    int n{0};
    int d{0};
    int count{0};
    cin >> k >> l >> m >> n >> d;

    // main algorithm

    for(int i = 1 ;i<=d; i++){

        if(i%k==0 ||i%l==0 ||i%m==0 ||i%n==0){
            count++;
        }

    }

    cout << count << endl;


    return 0;
}