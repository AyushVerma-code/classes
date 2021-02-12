#include<iostream.h>
#include<conio.h>
#include<stdio.h>


class items
{
  public:

  int itemcode;
  char itemname[20];
  double qty;
  double price;

  void enter()
  {
    cout<<"Enter item code: ";
    cin>>itemcode;

    cout<<"\nEnter your item name: ";
    gets(itemname);

    cout<<"\nEnter quantity of items required: ";
    cin>>qty;

    cout<<"\nEnter the price: ";
    cin>>price;

  }

  void calc(double q,double p)
  {
    double cost;
    cost=q*p;
    cout<<"\nCost of items : "<<cost;
  }

  void display()
  {
    cout<<"\n\n                              DEPARTMENTAL STORE                                   \n";
    cout<<"--------------------------------------------------------------------------------\n\n";

    cout<<"\n\nItem name     : ";
    puts(itemname);
    cout<<"\nItem code     : "<<itemcode;
    cout<<"\nQuantity      : "<<qty;
    cout<<"\nPrice         : "<<price;
    calc(qty,price);

  }

}s[10];

void main()
{
  clrscr();

  int i;
  for(i=0;i<10;i++)
  {
    s[i].enter();
    s[i].display();
  }
  getch();
}
