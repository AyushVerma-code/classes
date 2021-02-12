#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>

class bank
{
  public:

  double code;
  char name[20];
  double accno;
  double balance;

  void enter()
  {

    cout<<"\n                              ICICI BANK HELPDESK                                   \n";
    cout<<"--------------------------------------------------------------------------------\n\n";

    cout<<"\n\nEnter Account no: ";
    cin>>accno;

    cout<<"\nEnter your name: ";
    gets(name);

    cout<<"\nEnter the customer code: ";
    cin>>code;

    cout<<"\nEnter the balance: ";
    cin>>balance;
  }

  void calc(double balan)
  {
    int opt;

    cout<<"\n\n\n1.Withdraw Money ";
    cout<<"\n2.Deposit Money ";
    cout<<"\n3.Exit";
    cout<<"\n\nSelect the option ";
    cin>>opt;

    switch(opt)
    {
      case 1:
      {
	double withdraw;
	cout<<"\n\nEnter money to be withdrawn ";
	cin>>withdraw;

	if(withdraw<=balan)
	{
	  balance=balan-withdraw;
	  cout<<"\nBalance :"<<balance;
	}
	else
	{
	  cout<<"\n\nYou don't have enough money ";
	  cout<<"\nBalance : "<<balan;
	}
      }
      break;

      case 2:
      {
	double deposit;
	cout<<"\n\nEnter money to be deposited ";
	cin>>deposit;
	balance=balan+deposit;
	cout<<"\nBalance "<<balance;


      }
      break;

      case 3:
      {
	exit(0);
      }
    }
  }
  void display()
  {


    cout<<"\n\n                                BANK PASSBOOK                                   \n";
    cout<<"--------------------------------------------------------------------------------\n\n";

    cout<<"\n\nYour name is ";
    puts(name);
    cout<<"\nAccount no    : "<<accno;
    cout<<"\nCustomer code : "<<code;

    double bal;
    calc(balance);
  }

}s[5];

void main()
{
  int i;

  for(i=0;i<5;i++)
  {
    s[i].enter();
    s[i].display();
  }
  getch();
}
