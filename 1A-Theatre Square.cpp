 // 1A Theatre Square

#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;
    

int n,m,a ;
long long x, y; // global variables
    
int main(){
    
    cin >> n >> m>> a;
    
    
    if(m%a == 0){ //  6/3 = 2
                  //  2*2 =  4
                  
        x = m/a;}
    else{
        x = m/a + 1; //  6/4 = 1.5 / 1.5 + 1 = 2.5
                     //  as for intigers 2.5 will be considered 2 
        }
    
    if(n%a == 0){
        y = n/a;}
    else{
        y = n/a + 1;}
    
    cout << x*y << endl;
    return 0;}
    
    
/*    another way
    x = m/a;
    y = n/a;
    
    if(m%a != 0){
        x= x+1;
        }
    if(n%a != 0){
        y = y+1;}
*/

