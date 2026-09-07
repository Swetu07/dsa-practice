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
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter N: ";
//     cin >> n;

//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int largest = arr[0];
//     int Slargest = -1;

//     int smallest = arr[0];
//     int Ssmallest = INT_MAX;

//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] > largest)
//         {
//             Slargest = largest;
//             largest = arr[i];
//         }
//         else if (arr[i] < largest && arr[i] > Slargest)
//         {
//             Slargest = arr[i];
//         }
//     }

//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] < smallest)
//         {
//             Ssmallest = smallest;
//             smallest = arr[i];
//         }
//         else if (arr[i] != smallest && arr[i] < Ssmallest)
//         {
//             Ssmallest = arr[i];
//         }
//     }

//     cout << "Second Largest : " << Slargest << endl;
//     cout << "Second Smallest : " << Ssmallest << endl;

//     return 0;
// }

// check if array sorted 
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter N: ";
//     cin >> n;

//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     bool sorted = true;

//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] < arr[i - 1])
//         {
//             sorted = false;
//             break;
//         }
//     }

//     if (sorted)
//         cout << "Array is sorted";
//     else
//         cout << "Array is not sorted";

//     return 0;
// }

// Removing duplicates
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter N: ";
//     cin >> n;

//     int arr[n];

//     cout << "Enter elements: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int i = 0;

//     for (int j = 1; j < n; j++)
//     {
//         if (arr[j] != arr[i])
//         {
//             i++;
//             arr[i] = arr[j];
//         }
//     }

//     int unique = i + 1;

//     cout << "Array after removing duplicates: ";

//     for (int k = 0; k < unique; k++)
//     {
//         cout << arr[k] << " ";
//     }

//     cout << "\nNumber of unique elements: " << unique;

//     return 0;
// }

// left rotate by one place 
#include <bits/stdc++.h>
using namespace std;

void rotateArray(vector<int>& nums, int k)
{
    int n = nums.size();

    k = k % n;

    reverse(nums.begin(), nums.end());

    reverse(nums.begin(), nums.begin() + k);

    reverse(nums.begin() + k, nums.end());
}

int main()
{
    int n;

    cout << "Enter N: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int k;

    cout << "Enter K: ";
    cin >> k;

    rotateArray(nums, k);

    cout << "Array after rotation: ";

    for (int x : nums)
    {
        cout << x << " ";
    }

    return 0;
}