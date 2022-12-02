#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n{0};
    cin >> n;

    int arr[n];

    
    for(int i = 0; i<n; i++){
        cin >> arr[i];
        
    }

    for(int x= 1; x<=n; x++){

        for(int i = 0; i<n;i++){
            if(arr[i]== x){
                cout << i+1 << " ";
            }
        }

    }
    return 0;
}