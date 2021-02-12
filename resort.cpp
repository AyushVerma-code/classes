#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class Resort
{
	int Rno,Days;
	float Charges;
	char Name[20];
	float COMPUTER()
	{
		int amount;
		if((Days*Charges)>1100)
			amount=1.02*Days*Charges;
		else
			amount=Days*Charges;
		return(amount);
	}
	public:
	void Getinfo()
	{
		cout<<"\n\tENTER THE ROOM NUMBER:";
		cin>>Rno;
		cout<<"\n\tENTER THE CUSTOMER'S NAME:";
		gets(Name);
		cout<<"\n\tENTER THE CHARGES:";
		cin>>Charges;
		cout<<"\n\tENTER THE DAYS:";
		cin>>Days;
	}
	void Dispinfo()
	{
		cout<<"\n\tTHE ROOM NUMBER IS:"<<Rno;
		cout<<"\n\tTHE NAME IS:"<<Name;
		cout<<"\n\tTHE CHARGES ARE:"<<Charges;
		cout<<"\n\tTHE DAYS OF STAY ARE:"<<Days;
		cout<<"\n\tTHE AMOUNT TO BE PAID:"<<COMPUTER();
	}
};
void main()
{
	clrscr();
	Resort r;
	r.Getinfo();
	r.Dispinfo();
	getch();

}
