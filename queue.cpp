#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    int n;
    cout << "enter n: " ;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    queue<int> temp = q;

    while(!temp.empty())
    {
        cout << temp.front() << " ";
        temp.pop();
    }

    return 0;
}