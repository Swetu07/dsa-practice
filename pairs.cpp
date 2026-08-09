// Simple pair
/*
#include <iostream>
using namespace std;

int main()
{
    pair<int, int> p;

    cout << "Enter two numbers: ";
    cin >> p.first >> p.second;

    cout << "First = " << p.first << endl;
    cout << "Second = " << p.second << endl;

    return 0;
}
*/

// Nested pair 
/*
#include <iostream>
using namespace std;

int main()
{
    pair<int, pair<int, int>> p;

    cout << "Enter three numbers: ";
    cin >> p.first >> p.second.first >> p.second.second;

    cout << "First = " << p.first << endl;
    cout << "Second First = " << p.second.first << endl;
    cout << "Second Second = " << p.second.second << endl;

    return 0;
}
*/

// Array pair

#include <iostream>
using namespace std;

int main()
{
    pair<int, int> arr[3];

    cout << "Enter 3 pairs:";

    for(int i = 0; i < 3; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }

    cout << "\nStored Pairs:\n";

    for(int i = 0; i < 3; i++)
    {
        cout << "(" << arr[i].first << ", " << arr[i].second << ")" << endl;
    }

    return 0;
}
