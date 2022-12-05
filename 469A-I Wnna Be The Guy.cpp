#include <bits/stdc++.h>

using namespace std;

int main() {


    int n{ 0 };
    int p{ 0 };
    int q {0 };
    int arr[200];
    int count = 0;

    cin >> n>> p; 
    for(int i = 0; i<p; i++){

        cin>> arr[i];
    }
    cin >> q;

    
    for(int i = p; i<p+q; i++){

        cin>> arr[i];
    }

    sort(arr, arr+(p+q));


    for(int i = 0; i<p+q;i++){

        if(arr[i]!= arr[i+1]){
            count++;
        }
    }
    
    if(count==n){
        cout << "I become the guy.\n";
    }
    else{
        cout << "Oh, my keyboard!\n";
    }
    return 0;
}