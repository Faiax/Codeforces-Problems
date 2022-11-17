#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    int x = 0;  // counter value 1 // for counting 1
    int y = 0; // counter value 2 // for counting 0
    int z = 0;// counter value 3 //for if one of the O or 1 reaches in 7 in straight
    cin >> s;

    for(int i = 0; i < s.size(); i++) // this code will run for the size'th number of time
    {
        if(s[i] == '1'){
            x++;
            y = 0; // the value will be 
        }
        else{
            y++;
            x = 0; 
        }
        if(x==7 || y==7){ // if one of the 2 conditions are true
        
            z = 1;
        }
    }
    if(z == 1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}