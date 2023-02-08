#include <bits/stdc++.h>

using namespace std;

int main(){

    // decleration and inputting
    int n{0};
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int x{0};

    int min{0};
    // main algorithm

    for(int i = 0; i<n; i++){

        x = x+arr[i];
        
        if(min>x){
            min = x;
        }

    }
    
    cout << abs(min) << endl;
    

    return 0;
}