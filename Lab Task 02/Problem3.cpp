#include<iostream>
#include<string>
using namespace std;

bool isSingleLine( string input)
{
    if (input.size() >= 2 && input.find("//") != string::npos)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isMultiline(string input)
{
    if(input.size() >= 4 && input.substr(0,1)=="/*" && input.substr(input.size()-2,input.size()-1)== "*/")
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string input;
    cout<<"Please enter the value : ";
    cin>>input;
    if(isSingleLine(input))
    {
        cout<<"\nThis is single line comment\n";
    }
    else if(isMultiline(input)== true)
    {
        cout<<"\nThis is multiline comment\n";
    }
    else
    {
        cout<<"There is No comment";
    }
}
