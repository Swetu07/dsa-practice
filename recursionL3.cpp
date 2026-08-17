// Submission of first N numbers using Parameterised

#include <iostream>
using namespace std;

void sum(int i, int s)
{
    if (i == 0)
    {
        cout << s;
        return;
    }

    sum(i - 1, s + i);
}

int main()
{
    int n;
    cout<<"Enter N: ";
    cin >> n;

    sum(n, 0);

    return 0;
}
