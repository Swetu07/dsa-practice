#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;

    l.push_back(20);
    l.push_back(30);
    l.push_front(10);

    cout << "List: ";

    for(int x : l)
        cout << x << " ";

    cout << "\nFront: " << l.front();
    cout << "\nBack: " << l.back();

    l.pop_front();
    l.pop_back();

    cout << "\nAfter Pop: ";

    for(int x : l)
        cout << x << " ";

    return 0;
}