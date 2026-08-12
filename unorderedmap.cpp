#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, string> mp;

    mp[101] = "Ansh";
    mp[102] = "Rahul";
    mp[103] = "Aman";

    for(auto x : mp)
    {
        cout << x.first << " " << x.second << endl;
    }

    cout << "\nFind 102 : ";

    if(mp.find(102) != mp.end())
        cout << "Found";

    mp.erase(103);

    cout << "\nSize = " << mp.size();

    return 0;
}