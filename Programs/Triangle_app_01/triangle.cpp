#include <iostream>
#include <math.h>
#include "traingle.hpp"
using namespace std;

double perimeter(const Triangle &t)
{
    return t.s1 + t.s2 + t.s3;
}

double area(const Triangle &t)
{
    double s = perimeter(t)/2;
    return sqrt(s * (s-t.s1) * (s-t.s2) * (s-t.s3));
}

void show(const Triangle &t, const char * prefix)
{
    cout << prefix << ": \t< "
        << t.s1 << ", "
        << t.s2 << ", "
        << t.s3 << " >\n";

    if (!((t.s1 + t.s2) > t.s3) ||
        !((t.s1 + t.s3) > t.s2) ||
        !((t.s3 + t.s2) > t.s1))
        {
            cout << "!!!    Not a valid triangle    !!! \n";
        }
}
