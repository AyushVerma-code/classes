//wap to demonstrate data hiding and encapsulation
#include
#include
#include
class STOCK //class stock
{
int ICode,Qty; //data members
char Item[50];
float Price,Discount;
void FindDisc() //member function
{
if(Qty<=50)
{
Discount=Price*0/100;
}
else if(Qty>50&&Qty<=100)
{
Discount=Price*5/100;
}
else if(Qty>100)
{
Discount=Price*10/100;
}
}
public:
void Buy()
{
cout<<"Please enter the Item code =";
cin>>ICode;
cout<<"\n Enter the Item = ";
gets(Item);
cout<<"\n Enter the Price =";
cin>>Price;
cout<<"\n Please enter the quantity: ";
cin>>Qty;
FindDisc();
}
void ShowAll()
{
cout<<"\n Item Code ="< cout<<"\n Item =";
puts(Item);
cout<<"\n Price ="< cout<<"\n Quantity="<
}
};
void main()
{
clrscr();
STOCK S;
S.Buy();
S.ShowAll();
getc
