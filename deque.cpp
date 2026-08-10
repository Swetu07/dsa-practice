#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq;

    dq.push_back(20);
    dq.push_back(30);
    dq.push_front(10);

    cout << "Deque: ";

    for(int x : dq)
    {
        cout << x << " ";
    }

    cout << "\nFront = " << dq.front();
    cout << "\nBack = " << dq.back();

    dq.pop_front();
    dq.pop_back();

    cout << "\nAfter Pop: ";

    for(int x : dq)
    {
        cout << x << " ";
    }

    return 0;
}