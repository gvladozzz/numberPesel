#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

void calculateNumerPesel(int year, int month, int day, string gender) {
    srand(time(NULL));
    int arr[10] = { 1, 3, 7, 9, 1, 3, 7, 9, 1, 3 };
    int sum[10];
    int peselINT[10];
    int lastNumberInt, lastNumber;
    string man[5] = {"1", "3", "5", "7", "9"};
    string woman[5] = {"0", "2", "4", "6", "8"};
    string years, months, days, pesel, randomNumbers, str;
    string sumstr[10];
    string sumstr2[10];
    years = to_string(year);
    month = month + 20;
    months = to_string(month);
    days = to_string(day);
    years.erase(0, 2);
    pesel += years;
    pesel += months;
    pesel += days;
    for (int i = 0; i < 3; i++)
        pesel += to_string(rand() % 9 + 0);
    if (gender == "m" || gender == "M")
        pesel += man[rand() % 4 + 0];
    else
        pesel += woman[rand() % 4 + 0];


    for (int i = 0; i < 10; i++){
        str = pesel[i];
        peselINT[i] = stoi(str);
        sum[i] = arr[i]*peselINT[i];
        sumstr[i] = to_string(sum[i]);
        int len = sumstr[i].size();
        if (len > 1) {
            sumstr[i].erase(0, len-1);
        }
        str = sumstr[i];
        arr[i] = stoi(str);
        lastNumberInt += arr[i];
        cout << lastNumberInt << " ";
    }
    int numm;
    int len = to_string(lastNumberInt).size();
    if (len > 1) {
        str = to_string(lastNumberInt).erase(0, len - 1);
        numm = stoi(str);
    }
    str = to_string(10 - numm);
    pesel += str;
    cout << endl << "Pesel: " << pesel;
}

int main() {
    int year, month, day;
    string gender;
    cout << endl << "Enter your gender\nm - if you are man;\nw - if you are woman.\n: ";
    cin >> gender;
    while (true) {
        if (gender == "m" || gender == "w" || gender == "M" || gender == "W")
            break;
        else
            cout << endl << "Try again: ";
        cin >> gender;
    }
    cout << endl << "Enter your year of birth: (example: 1980): ";
    cin >> year;
    while (true) {
        if (2023 >= year && year >= 1900)
            break;
        else
            cout << endl << "Try again: ";
        cin >> year;
    }
    cout << endl << "Enter your birth month\n1 - January;\n2 - February;\n3 - March;\n4 - April;\n5 - May;\n6 - June;\n7 - July;\n8 - August;\n9 - September;\n10 - October;\n11 - November;\n12 - December.\n: ";
    cin >> month;
    while (true) {
        if (12 >= month && month >= 1)
            break;
        else
            cout << endl << "Try again: ";
        cin >> month;
    }
    cout << endl << "Enter your birthday: ";
    cin >> day;
    while (true) {
        if (31 >= day && day >= 1)
            break;
        else
            cout << endl << "Try again: ";
        cin >> day;
    }
    calculateNumerPesel(year, month, day, gender);
    // string pesel = calculateNumerPesel(year, month, day, gender);
    // cout << endl << "Pesel: " << pesel;
    return 0;
}
