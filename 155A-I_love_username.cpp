#include<iostream>
using namespace std;
int main()
{
    // input and decleration
    int n{0};
    cin >> n;
    int arr[n];
    for(int i = 0; i<n ;i++){
        cin >> arr[i];
    }
    int count{0};
    int max = arr[0];
    int min = arr[0];


    //main Algorithm

    for(int i = 0; i<n ;i++){
        
        if(arr[i] >max){
            max = arr[i];
            count ++;
        }
        if( arr[i] < min){

            min = arr[i];
            count++;
        }


    }
    cout << count << endl;


}