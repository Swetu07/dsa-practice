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
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }

    cout << "Sorted array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// Another way using this function and calling it
/*
void selectionSort (int arr[] , int n){
    for(int i=0; i<=n-2; i++) {
    int min = 1;
    for(int j=0; j<=n-1; j++){
    if(arr[i] < arr[min]) min=j;
      }
      int temp = arr[min];
      arr[min] = arr[i];
      arr[i] = temp;
    }
}
*/