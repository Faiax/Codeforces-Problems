#include <bits/stdc++.h>

using namespace std;

int main(){

    // decleration and inputting
    long long int n{0};
    long long int k{0};
    long long int c{0};
    cin >> n >> k;

    // for odd = (k*2)-1;
    // for even = (k-c)*2 ; k is the position; c is the partition;
    // we get the value of x'th position from the equation;

    if(n%2==0){
        c = n/2;
    }
    else{
        c = (n+1)/2;
    }

    if(k<=c){

        cout << (k*2)-1 << endl;
    }
    else{
        cout << (k-c)*2 << endl;
    }
    return 0;
}