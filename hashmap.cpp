// Hashing Using Map
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter n: "; 
    cin>> n;
    int arr[n];
    map<int , int> mpp;
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
        mpp[arr[i]]++;
    }
    int q;
    cout<< "Enter quries: ";
    cin>> q;
    while (q--)
    {
        int num;
        cout<< "Enter number: ";
        cin>> num;
        cout<< mpp[num] << endl;
    }

    return 0;
}