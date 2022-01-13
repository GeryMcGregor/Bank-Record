#include <iostream>
using namespace std;

bool account = false;
float accountBalance = 0.0;

void mainMenu();

int main(int argc, char const *argv[])
{
    mainMenu();

    return 0;
}

void mainMenu()
{
    int choice;

    cout << "Main Menu" << endl;
    cout << "01. NEW ACCOUNT" << endl;
    cout << "02. DEPOSIT AMOUNT" << endl;
    cout << "03. WITHDRAW AMOUNT" << endl;
    cout << "04. BALANCE ENQUIRY" << endl;
    cout << "05. ALL ACCOUNT HOLDER LIST" << endl;
    cout << "06. CLOSE AN ACCOUNT" << endl;
    cout << "07. MODIFY AN ACCOUNT" << endl;
    cout << "08. EXIT" << endl;
    cout << "Type a number (1-8): ";

    cin >> choice;

    switch (choice)
    {
    case 1:
        if (account == true)
        {
            cout << "You already have an account !" << endl;
            cin.sync();
            cin.get();
            mainMenu();
        }
        else
        {
            account = true;
            cout << "An account has been successfully created !" << endl;
            cout << "Proceed to main menu..." << endl;
            cin.sync();
            cin.get();
            mainMenu();
        }
        break;
    case 2:
        if (account == true)
        {
            float transferValue;
            cout << "Money to Deposit: ";
            cin >> transferValue;

            accountBalance += transferValue;
            cout << "$" << transferValue << " has been transferred to your account" << endl;
            cin.sync();
            cin.get();
            mainMenu();
        }
        else
        {
            cout << "Please make an account first !" << endl;
            cin.sync();
            cin.get();
            mainMenu();
        }
        break;
    case 3:
        if (account == true)
        {
            float transferValue;
            cout << "Withdrawal amount: ";
            cin >> transferValue;

            if (accountBalance >= transferValue)
            {
                accountBalance -= transferValue;
                cout << "$" << transferValue << " has been withdrawn from your account" << endl;
                cin.sync();
                cin.get();
                mainMenu();
            }
            else
            {
                cout << "Account balance is insufficient !" << endl;
                cin.sync();
                cin.get();
                mainMenu();
            }
        }
        else
        {
            cout << "Please make an account first !" << endl;
            cin.sync();
            cin.get();
            mainMenu();
        }
        break;
    case 4:
        if (account == true)
        {
            cout << "Your account balance is $" << accountBalance << endl;
            cin.sync();
            cin.get();
            mainMenu();
        }
        else
        {
            cout << "Please make an account first !" << endl;
            cin.sync();
            cin.get();
            mainMenu();
        }
        break;
    case 5:
        cout << "[Implementation coming soon !]" << endl;
        cin.sync();
        cin.get();
        mainMenu();
        break;
    case 6:
        if (account == true)
        {
            cout << "Your account has been closed!" << endl;
            account = false;
            cin.sync();
            cin.get();
            mainMenu();
        }
        else
        {
            cout << "You don't have an account yet !" << endl;
            cin.sync();
            cin.get();
            mainMenu();
        }
        break;
    case 7:
        cout << "[Implementation coming soon !]" << endl;
        cin.sync();
        cin.get();
        mainMenu();
        break;
    case 8:
        return;
        break;
    default:
        cout << "Type a number (1-8): " << endl;
        mainMenu();
        break;
    }
}