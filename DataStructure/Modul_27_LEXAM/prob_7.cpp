#include <iostream>
#include <list>
using namespace std;

void deleteValue(list<int> &l, int value)
{
    for (auto it = l.begin(); it != l.end(); ++it)
    {
        if (*it == value)
        {
            l.erase(it);
            break;
        }
    }
}

int main()
{
    list<int> l = {7, 3, 8, 4, 5, 4};
    int value = 4;
    deleteValue(l, value);
    for (auto x : l)
        cout << x << " ";
    cout<<"\n";
    return 0;
}
