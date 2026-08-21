// Number Hashing
/*
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the size: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int hash[13] = {0};

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    int q;

    cout << "Enter number of queries: ";
    cin >> q;

    while (q--)
    {
        int number;

        cout << "Enter number: ";
        cin >> number;

        cout << "Frequency = " << hash[number] << endl;
    }

    return 0;
}
*/

// Char Hashing

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>> s;
    int hash[256] = {0};
    for ( int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++;
    }
    int q;
    cin>> q;
    while (q--)
    {
        char c;
        cin >> c;
        cout << hash[c] << endl;
    }
    
    return 0;
}