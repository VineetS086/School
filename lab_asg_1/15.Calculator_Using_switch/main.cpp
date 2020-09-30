#include <iostream>

using namespace std;

int main()
{
    char c; //declaring variables and scanning input
    float num1, num2;
    cout << "Enter '+', '-', '*',or '/': ";
    cin >> c ;
    cout << "Enter two numbers :";
    cin >> num1 >> num2;

    switch(c) //calculating as per the operator entered
    {
        case '+':
            cout << num1+num2;
            break;
        case '-':
            cout << num1-num2;
            break;
        case '*':
            cout << num1*num2;
            break;
        case '/':
            cout << num1/num2;
            break;
        default:
            //if invalid input
            cout << "Invalid Input";
            break;
    }

    return 0;
}

