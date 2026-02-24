#include <iostream>
using namespace std;

int main()
{
    int add = 0;
    int data[5] = {1, 2, 10, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        add = add + data[i];
    }
    cout<<add;
    return 0;
}