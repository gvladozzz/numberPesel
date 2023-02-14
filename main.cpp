#include <iostream>

using namespace std;

int main(){
    int year, month, day;
    int pesel[11]={0};
    int peselLength = sizeof(pesel) / sizeof(int);
    cout << endl << "Enter your year of birth: (example: 1980): ";
    cin >> year;
    while(true){
        if (2023>= year && year >= 1900)
            break;
        else
            cout << endl << "Try again: ";
            cin >> year;
    }
    cout << endl << "Enter your birth month\n1 - January;\n2 - February;\n3 - March;\n4 - April;\n5 - May;\n6 - June;\n7 - July;\n8 - August;\n9 - September;\n10 - October;\n11 - November;\n12 - December.\n: ";
    cin >> month;
    while(true){
        if (12>= month && month >= 1)
            break;
        else
            cout << endl << "Try again: ";
            cin >> month;
    }
    cout << endl << "Enter your birthday:";
    cin >> day;
    while(true){
        if (31>= day && day >= 1)
            break;
        else
            cout << endl << "Try again: ";
            cin >> day;
    }
    
    cout << endl << "Pesel: ";
    for (int i = 0; i <= peselLength; i++)
        cout << pesel[i];
    return 0;
}
