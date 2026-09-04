// Largest element in an array
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "enter N:" ;
    cin >> n;
    int arr[n];
    int largest = arr[0];
    for (int i=0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > largest) largest = arr[i];
    }
    cout << "largest: " << largest;
    
    return 0;
}