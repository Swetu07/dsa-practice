// Bubble sort for worst and average case
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

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "Sorted array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
*/

// Bubble sort for best case

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

//     for (int i = 0; i < n - 1; i++)
//     {
//         bool swapped = false;

//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//                 swapped = true;
//             }
//         }
//         if (swapped == false)
//         {
//             break;
//         }
//     }

//     cout << "Sorted array: ";

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// RECURSIVE BUBBLE SORT

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    if (n == 1)
        return;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    bubbleSort(arr, n - 1);
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

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}