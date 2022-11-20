#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int n{0};
    cin >> n;
    
    for(int i = 0; i<n; i++)
    {
        if(i%2 == 0){ // if even number
            cout <<"I hate "; // beacouse starts at 0
        }
        else{
            cout << "I love ";
       }
       if(i!= n-1){ 
        cout <<" that ";
       }
       else{
        cout << " it ";
       }
       
    }
    

    return 0;

}