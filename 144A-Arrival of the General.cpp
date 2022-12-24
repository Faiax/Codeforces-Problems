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
    // the counter variables
    int max = 0;
    int min = 101; // if its value is 0 then it will remain zero cz we need to find the smallest among these
    int iMax = 0;
    int iMin = 0;

    // main algorithm

    for(int i = 0; i<n; i++){ // for finding the max value
        if(arr[i]>max){
            max = arr[i];
            iMax = i;
        }
    }

    for(int i = 0; i<n; i++){ // for finding the min value
        if(arr[i]<=min){
            min = arr[i];
            iMin = i;
        }
    }

    if(iMax>iMin){

        iMin++;
    }
    cout << iMax+(n -1)-iMin << endl;
    return 0;
} 