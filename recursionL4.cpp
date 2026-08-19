// Swap array using Single parameter 
/*
#include <bits/stdc++.h>
using namespace std;

void f(int i, int arr[], int n){
    if(i>=n/2) return;
    swap(arr[i], arr[n-i-1]);
    f(i+1, arr, n);
}
int main()
{
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) cin>> arr[i];
    f(0,arr,n);
    for (int i = 0; i < n; i++) cout<< arr[i]<< " ";

    return 0;
}
*/

// Swap array using 2 parameter
/*
#include <bits/stdc++.h>
using namespace std;

void f(int l, int r, int arr[]) {
    if(l>=r) return;
    swap(arr[l], arr[r]);
    f(l+1, r-1, arr);
}
int main()
{
    int n;
    cout<< "Enter N: ";
    cin>> n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    f(0, n-1, arr);
    for(int i=0; i<n; i++) cout<<arr[i] <<" ";

    return 0;
}
*/

// Check if string is palindrome
#include <bits/stdc++.h>
using namespace std;

bool f(int i, string &s){
    if(i>=s.size()/2) return true;
    if(s[i] != s[s.size()-i-1]) return false;
    return f(i+1, s);
}
int main()
{
    string s ="MADSM";
    cout<< f(0,s);

    return 0;
}