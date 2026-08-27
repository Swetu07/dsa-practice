// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;

//     cout << "Enter size: ";
//     cin >> n;

//     int arr[n];

//     cout << "Enter elements: ";

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = 1; i < n; i++)
//     {
//         int key = arr[i];
//         int j = i - 1;

//         while (j >= 0 && arr[j] > key)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }

//         arr[j + 1] = key;
//     }

//     cout << "Sorted array: ";

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// RECURSIVE INSERTION SORT

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    if (n <= 1)
        return;

    insertionSort(arr, n - 1);

    int last = arr[n - 1];
    int j = n - 2;

    while (j >= 0 && arr[j] > last)
    {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[j + 1] = last;
}

int main()
{
    int n;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    insertionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}