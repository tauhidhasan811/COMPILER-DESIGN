#include<iostream>
#include<fstream>
#include<string>
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
    else if(input.substr(0,3)=="int" || input.substr(0,5)=="float" || input.substr(0,6)=="double" || input.substr(0,4)=="long" || input.substr(0,4)=="bool"|| input.substr(0,4)=="main"|| input.substr(0,4)=="sum")
    {
        cout<<"Your can not use ' "<<input<< " ' in identifier name"<<endl;
        check= false;
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
     ofstream MyWriteFile("filename.txt");
      MyWriteFile << "Fileugh\n";
      MyWriteFile << "main\n";
      MyWriteFile << "FiunEough\n";
      MyWriteFile << "#unenough\n";


      MyWriteFile.close();
      string myText;
      ifstream MyReadFile("filename.txt");
      while (getline (MyReadFile, myText))
      {
        cout << myText<<endl;
        if (isIdentifier(myText))
        {
            cout << "Your entered input is an identifier." << endl;
            if (isCamelCase(myText))
            {
                cout << "Your entered input follows CamelCase convention." << endl;
            }
            else
            {
                cout << "Your entered input does not follow CamelCase convention." << endl;
            }
        }
        else
        {
            cout << "Your entered input is not an identifier." << endl;
        }
    }

    MyReadFile.close();

    return 0;
}
