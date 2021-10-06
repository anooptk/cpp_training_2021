#include "bank_account.hpp"

void display_status(const char * action, double amnt, double status) {
    if (status != -1) {
        cout << action << " Success for amount: " << amnt << endl;
    } else {
        cout << action << " Failed for amount: " << amnt << endl;
    }
}


void test(BankAccount ac, const char * prefix, double d_amnt, double w_amnt)
{
    double status;
    cout << "\nTesting: " << prefix << endl;

    ac.show();

    status = ac.deposit(d_amnt);
    display_status("Deposit", d_amnt, status);

    ac.show();

    ac.credit_interest();

    ac.show();

    status = ac.withdraw(w_amnt);
    display_status("Withdraw", w_amnt, status);

    ac.show();
}

int main()
{
    BankAccount ac1(1, "User1", "LastName1", 100, 4);
    BankAccount ac2(2, "User2", "LastName2", 200, 4);

    // Positive test cases.
    test(ac1, "User1", 100, 10);
    test(ac2, "User2", 200, 20);

    //Negative test cases.
    test(ac1, "User1", -1, 1000);
    test(ac2, "User2", 0, -20);

    return 0;
}
