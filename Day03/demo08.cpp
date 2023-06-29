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

    void setBalance(double balance)
    {
        this->balance = balance;
    }

    void displayAccountDeatils() const
    {
        // balance = 1000;// NOT OK
        cout << "Accno = " << this->accno << endl;
        cout << "Balance = " << this->balance << endl;
    }
};

int main()
{
    const BankAccount b1(1001);
    b1.displayAccountDeatils();
    // b1.setBalance(5000);//NOT OK
    return 0;
}