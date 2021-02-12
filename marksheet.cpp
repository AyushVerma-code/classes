#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class result
{
  public:
  
  int rollno;
  char name[20];
  int eng,phy,chem,maths,comp;
  int total;
  int percent;

  void enter()
  {
    cout<<"Enter Roll no: ";
    cin>>rollno;

    cout<<"\nEnter your name: ";
    gets(name);

    cout<<"\nEnter your marks in Eng,Phy,Chem,Maths and Computers (out of 100)\n";
    cin>>eng>>phy>>chem>>maths>>comp;

    total=eng+phy+chem+maths+comp;
    percent=total/5;
  }



  void display()
  {
    cout<<"\n\n                                    MARKSHEET                                   \n";
    cout<<"--------------------------------------------------------------------------------\n\n";

    cout<<"\n\nYour name is ";
    puts(name);
    cout<<"\nRoll no is "<<rollno;
    cout<<"\n\nMarks in \n";
    cout<<"\nEnglish   :"<<eng;
    cout<<"\nPhysics   :"<<phy;
    cout<<"\nChemistry :"<<chem;
    cout<<"\nMaths     :"<<maths;
    cout<<"\nComputers :"<<comp;
    cout<<"\n\nTotal marks are "<<total;
    cout<<"\nPercentage is "<<percent;
  }

};

void main()
{
  clrscr();
  result s1;
  s1.enter();
  s1.display();
  getch();
}
