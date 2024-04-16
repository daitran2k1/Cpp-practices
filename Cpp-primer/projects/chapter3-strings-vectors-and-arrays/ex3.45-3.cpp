#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int ia[3][4] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}};

    for (auto p = ia; p != ia + 3; ++p)
        for (auto q = *p; q != *p + 4; ++q)
            cout << *q << endl;

    return 0;
}