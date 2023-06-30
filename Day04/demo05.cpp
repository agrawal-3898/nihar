#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accno;
    double balance;
    static double roi;

public:
    BankAccount(int accno, double balance)
    {
        this->accno = accno;
        this->balance = balance;
    }

    void displayAccountDetails()
    {
        cout << "Accno = " << this->accno << endl;
        cout << "balance = " << this->balance << endl;
        cout << "roi = " << roi << endl;
    }

    void setROI(int roi)
    {
        this->roi = roi;
    }
};

// initialize the static data member outside the class
double BankAccount::roi = 3;

int main()
{
    BankAccount b1(1001, 2000);
    b1.displayAccountDetails();
    BankAccount b2(1002, 3000);
    b2.displayAccountDetails();

    cout << "------------------------" << endl;

    cout << "Change in ROI" << endl;
    b1.setROI(4);
    b1.displayAccountDetails();
    b2.displayAccountDetails();

    return 0;
}