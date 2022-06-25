#include<iostream>
#include<string>
using namespace std;
void details()
{
  char name[50];
  char sex[5];
  cout<<"Enter the name of the person to check for eligibility: ";
  cin>>name;
  cout<<"\nEnter the sex of the person to check for eligibility: ";
  cin>>sex;
}
void gettimeofday()
{
    int hours,minutes,seconds;
    cout<<"\nHours: ";
    cin>>hours;
    cout<<"\nMinutes: ";
    cin>>minutes;
    cout<<"\nSeconds: ";
    cin>>seconds;
    cout<<"\n"<<hours<<" : "<<minutes<<" : "<<seconds;
}
void CheckAge(int age)
{
   if(age>=18)
   {
       cout<<"You are eligible to vote! Kindly Proceed To The Room On The Right!";
   }
   else
   {
       cout<<"Sorry! Leaving you with a warning to take. Don't forge the docs of those!";
   }
}
void Placeeligibility(string place,string state)
{
            int x= place.compare(state);
            if(x==0)
            {
                cout<<"Let the person proceed!";
            }
            else
            {
               cout<<"\nDo they have the proper documents?";
               int opt;
               cout<<"\nEnter 1 for yes and 0 for no: ";
               cin>>opt;
               if(opt==1)
               {
                   cout<<"\nLet the person proceed!";
               }
               else
               {
                   cout<<"\nSorry. The person can not prove his voting rights in this state!";
               }
               }
        }
int main()
{
    int age,ch;
    string place,state;
    cout<<"********Welcome To The Polling Station Responsible Citizen********";
    cout<<endl;
    cout<<"Enter the place of polling: ";
    getline(cin,place);
    gettimeofday();
    cout<<"\n1.Get Details Of The Person?";
    cout<<"\n2.Get Place Eligibility?";
    cout<<"\n3.Get Their Age?";
    cout<<"\n4.Quit?";
    do{
        cout<<"\nEnter Your Choice Please: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"\nPerson's Details: "<<endl;
                details();
                break;
            case 2:
                cout<<endl;
                cout<<"Enter the place from which the person hails: ";
                cin>>state;
                Placeeligibility(place,state);
                break;
            case 3:
                cout<<"\n Age Please: ";
                cin>>age;
                CheckAge(age);
                break;
            case 4:
                exit(0);
                break;
            default:
                cout<<"Enter valid options!";
        }
    }while(ch!=4);
    return 0;
    }
