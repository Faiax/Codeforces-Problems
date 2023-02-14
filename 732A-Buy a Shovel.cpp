#include <bits/stdc++.h>
using namespace std;

int main(){

    int k{0}, r{0};
    cin >> k >> r;
    int sum{0};

    for(int i =1 ;; i++){ // continuous for loop

        sum = sum+k; // sum1 = 0+ 117; sum2 = 117 + 117  
        if((sum%10 == 0) || (sum%10 == r)){ // 
            
            cout << i;
            break;
        }
    }
    return 0;
}