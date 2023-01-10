#include <bits/stdc++.h>

using namespace std;

int main(){

    // decleration and inputting
    int c{0} , m{0};
    int n{0}; //num of trams stop
    cin >> n;
    int a{0}; //num of the pass exits the tram
    int b{0}; //num fo the pass enters the tram

    // main algorithm 
    for(int i = 0; i<n; i++){

        cin >> a >> b;
        c = c-a;
        c = c+b;
        if(c>m){
            m = c;
        }


    }

    cout << m<< endl;   

}