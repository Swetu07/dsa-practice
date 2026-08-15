#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int,int> a, pair<int,int> b)
{
    return a.second < b.second;
}

int main()
{
    vector<pair<int,int>> v =
    {
        {1, 50},
        {2, 10},
        {3, 30}
    };

    sort(v.begin(), v.end(), compare);

    for(auto p : v)
    {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}