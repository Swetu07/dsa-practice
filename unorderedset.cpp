#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s;

    s.insert(30);
    s.insert(20);
    s.insert(10);
    s.insert(20);

    cout << "Elements:\n";

    for(auto x : s)
        cout << x << " ";

    cout << "\n\nFind 20: ";

    if(s.find(20) != s.end())
        cout << "Found";

    s.erase(20);

    cout << "\n\nAfter Erase:\n";

    for(auto x : s)
        cout << x << " ";

    return 0;
}