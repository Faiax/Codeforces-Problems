
#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;
    

int main(){
    
    int k{0}; // he has to pay "K" USD
    int n{0}; // He has "N" USD
    int w{0}; // he will buy "W" banana
    int sum{0};
    
    
    cin >> k >> n >> w;
    
    
    

   // for(int x=1; x<=w; x++){  // sum up to "W" th term
    //    sum=sum+x;}// replacement for (w*(w+1)/2)
    
    
    sum  = (w*(w+1)/2);
    int answer = (sum*k)-n;
    
    if(answer <= 0){
        
        cout << 0;}
    else{
        
        cout << answer;}
    return 0;}