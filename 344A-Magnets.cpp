#include <bits/stdc++.h> 

using namespace std;

int main() {

    int n{0};
    cin >> n;
    int arr[n];
    int count{0};


    for(int i = 0; i< n; i++){

        cin >> arr[i]; 

        
    }

    for(int x = 0; x< n; x++){

        if(arr[x]!=arr[x+1]){

            count++;
        }

    }

    cout << count << endl;
    return 0;
}