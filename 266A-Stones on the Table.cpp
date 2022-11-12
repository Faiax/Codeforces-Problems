#include <iostream>
using namespace std;

int main(){
    int n{0}; // number of stones
    string color;
    int count{0};

    cin >> n >> color; // imputting number of stones and color of stones
    
    for(int i = 0; i<n; i++){// if n=5 then when I hits 4th time(including 0th term)it will break
        
        if(color[i]== color[i+1]) // if neighbouring stone is same color
            count++;
        }
    
    cout << count;
}