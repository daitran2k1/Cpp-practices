#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item currItem, item;
    
    if (std::cin >> currItem)
    {
        int cnt = 1;
        while (std::cin >> item)
        {
            if (item.isbn() == currItem.isbn())
                ++cnt;
            else
            {
                std::cout << currItem << " occurs " << cnt << " items" << std::endl;
                currItem = item;
                cnt = 1;
            }
        }
        std::cout << currItem << " occurs " << cnt << " items" << std::endl;
    }

    return 0;
}