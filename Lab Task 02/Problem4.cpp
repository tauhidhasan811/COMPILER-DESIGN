#include<iostream>
#include<string>
using namespace std;

bool isIdentifier(string input)
{
    if (input.empty())
    {
        return false;
    }
    if (((input[0] >= 'A' && input[0] <= 'Z') || (input[0] >= 'a' && input[0] <= 'z') ||(input[0] == '_')))
    {
        return true;
    }
    for (int i = 1; i < input.length(); ++i)
    {
        if (((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z') || (input[i] >= '0' && input[i] <= '9') ||(input[i] == '_')))
        {
            return true;
        }
    }
}
int main()
{
    string input;
    cout<<"Enter the input : ";
    cin>>input;
    if(isIdentifier(input))
    {
        cout<<"\nGiven Input is Identifier\n";
    }
    else
    {
        cout<<"\nGiven Input is Identifier\n";
    }

}
