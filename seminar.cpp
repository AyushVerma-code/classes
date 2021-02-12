//PROGRAM THAT REGISTERS FOR VARIOUS SEMINARS AND DISPLAYS THE CORRESPONDING INFORMATION
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

class Seminar
{
	long SeminarId;            //data members
	char Topic[20];
	char VenueLocation[20];
	float fee;

	int CalcFee(char a[])           // function to calculate fee
	{

		if(!strcmpi(a,"outdoor"))
		{
			fee=5000;
		}
		else if(!strcmpi(a,"indoor non-ac"))
		{
			fee=6500;
		 }
		else if(!strcmpi(a,"indoor ac"))
		{
			fee=7500;
		 }
	}

	public:

	void Register()               //public members
	{
		cout<<"Please enter the seminar Id:";
		cin>>SeminarId;
		cout<<" Can you please tell the topic?:";
		gets(Topic);
		cout<<" Can you please tell the venue location?:";
		gets(VenueLocation);
		CalcFee(VenueLocation);
	}
	 void  ViewSeminar()

	{
		cout<<"\n The seminar id is:"<<SeminarId;
		cout<<"\n the topic is:"<<Topic;
		cout<<"\n the venue location is:"<<VenueLocation;
		cout<<"\n the fee:"<<fee;









	}



};

void main()
{        clrscr();
	 Seminar s;
	 s.Register();
	 s.ViewSeminar();
	 getch();



}







