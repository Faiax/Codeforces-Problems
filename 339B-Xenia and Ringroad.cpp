#include <bits/stdc++.h>

using namespace std;

int main(){

    // input and decleration
    int n{0}, m{0};
    cin >> n >> m;
    int arr[m];
    for(int i=0; i<m ;i++ ){
        cin >> arr[i];
    }

    //main algorithm

    long long int count = arr[0]-1;

    for(int i =0; i<m-1; i++){
        
        if(arr[i]> arr[i+1]){

            count = count +(n- (arr[i]-arr[i+1]));
        }
        else if(arr[i]<arr[i+1]){
            count = count + (arr[i+1]-arr[i]);
        }
    }
    cout << count << endl;

    return 0;
}