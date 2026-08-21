// Counting Frequencies of Array Elements
/*
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int hash[100] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    cout << "Frequencies:\n";

    for (int i = 0; i < 100; i++)
    {
        if (hash[i] > 0)
        {
            cout << i << " -> " << hash[i] << endl;
        }
    }

    return 0;
}
*/

// Counting Frequencies of Array Elements using unordered map
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    for (auto it : mp)
    {
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}