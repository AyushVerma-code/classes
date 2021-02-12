//CLASS DESIGNING PROGRAM 3 : CLASS CANDIDATE

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

  class Candidate

  {
       long Rno;
       char Cname[42];                 //PRIVATE MEMBERS
       float Agg_Marks;
       char Grade;

       void SetGrade()
       {
	  if(Agg_Marks >=80)
	     {
		Grade='A';
	     }
	  else if(Agg_Marks>=65&&Agg_Marks<80)

	    {
		Grade='B';
	    }
	  else if(Agg_Marks>=50&&Agg_Marks<65)
	   {
	     Grade='C';
	   }
	  else
	     Grade='D';
       }



  public:
	  void Getdata()
							//PUBLIC MEMBERS
	  {
	      cout<<"\n\tEnter the value of Rno.:";
	      cin>>Rno;
	      cout<<"\n\tEnter the value of Cname:";
	      gets(Cname);
	      cout<<"\n\tEnter the value of aggregate marks:";
	      cin>>Agg_Marks;
	      SetGrade();
	  }

	 void dispResult()
	 {
	    cout<<"\n\tRno. is:"<<Rno;
	    cout<<"\n\t Cname is:";
	    puts(Cname);
	    cout<<"\n\tAggregate Marks are:"<<Agg_Marks;
	    cout<<"\n\t Grade is:"<<Grade;
	 }
  };
     void main()

     {
	 clrscr();

	 Candidate D;
	 D.Getdata();
	 D.dispResult();
	 getch();
     }
