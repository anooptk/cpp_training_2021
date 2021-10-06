#include <math.h>
#include "bank_account.hpp"


double BankAccount::deposit(const double d_amount) {
    if (d_amount > 0) {
        balance += d_amount;
        return balance;
    } else {
        return -1;
    }
}

double BankAccount::withdraw(const double w_amount) {
    if(balance >= w_amount) {
        balance -= w_amount;
        return balance;
    } else {
        return -1;
    }

}

double BankAccount::credit_interest() {
    balance += balance * int_rate / 1200;
}

void BankAccount::show() {
    cout << "Account Number: " << ac_number
        << "\tA/c holder Name: " << first_name << " " << last_name
        << "\tA/c balance: " << balance
        << "\tInterest rate: " << int_rate << endl;
}



/* bool validate_triangle(const double s1, double s2, double s3)
{
    if (!((s1 + s2) > s3) ||
    !((s1 + s3) > s2) ||
    !((s3 + s2) > s1))
    {
        cout << "!!!    Not a valid triangle    !!! \n\n";
        return false;
    }
    return true;
}

bool initialize_triangle(Triangle &t, double s1, double s2, double s3) {
    if(validate_triangle(s1, s2, s3)) {
        t.s1 = s1;
        t.s2 = s2;
        t.s3 = s3;
        return true;
    }
    return false;
}

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

} */
