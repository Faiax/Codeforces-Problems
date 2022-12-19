#include <bits/stdc++.h>

using namespace std;

int main(){

    // decleration and inputting
    int odd{0};
    int even{0};

    int counter = 0;
    int n; // number of test case
    cin >> n;
    int A[n];
    for(int i = 1;  i<=n; i++){ // inputting values in the array
        cin >> A[i];}


    // main condition
    for(int i = 1; i<=n;i++){ // if odd/even number is greater

        if(A[i] % 2 == 0){
            even++;}
        else{odd++;}
        }




    if(odd<even){
        for(int i = 1; i<=n;i++){

            if(A[i] % 2 != 0){ // for finding odd
                counter = i;}
        }
    }


    else{
        for(int i = 1; i<=n;i++){
            if(A[i] % 2 == 0){ // for finding even
                counter = i;}
        }
    }  
    

    cout << counter << endl;



    return 0;
}