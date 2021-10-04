#pragma once

struct Triangle {
    double s1;
    double s2;
    double s3;
};

double perimeter(const Triangle &t);

double area(const Triangle &t);

void show(const Triangle &t, const char * prefix = "Triangle");
