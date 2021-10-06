#pragma once
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    string first_name;
    string last_name;
    string password;
    int ac_number;
    double balance;
    double interest_rate;
    int int_rate;

public:
    BankAccount(int ac_no, string f_name, string l_name, double opening_balance = 0, double rate = 4) {
        first_name = f_name;
        last_name = l_name;
        balance = opening_balance;
        ac_number = ac_no;
        int_rate = rate;
    }
    double deposit(const double d_amount);
    double withdraw(const double w_amount);
    double credit_interest();
    void show();

};


/* bool validate_triangle(const double s1, double s2, double s3);

bool initialize_triangle(Triangle &t, double s1, double s2, double s3);

double perimeter(const Triangle &t);

double area(const Triangle &t);

void show(const Triangle &t, const char * prefix = "Triangle"); */
