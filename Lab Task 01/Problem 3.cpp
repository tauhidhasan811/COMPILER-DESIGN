#include <iostream>
using namespace std;

const int maxSize = 1000;

void push(char stack[], int& top, char value) {
    if (top >= maxSize - 1)
    {
        cout << "Stack Overflow\n";
        return;
    }
    stack[++top] = value;
}

int main()
{
    string first_name;
    string last_name;
    int n_first, n_last;
    char stack_first[maxSize];
    char stack_last[maxSize];
    int top_first = -1;
    int top_last = -1;

    cout << "Number of characters in your first name : ";
    cin >> n_first;

    for (int i = 0; i < n_first; i++) {
        char value;
        cout << "Enter character " << i << " of your first name: ";
        cin >> value;
        push(stack_first, top_first, value);
    }

    cout << "Number of characters in your last name : ";
    cin >> n_last;

    for (int i = 0; i < n_last; i++) {
        char value;
        cout << "Enter character " << i << " of your last name: ";
        cin >> value;
        push(stack_last, top_last, value);
    }
    first_name = string(stack_first, stack_first + n_first);
    last_name = string(stack_last, stack_last + n_last);

    string full_name = first_name + " " + last_name;
    cout << endl<< "Your Full Name : " << full_name << endl;

    return 0;
}
