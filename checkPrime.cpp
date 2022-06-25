#include<iostream>
using namespace std;
int checkprime(int n)
{
    int i,flag;
    flag=1;
    for(i=2;i<=n/2;++i)
    {
        if((n%i)==0)
        {
            flag=0;
            break;
        }
    }
    return flag;
}
int main()
{
    int x,j;
    cout<<"Enter a number: "<<endl;
    cin>>x;
    for(j=2;j<=x/2;j++)
    {
        if(checkprime(j))
        {
            if(checkprime(x-j))
            {
                cout<<endl<<"Number "<<x<<" = "<<j<<" + "<<(x-j)<<endl;
            }
        }
    }
}
