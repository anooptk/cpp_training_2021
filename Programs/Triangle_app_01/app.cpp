#include <iostream>
#include "triangle.hpp"
using namespace std;


void test(const Triangle t, const char * prefix = "Test Triangle")
{
    show(t, prefix);
    cout << "Perimeter of " << prefix << ": " << perimeter(t) << endl
         << "Area of " << prefix << ": " << area(t) << endl << endl;
}

int main()
{
    Triangle t1, t2;
    if (initialize_triangle(t1, 2, 1, 3)) {
        test(t1, "T1");
    }

    if(initialize_triangle(t2, 4, 5, 6)) {
        test(t2, "T2");
    }

    return 0;
}
