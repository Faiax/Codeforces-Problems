#include <bits/stdc++.h>
using namespace std;

//Disply a Array--------------------------
void display(int a[], int n){ // (array, NumberOfElement)
    for(int i= 0; i<n; i++){
        cout << a[i] << " ";}}




int main(){

    int n{0};
    cin >> n;
    int arr[n];

    for(int i= 0; i<n;i++){
        cin >> arr[i];
    }
    
    // sorting an array
    for(int i = 0 ; i<n; i++) {

        for(int j = i+1; j <n; j++){
            
            //ascending order
            if(arr[j]<arr[i]){

                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }



    display(arr, n);

    return 0;
}