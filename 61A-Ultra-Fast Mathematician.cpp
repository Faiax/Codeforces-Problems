#include <bits/stdc++.h>

using namespace std;

int main(){

    string first;
    string second;
    string answer;
    cin>> first>> second;

    for(int i = 0; i<first.size();i++){

        if(first[i]==second[i]){
            answer = answer + "0";
        }
        else{
            answer = answer + "1";
        }
    }

    cout << answer << endl;
    

    return 0;
}