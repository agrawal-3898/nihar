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

    static void setROI(int r)
    {
        // BankAccount::roi = roi; OR
        roi = r;
    }
    static int getROI()
    {
        return roi;
    }
};

// initialize the static data member outside the class
double BankAccount::roi = 3;

int main()
{
    cout << "initial roi = " << BankAccount::getROI() << endl;
    BankAccount::setROI(5);
    cout << "changed roi = " << BankAccount::getROI() << endl;
    // BankAccount b1(1001, 2000);
    // b1.displayAccountDetails();
    // BankAccount b2(1002, 3000);
    // b2.displayAccountDetails();

    return 0;
}