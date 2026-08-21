// Counting Frequencies of Array Elements
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