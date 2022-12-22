#include <bits/stdc++.h>

using namespace std;

int main(){


    string s;
    cin >> s;
    int count1 = 0;
    int count2 = 0;

    int sz = s.size();

    for(int i = 1; i<sz;i++) // chekcing if char other than 0th position is non-capital or not
    {
        if(islower(s[i]))
        {
            count1++; 
        }           
    }

    for(int i = 0; i<sz; i++)
    {
        if(isupper(s[i]))
        {
            count2++;
        }
    }

    if(islower(s[0]) && count1==0) // if only 0th is non-capital && not any onther is capital
    {
        s[0] = toupper(s[0]);

        for(int i = 1; i< sz; i++)
        {
            s[i] = tolower(s[i]);
        }   
    }

    else if(count2 == sz) // if every letter is capital
    {
        for(int i = 0; i<sz; i++)
        {
            s[i] = tolower(s[i]);
        }
    }

    else
    {
    }   



    cout << s << endl;
    return 0;
}