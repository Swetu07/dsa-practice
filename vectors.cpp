#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter size: ";
    cin >> n;

    vector<int> v(n);

    // Input
    cout << "Enter elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // Print
    cout << "\nVector: ";

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    // Size
    cout << "\nSize = " << v.size();

    // First and last
    cout << "\nFirst = " << v.front();
    cout << "\nLast = " << v.back();

    // Add element
    v.push_back(100);

    cout << "\nAfter push_back: ";

    for(int x : v)
    {
        cout << x << " ";
    }

    // Remove last
    v.pop_back();

    // Insert
    v.insert(v.begin() + 1, 500);

    cout << "\nAfter insert: ";

    for(int x : v)
    {
        cout << x << " ";
    }

    // Erase
    v.erase(v.begin() + 1);

    cout << "\nAfter erase: ";

    for(int x : v)
    {
        cout << x << " ";
    }

    return 0;
}