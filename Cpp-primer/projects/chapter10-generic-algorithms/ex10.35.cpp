#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (auto it = ivec.cend() - 1; it != ivec.cbegin() - 1; --it)
        cout << *it << " ";
    cout << endl;

    return 0;
}