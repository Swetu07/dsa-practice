// Max Heap

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> pq;

    pq.push(30);
    pq.push(10);
    pq.push(50);
    pq.push(20);

    cout << "Top = " << pq.top() << endl;

    pq.pop();

    cout << "Top after pop = " << pq.top() << endl;

    cout << "Size = " << pq.size();

    return 0;
}
