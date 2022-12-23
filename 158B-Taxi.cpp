#include <bits/stdc++.h>
using namespace std;

int main(){

    // decleration and inputting
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    int minTaxi = 0;
    int n{0};
    cin >>n;
    int s[n]; 
    for(int i=  0; i<n; i++){
        cin>> s[i];
    }

    // main algorithm
    for(int i  = 0; i<n; i++){ // classifiying the groups
        if(s[i] == 1){
            count1++;
        }
        else if(s[i] == 2){
            count2++;
        }
        else if(s[i] == 3){
            count3++;
        }        
        else if(s[i] == 4){
            count4++;
        }
        else{}
    }

    minTaxi = count4; 

    while(count1 !=0 && count3 != 0){ 
        count3 = count3-1;
        count1 = count1-1;
        minTaxi++;
    }
    if(count1 == 0 && count3 != 0){  
        minTaxi = minTaxi+count3;
        count3 = 0;
    }
    minTaxi = minTaxi+ count2 /2; 

    if(count2%2 != 0){
        if(count1<=2){
            minTaxi++;
            count2 = 0;
            count1 = 0;
        }
        else{
            count1 = count1-2;
            minTaxi++;
            count2 = 0;

        }
    }
    if(count1 != 0){
        minTaxi = minTaxi+count1/4;
        if(count1%4 != 0){
            minTaxi++;
        }
    }
    cout << minTaxi  << endl;




    return 0;
}