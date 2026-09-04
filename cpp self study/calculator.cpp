// making a calculator using switch case statement.
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    char op;
    float num1, num2;

    cout << "******Calculator******" << endl;

    while (true)
    {
        cout << "Enter #1 number: ";
        cin >> num1;
        cout << "Enter #2 number: ";
        cin >> num2;

        cout << "Enter operator (+, -, *, /): ";
        cin >> op;

        switch (op)
        {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0.0)
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            else
                cout << "Divide by zero situation!" << endl;
            break;
        default:
            cout << "Error! operator is not correct" << endl;
            exit(0);
        }
    }
    return 0;
}
