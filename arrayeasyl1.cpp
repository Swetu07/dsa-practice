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
// #include <bits/stdc++.h>
// using namespace std;

// void rotateArray(vector<int>& nums, int k)
// {
//     int n = nums.size();

//     k = k % n;

//     reverse(nums.begin(), nums.end());

//     reverse(nums.begin(), nums.begin() + k);

//     reverse(nums.begin() + k, nums.end());
// }

// int main()
// {
//     int n;

//     cout << "Enter N: ";
//     cin >> n;

//     vector<int> nums(n);

//     cout << "Enter elements: ";

//     for (int i = 0; i < n; i++)
//     {
//         cin >> nums[i];
//     }

//     int k;

//     cout << "Enter K: ";
//     cin >> k;

//     rotateArray(nums, k);

//     cout << "Array after rotation: ";

//     for (int x : nums)
//     {
//         cout << x << " ";
//     }

//     return 0;
// }


// move zeros to the end 
// #include <bits/stdc++.h>
// using namespace std;

// void moveZeroes(vector<int>& nums)
// {
//     int j = 0;

//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (nums[i] != 0)
//         {
//             swap(nums[i], nums[j]);
//             j++;
//         }
//     }
// }

// int main()
// {
//     int n;

//     cout << "Enter N: ";
//     cin >> n;

//     vector<int> nums(n);

//     cout << "Enter elements: ";

//     for (int i = 0; i < n; i++)
//     {
//         cin >> nums[i];
//     }

//     moveZeroes(nums);

//     cout << "Array after moving zeroes: ";

//     for (int x : nums)
//     {
//         cout << x << " ";
//     }

//     return 0;
// }


// linear search
// #include <iostream>
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

//     int target;
//     cout << "Enter element to search: ";
//     cin >> target;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == target)
//         {
//             cout << "Element found at index " << i;
//             return 0;
//         }
//     }

//     cout << "Element not found";

//     return 0;
// }


// union of two sorted arrays
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, m;

//     cout << "Enter size of first array: ";
//     cin >> n;

//     int a[n];

//     cout << "Enter first sorted array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     cout << "Enter size of second array: ";
//     cin >> m;

//     int b[m];

//     cout << "Enter second sorted array: ";
//     for (int i = 0; i < m; i++)
//     {
//         cin >> b[i];
//     }

//     vector<int> ans;

//     int i = 0;
//     int j = 0;

//     while (i < n && j < m)
//     {
//         if (a[i] < b[j])
//         {
//             if (ans.empty() || ans.back() != a[i])
//                 ans.push_back(a[i]);

//             i++;
//         }
//         else if (a[i] > b[j])
//         {
//             if (ans.empty() || ans.back() != b[j])
//                 ans.push_back(b[j]);

//             j++;
//         }
//         else
//         {
//             if (ans.empty() || ans.back() != a[i])
//                 ans.push_back(a[i]);

//             i++;
//             j++;
//         }
//     }

//     while (i < n)
//     {
//         if (ans.empty() || ans.back() != a[i])
//             ans.push_back(a[i]);

//         i++;
//     }

//     while (j < m)
//     {
//         if (ans.empty() || ans.back() != b[j])
//             ans.push_back(b[j]);

//         j++;
//     }

//     cout << "Union: ";

//     for (int x : ans)
//     {
//         cout << x << " ";
//     }

//     return 0;
// }


// intersection of 2 sorted arrays
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, m;

//     cout << "Enter size of first array: ";
//     cin >> n;

//     int a[n];

//     cout << "Enter first sorted array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     cout << "Enter size of second array: ";
//     cin >> m;

//     int b[m];

//     cout << "Enter second sorted array: ";
//     for (int i = 0; i < m; i++)
//     {
//         cin >> b[i];
//     }

//     vector<int> ans;

//     int i = 0;
//     int j = 0;

//     while (i < n && j < m)
//     {
//         if (a[i] == b[j])
//         {
//             ans.push_back(a[i]);
//             i++;
//             j++;
//         }
//         else if (a[i] < b[j])
//         {
//             i++;
//         }
//         else
//         {
//             j++;
//         }
//     }

//     cout << "Intersection: ";

//     for (int x : ans)
//     {
//         cout << x << " ";
//     }

//     return 0;
// }

// missing number in array
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter N: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int expectedSum = n * (n + 1) / 2;

    int actualSum = 0;

    for (int i = 0; i < n; i++)
    {
        actualSum += arr[i];
    }

    int missing = expectedSum - actualSum;

    cout << "Missing number: " << missing;

    return 0;
}