#include <iostream>
#include <string.h>
using namespace std;

class Bank {
    private:
        char name[40], actype[40];
        int bal, acno;
    public:
        Bank() {
            cout<<"Enter the Account name:";
            cin.getline(name,40);
            cout<<"Enter the Account type:";
            cin.getline(actype,40);
            cout<<"Enter the Account no:";
            cin>>acno;
            cout<<"Enter Opening Balance:";
            cin>>bal;
        }
        void diposit(int amt) {
            bal = bal + amt;
            cout<<"Balance after deposit:"<<bal<<endl;
        }
        void withdraw(int amt) {
            if(amt>bal)
                cout<<"Sorry your balance is less than amount..."<<endl;
            else 
                bal = bal - amt;
                cout<<"Balance after withdraw:"<<bal<<endl;
                system("pause");
        }
        void display(){
            cout<<"--------Account Detail---------"<<endl;
            cout<<"Account name:"<<name<<endl;
            cout<<"Account type:"<<actype<<endl;
            cout<<"Account no:"<<acno<<endl;
            cout<<"Opening Balance:"<<bal<<endl;
        }
};

int main() {
    Bank objBank;
    int amount,choice;
    do {
        cout<<"----------Main Menu-----------"<<endl;
        cout<<"1:-Deposit Money"<<endl;
        cout<<"2:-Withdraw Money"<<endl;
        cout<<"3:-Display Account Detail"<<endl;
        cout<<"4:-Quit"<<endl;
        cout<<"Enter any Choice:";
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"Enter amount to deposit:";
            cin>>amount;
            objBank.diposit(amount);
            break;
        case 2:
            cout<<"Enter amount to withdraw:";
            cin>>amount;
            objBank.withdraw(amount);
            break;
        case 3:
            objBank.display();
        case 4:
            exit(0);
        default:
            break;
        }
    }while (1);
}
