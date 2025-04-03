#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        short rows;
        cout << "Enter Pyramis's Rows Count [ 1 - 50 ]: ";
        cin >> rows;

        if (cin.fail()) {
            cout << "Bad Input !!" << endl;
            continue;
        } else if (rows < 1 || rows > 50) {
            cout << "The Rows Should Be In Range From 1 To 50 !!" << endl;
            continue;
        }

        system("cls");

        for (short num = 1; num <= rows ; num++)
        {
            string spaces(rows - num, ' ');
            cout << spaces;
            for (short stars = 1; stars <= (num * 2) - 1 ; stars++)
            {
                cout << "*";
            }
            cout << endl;
        }
        break;
    }

    cout << "Press Any Key To Exit...";
    cin.ignore();
    cin.get();
    return 0;
}