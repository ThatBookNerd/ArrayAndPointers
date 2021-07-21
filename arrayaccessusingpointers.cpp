#include<iostream>
using namespace std;
int main()
{
    int arr[5]={};
    int i=0;
    int j=0;
    int x,k;
    while(i<5)
    {
        cout<<"Enter A Number: ";
        cin>>x;
        arr[i]=x;
        i++;
    }
    cout<<endl<<"Printing Array By Usual Methods: ";
    for(k=0;k<5;k++)
    {
        cout<<arr[k]<<endl;
    }
    int *ptr[5];
    cout<<endl<<"Printing Array Using Pointers: ";
    while(j<5)
    {
        ptr[j]=&arr[j];
        cout<<*ptr[j]<<endl;
        j++;
    }
}
