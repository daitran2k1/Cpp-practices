#include <iostream>

using std::endl;
using std::cerr;

class Debug
{
    public:
        constexpr Debug(bool b = true): hw(b), io(b), other(b) {}
        constexpr Debug(bool h, bool i, bool o): hw(h), io(i), other(o) {}

        constexpr bool any() { return hw || io || other; }
        void set_io(bool b) { io = b; }
        void set_hw(bool b) { hw = b; }
        void set_other(bool b) { other = b; }

    private:
        bool hw, io, other;
};

int main()
{
    Debug io_sub(false, true, false);
    if (io_sub.any())
        cerr << "print appropriate error messages" << endl;
    
    Debug prod(false);
    if (prod.any())
        cerr << "print an error message" << endl;

    return 0;
}