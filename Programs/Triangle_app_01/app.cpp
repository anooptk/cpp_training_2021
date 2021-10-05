#include <iostream>
#include "traingle.hpp"
using namespace std;


void test(const Triangle t, const char * prefix = "Test Triangle")
{
    show(t, prefix);
    if (!validate_triangle(t)) {
        return;
    }
    cout << "Perimeter of " << prefix << ": " << perimeter(t) << endl
         << "Area of " << prefix << ": " << area(t) << endl << endl;
}

int main()
{
    Triangle t1, t2;
    t1 = {2, 1, 3};
    t2 = {4, 5, 6};

    test(t1, "T1");
    test(t2, "T2");

    return 0;
}
