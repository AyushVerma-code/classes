#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class worker
{
  public:

  char wname[20];
  double hrworked;
  double rate;
  double wage;

  void calcwg()
  {
    wage=hrworked*rate;
  }

  void in_data()
  {
    cout<<"\n\nEnter the name of the worker  ";
    gets(wname);

    cout<<"\nEnter the hours worked  ";
    cin>>hrworked;

    cout<<"\nEnter the rate  ";
    cin>>rate;
  }

  void out_data()
  {
    cout<<"\n\nName of Worker : ";
    puts(wname);

    cout<<"\nHours worked   : "<<hrworked<<" hours";

    cout<<"\nRate           : Rs "<<rate;

    calcwg();

    cout<<"\nWage           : Rs "<<wage;

  }


}w[5];


void main()
{
  cout<<"\n                                   SALARY SLIP                              ";
  cout<<"\n--------------------------------------------------------------------------------";

  int i;

  for(i=0;i<5;i++)
  {
    w[i].in_data();
    w[i].out_data();
  }

}
