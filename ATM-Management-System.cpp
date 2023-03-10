#include <iostream>

using namespace std;
class Bank {
 
    // Private variables used inside class
private:
    string name;
    long long accnumber;
    char type[10];
    long long amount = 0;
    long long totamt = 0;
 
    // Public variables
public:
void setvalue()
    {
        cout << "Enter name\n";
        getline(cin,name);
        
        cout << "Enter Account number\n";
        cin >> accnumber;
        
        cout << "Enter Account type\n";
        cin >> type;
        
        cout << "Enter Balance\n";
        cin >> totamt;
    }
    // Function to display the required data
    void showdata()
    {
        cout << "Name:" << name << endl;
        cout << "Account No:" << accnumber << endl;
        cout << "Account type:" << type << endl;
        cout<<"Balance:"<<totamt;
    }
 
    // Function to deposit the amount in ATM
void deposit()
    {
        cout << "\nEnter amount to be Deposited\n";
        cin >> amount;
    }
void showbal()
    {
        totamt = totamt + amount;
        cout << "\nTotal balance is: " << totamt;
    }
void withdrawl()
    {
        int a, avai_balance;
        cout << "Enter amount to withdraw\n";
        cin >> a;
        avai_balance = totamt - a;
        cout << "Available Balance is:" << avai_balance;
    }
};
 
// Driver Code
int main()
{
    // Object of class
    Bank b;
    
    b.setvalue(); 
    b.showdata();
    int choice;
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~WELCOME~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~\n\n";
        cout << "Enter Your Choice\n";
        cout << "\t1. Balance Enquiry\n";
        cout << "\t2. Deposit Money\n";
        cout << "\t3. Withdraw Money\n";
        cout << "\t4. Cancel\n";
        cin >> choice;
 
        // Choices to select from
        switch (choice) {
        case 1:
            b.showbal();
            break;
        case 2:
            b.deposit();
            b.showbal();
            break;
        case 3:
            b.withdrawl();
            break;
        case 4:
            exit(1);
            break;
        default:
            cout << "\nInvalid choice\n";
        }
}