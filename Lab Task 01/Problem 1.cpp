#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of of the array: ";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cout<< "Enter array "<<i<<" index value : ";
        cin>>arr[i];
    }
    int sum;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    float avg=static_cast<float>(sum)/n;
    cout<<endl<<"Sum is : "<<sum<<endl;
    cout<<"Average Value is : "<< avg<<endl;
}
