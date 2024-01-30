#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the value : ";
    cin>>x;
    int factorial=1;
    for(int i=1;i<=x;i++)
    {
        factorial=factorial*i;
    }
    cout<<x<<" 's Factorial is : "<<factorial;
}
