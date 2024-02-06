#include <iostream>
#include <string>
using namespace std;

bool isNumericConstant(string input)
{
    int count = 0;
    bool check = true;
    for (int i = 0; i < input.size(); i++)
    {
        if ((input[i] == '-' && i == 0) || (input[i] >= '0' && input[i] <= '9'))
        {
            check = true;
        }
        else if (input[i] == '.')
        {
            count++;
            if (count > 1)
            {
                check = false;
                break;
            }
        }
        else
        {
            check = false;
            break;
        }
    }
    return check;
}


int main() {
    string input;
    cout << "Enter a value: ";
    cin>> input;

    if (isNumericConstant(input)) {
        cout << "\nNumeric constant" << endl;
    } else {
        cout << "\nNot numeric" << endl;
    }

    return 0;
}
