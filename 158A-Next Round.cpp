#include <iostream>
using namespace std;
int main(){

    int n = 0;// no of total player
    int k = 0; // player no for which we have to check scoor with
    
    cin >> n >> k;
    int a[n]; // an array to store the scoore of the n players
    
    for(int i=0; i < n; i++){ // repetes the command for n number of times
        
        cin >> a[i];}// this code successfully stores the value of given numbers
        
    int count = 0;// to store the count of player that will qualify for the next round
    
    
    for(int i=0; i < n; i++){ 
        
        if(a[i] >= a[k-1] && a[i]!=0){ // this is the main condition
        count++;}
        }
    cout << count;

}