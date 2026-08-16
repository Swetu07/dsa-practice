// N Times Printing
/*
include <iostream>
using namespace std;

void call(int i, int n)
{
    if ( i > n) return;
    cout << "Swet" << endl;
    call(i + 1, n);
}
int main()
{
    int n;
    cout<< "Enter n: ";
    cin>> n;
    call(1, n);
    return 0;
}
*/

//Printing Numbers
#include <iostream>
using namespace std;

void print( int i, int n){
    if (i== n) return;

    cout<<i<<" ";
    print(i+1, n);
}
int main()
{
    int n;
    cout<<"Enter N: ";
    cin>> n;

    print(0,n);

    return 0;
}