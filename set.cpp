#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(50);
    s.insert(10);
    s.insert(20);
    s.insert(10);

    cout << "Elements:\n";

    for(auto x : s)
        cout << x << " ";

    cout << "\n\nSize = " << s.size();

    cout << "\nCount of 20 = " << s.count(20);

    s.erase(20);

    cout << "\n\nAfter Erase:\n";

    for(auto x : s)
        cout << x << " ";

    return 0;
}