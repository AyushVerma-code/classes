#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class employee
{
  char name[20];
  int code;
  public:

  void getdata()
  {
    cout<<"\n\nEnter code ";
    cin>>code;
    cout<<"\nEnter name ";
    cin>>name;
  }

  void putdata()
  {
    cout<<"\n\nCode : "<<code;
    cout<<"\nName : ";
    puts(name);
  }
  protected:

  float basic;
  void getbasic()
  {
    cout<<"\nEnter basic salary ";
    cin>>basic;
  }

};

class manager:public employee
{
  char title[10];

  public:

  void getdata()
  {
    employee::getdata();
    cout<<"\nEnter the title ";
    cin>>title;
  }

  void print()
  {
    putdata();
    cout<<"\n\nTitle : "<<title;
    disp();
  }

  protected:

  void disp()
  {
    getbasic();
    cout<<"\n\nBasic salary : "<<basic;
  }

};

void main()
{
  cout<<"\n                                  EMPLOYEE CARD                                 ";
  cout<<"\n\n________________________________________________________________________________";


  manager m1;
  m1.getdata();
  m1.print();

  getch();
}
