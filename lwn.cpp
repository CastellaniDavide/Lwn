/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 */

#include <bits/stdc++.h>
using namespace std;


int main()
{
//  uncomment the following lines if you want to read/write from files
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    vector <int> fibonacci;
    int N;

    cin >> N ;
    N++;
    fibonacci.push_back(1);
    fibonacci.push_back(1);
    int i=1;
    while(fibonacci[i]<N)
    {
        i++;
        fibonacci.push_back(fibonacci[i-1]+fibonacci[i-2]);
    }
    bool codice[i];
    for(int y=i-1; y>-1; y--)
    {
        if(N>fibonacci[y])
        {
            N-=fibonacci[y];
            codice[y]=1;
        }
        else
        {
            codice[y]=0;
        }
    }
    for(int y=1; y<i+1; y++)
    {
        cout << codice[y];
    }
    cout << endl;
    return 0;
}
