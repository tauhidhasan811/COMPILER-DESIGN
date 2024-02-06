#include<iostream>
#include<string>
using namespace std;

int main()
{
    int operatorIndex = 1;
    string input;
    cout << "Enter your expression : ";
    cin >> input;

    for(int i = 0; i < input.size(); i++)
    {
        switch(input[i])
        {
            case'+':
                cout << "Operator " << operatorIndex << " is : + " << endl;
                operatorIndex++;
                break;
            case '-':
                cout << "Operator " << operatorIndex << " is : - " << endl;
                operatorIndex++;
                break;
            case '*':
                cout << "Operator " << operatorIndex << " is : * " << endl;
                operatorIndex++;
                break;
            case '/':
                cout << "Operator " << operatorIndex << " is : / " << endl;
                operatorIndex++;
                break;
            case '%':
                cout << "Operator " << operatorIndex << " is : % " << endl;
                operatorIndex++;
                break;
            case '=':
                cout << "Operator " << operatorIndex << " is : = " << endl;
                operatorIndex++;
                break;
            default:
                break;
        }
    }
    return 0;
}
