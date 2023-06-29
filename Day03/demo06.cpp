#include <iostream>
using namespace std;

class BankAccount
{
private:
    const int accno;
    double balance;

public:
    // Ctor Members initialzer list
    BankAccount(int acc) : accno(acc)
    {
        this->balance = 500;
    }

    void displayAccountDeatils()
    {
        cout << "Accno = " << this->accno << endl;
        cout << "Balance = " << this->balance << endl;
    }
};

int main()
{

    BankAccount a1(1001);
    a1.displayAccountDeatils();
    BankAccount a2(1002);
    a2.displayAccountDeatils();
    return 0;
}