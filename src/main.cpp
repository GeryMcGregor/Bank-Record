#include <iostream>
#include <string>
using namespace std;

void mainMenu();

int main(int argc, char const *argv[])
{
    mainMenu();

    return 0;
}

void mainMenu(){
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
    cout << "Type a number (1-8)" << endl;

    cin >> choice;

    
}