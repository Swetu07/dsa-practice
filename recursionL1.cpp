#include <iostream>
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