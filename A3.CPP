#include <bits/stdc++.h>
using namespace std;
int main() 
{
    double num1, num2;
    char op;
    cout << "ENTER FIRST NUMBER : ";
    cin >> num1;
    cout << "ENTER OPERATOR (+ - * /): ";
    cin >> op;
    cout << "ENTER SECOND NUMBER : ";
    cin >> num2;
    switch(op) 
    {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if(num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero is not allowed." << endl;
            break;
        default:
            cout << "Error: Invalid operator." << endl;
            break;
    }
    return 0;
}
