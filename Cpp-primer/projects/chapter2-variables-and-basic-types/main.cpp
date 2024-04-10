#include <iostream>

int main()
{
    // for integer arithmetic
    int i = 0;  // long often = int
    long long j = 0;
    // for floating-point computations
    double k = 3.14L;   // instead of float or long double
    // 2 adjacent string literals concatenated
    std::cout << "Hello world"
              << ", I'm Dai" << std::endl;
    // list initialization for single variable
    int a{0}, b(0), c = {0};
    // separate compilation
    extern int d;
    // reference
    int &refVal = a;
    // null pointer
    int *p = nullptr;
    // void pointer to deal with memory as memory
    void *p1;
    // reference to pointer
    int *&r = p;

    return 0;
}