#include <bits/stdc++.h>


using namespace std;

int main(){

    // decleration
    int count{0};
    int n{0};
    int k{0};
    cin >> n>>k;
    int y[n];

    // inputting
    for(int i= 0; i<n;i++){
        cin>> y[i];}

    cout << endl;

    // main condition
    for(int i = 0; i<n;i++){

        if(y[i] + k <=5){ 
            count++;
        }
    }
    
    cout << count/3 << endl;

}