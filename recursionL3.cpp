// Submission of first N numbers using Parameterised
/*
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
*/

// Submission of first N numbers using Functional
/*
#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 0)
        return 0;

    return n + sum(n - 1);
}

int main()
{
    int n;
    cout<<"Enter N: ";
    cin >> n;

    cout << sum(n);

    return 0;
}
*/

// Factorial using Parameterised

#include <iostream>
using namespace std;

void factorial(int n, int fact)
{
    if (n == 0)
    {
        cout << fact;
        return;
    }

    factorial(n - 1, fact * n);
}

int main()
{
    int n;
    cout<< "Enter N: ";
    cin >> n;

    factorial(n, 1);

    return 0;
}