#include<iostream>
using namespace std;

//show menu
void showMenu()
{
    cout<<"**********MENU**********"<<endl;
    cout<<"\n1. Check balance"<<endl;
    cout<<"2. Deposit Money"<<endl;
    cout<<"3. Withdraw Money"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"\n************************"<<endl;
}


int main()
{
   int option;
   double balance=500;
   do{
   showMenu();
   cout<<"Choose an option: ";
   cin>>option;
   switch(option)
   {
    case 1: cout<<"Balance is: "<<"Rs "<<balance<<endl;
            break;
    case 2: cout<<"Deposit amount: ";
            double depositAmount;
            cin>>depositAmount;
            balance+=depositAmount;
            cout<<depositAmount<<" deposited successfully!"<<endl;
            break;
    case 3: cout<<"Withdraw amount: ";
            double withdrawAmount;
            cin>>withdrawAmount;
            if(withdrawAmount<=balance)
            {
                balance-=withdrawAmount;
                cout<<withdrawAmount<<" withdrawn. "<<endl;
                cout<<"Available balance is: "<<balance<<endl;
            }
            else
            {
                cout<<"Not enough money!"<<endl;
            }
            break;
   }
   }while(option!=4);
}