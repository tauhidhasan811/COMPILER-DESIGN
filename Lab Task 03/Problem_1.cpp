#include<iostream>
using namespace std;

bool isIdentifier(string input)
{
    bool check=false;
    if (input.empty())
    {
        return false;
    }
    if(input.length()==1)
    {
        if(input[0] >= 'A' && input[0]<= 'Z' || input[0] >= 'a' && input[0]<= 'z' )
        {
            return true;
        }
        else
        {
            cout<<"Your can not use ' "<<input[0]<< " ' in identifier name"<<endl;
            return false;
        }
    }
    else if (((input[0] >= 'A' && input[0] <= 'Z') || (input[0] >= 'a' && input[0] <= 'z') ||(input[0] == '_')))
    {
        for (int i = 1; i < input.length(); i++)
        {
            if (((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z') || (input[i] >= '0' && input[i] <= '9') ||(input[i] == '_')))
            {
                check= true;
            }
            else
            {
                cout<<"Your can not use ' "<<input[i]<< " ' in identifier name"<<endl;
                check= false;
                break;
            }
        }
    }
    else
    {
        cout<<"Your can not use ' "<<input[0]<< " ' in identifier name"<<endl;
        check= false;
    }
    return check;
}
bool isCamelCase(string input)
{
    for (int i = 1; i < input.length(); i++)
    {
        if((input[0] >= 'a' && input[0] <= 'z'))
        {
            if((input[i] >= 'A' && input[i] <= 'Z'))
            {
                if(input[0] >= 'a' && input[0] <= 'z')
                {
                    cout<< "\nEnter Input is well structured"<<endl;
                    return true;
                }
            }
        }
    }
}
int main()
{
    string input;
    cout<<"Please Enter The input: ";
    cin>>input;
    if(isIdentifier(input))
    {
        cout<<"\nYour enter Input is Identifier"<<endl;
        if(isCamelCase(input))
        {

        }
    }
    else
    {
        cout<<"It is not identifier"<<endl;
    }
}
