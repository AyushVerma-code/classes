#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

class student
{
	int rno;
	char name[20];
	float marks;
	public:
	void get_data()
	{
		cout<<"Enter the roll no ";
		cin>>rno;
		cout<<"Enter the name ";
		gets(name);
		cout<<"Enter the marks ";
		cin>>marks;
	}
	void show_data()
	{
		cout<<"Roll no "<<rno<<endl;
		cout<<"Name ";
		puts(name);
		cout<<endl<<"Marks "<<marks<<endl;
	}
	int retno()
	{
		return rno;
	}
	char* retname()
	{
		return name;
	}
	float retmarks()
	{
		return marks;
	}
};
void create_file()
{
	ofstream fout;
	fout.open("abc.dat",ios::binary);
	student s1;
	char choice='y';
	while(choice=='y')
	{
		s1.get_data();
		fout.write((char*)&s1,sizeof(s1));
		cout<<"Do you wnat to enter more records (y/n)";
		cin>>choice;
	}
	fout.close();
}
void read_file()
{
	ifstream fin;
	fin.open("abc.dat",ios::binary);
	student s1;
	while(fin.read((char*)&s1,sizeof(s1)));
	{
		s1.show_data();
	}
	fin.close();
}
void search_file1()
{
	int search_rno,flag=0;
	ifstream fin;
	fin.open("abc.dat",ios::binary);
	student s1;
	cout<<"Enter the roll number of the student whose records you want to search \n";
	cin>>search_rno;
	while(fin.read((char*&)s1,sizeof(s1)))
	{
		if(search_rno==s1.retno())
		{
			s1.show_data();
			flag=1;
		}
	}
	if(flag!=1)
		cout<<"No record found \n";
	fin.close();

}
void search_file2()
{
	char search_name[20];
	int flag=0;
	ifstream fin;
	fin.open("abc.dat",ios::binary);
	student s1;
	cout<<"Enter the name of the student whose records you want to search \n";
	gets(search_name);
	while(fin.read((char*&)s1,sizeof(s1)))
	{
		if(strcmpi(search_name,s1.retname()))
		{
			s1.show_data();
			flag=1;
		}
	}
	if(flag!=1)
		cout<<"No record found \n";
	fin.close();

}
void search_file3()
{
	float search_marks;
	int flag=0;
	ifstream fin;
	fin.open("abc.dat",ios::binary);
	student s1;
	cout<<"Enter the marks of the student whose records you want to search \n";
	cin>>search_marks;
	while(fin.read((char*&)s1,sizeof(s1)))
	{
		if(search_marks==s1.retmarks())
		{
			s1.show_data();
			flag=1;
		}
	}
	if(flag!=1)
		cout<<"No record found \n";
	fin.close();

}

void main()
{
	int flag=0;
	clrscr();
	do
	{
	int choice=0;
	clrscr();
	cout<<"Press 1 to create a file \n";
	cout<<"Press 2 to read all records \n";
	cout<<"Press 3 to search the records using Roll no \n";
	cout<<"Press 4 to search the records using Name of the student \n";
	cout<<"Press 5 to search the records using marks of the student \n";
	cout<<"Press 6 to exit \n";
	cin>>choice;
	switch(choice)
	{
		case 1: create_file();
			break;
		case 2: read_file();
			break;
		case 3: search_file1();
			break;
		case 4: search_file2();
			break;
		case 5: search_file3();
			break;
		case 6:	flag=1;
			break;
		default: cout<<"Invalid choice";
	}
	getch();
	}while(flag!=1);
}





