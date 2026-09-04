// Largest element in an array
/*
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
*/

// 2nd smallest/largest number in the array 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int largest = arr[0];
    int Slargest = -1;

    int smallest = arr[0];
    int Ssmallest = INT_MAX;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            Slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > Slargest)
        {
            Slargest = arr[i];
        }
    }

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            Ssmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] != smallest && arr[i] < Ssmallest)
        {
            Ssmallest = arr[i];
        }
    }

    cout << "Second Largest : " << Slargest << endl;
    cout << "Second Smallest : " << Ssmallest << endl;

    return 0;
}