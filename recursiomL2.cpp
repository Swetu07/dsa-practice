// N to 1 using the backtracking
/*
#include <iostream>
using namespace std;
void print(int i,int n){
    if(i>n) return;
    print (i+1, n);
    cout<< i << " ";
}
int main()
{
    int n;
    cout<< "enter N: ";
    cin>> n;
    print(1,n);

    return 0;
}
*/

// 1 to N backtracking

#include <iostream>
using namespace std;
void call(int i){
      if (i == 0) return;
    call(i - 1);
    cout << i << " ";
}
int main()
{
    int n;
    cout<<"Enter N: ";
    cin>> n;
    call(n);
    return 0;
}