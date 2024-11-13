#include<iostream>
using namespace std;

class BankAccount{
    private:
        int AccountNumber;
        double balance;
    public:
        BankAccount(int accNum,double initialBalance): AccountNumber(accNum),balance(initialBalance){}
        //getter to get balance
        double getBalance() const{
            return balance;
        }
        //deposit money function
        void deposit(double amount){
            if(amount<=0){
                cout<<"Invalid amount to deposit"<<endl;
            }
            else{
            balance += amount;
             cout<<"amount is deposited"<<endl;
            }

        }
        //withdraw money function
        void withdraw(double amount){
            if(amount < balance && balance <= 0){
                cout<<"Insufficient Amount to entered"<<endl;
            }
            else{
                balance -= amount;
                cout << amount <<"withdrawed"<<endl;
                cout << "Your balance is " << balance << endl;
            }

        }
        
};

int main(){
    BankAccount AkashAccount(123,255);
    BankAccount JayaAccount(143,160);
    cout << AkashAccount.getBalance()  << endl;
    cout << JayaAccount.getBalance()  << endl;
    AkashAccount.deposit(100);
    JayaAccount.deposit(10);
    cout << AkashAccount.getBalance()  << endl;
    cout << JayaAccount.getBalance()  << endl;
    AkashAccount.withdraw(100);
    JayaAccount.withdraw(10);
    cout << AkashAccount.getBalance() << endl;
    cout << JayaAccount.getBalance()  << endl;
    return 0;
}