#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> ms;

    ms.insert(50);
    ms.insert(20);
    ms.insert(20);
    ms.insert(10);

    cout << "Elements:\n";

    for(auto x : ms)
        cout << x << " ";

    cout << "\n\nCount of 20 = " << ms.count(20);

    auto it = ms.find(20);
    ms.erase(it);

    cout << "\n\nAfter Erasing One 20:\n";

    for(auto x : ms)
        cout << x << " ";

    return 0;
}