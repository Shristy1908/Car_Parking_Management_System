//declaration of header files
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

int menu();
void bus();
void riksha();
void cycle();
void show_detail();
void Delete();

//declaration of global variable
int nob=0,nor=0,noc=0,amount=0,count=0;
void main()
{
   clrscr();
   int d;
   do
   {
   switch(menu())
   {
      case 1:
	 bus();
	 break;
      case 2:
	 riksha();
	 break;
      case 3:
	 cycle();
	 break;
      case 4:
	 show_detail();
	 break;
      case 5:
	 Delete();
	 break;
      case 6:
	 exit(0);
      default:
	  cout<<"YOU CHOOSE INVALID OPTION,CHOOSE CORRECT OPTION AGAIN!"<<endl;
   }
   cout<<"IF YOU WANT TO ADD MORE VECHCELS THEN PLEASE PRESS 0 ELSE YOU CAN PRESS ANY KEY TO EXIT"<<endl;
   cout<<"Enter your choise: ";
   cin>>d;
   clrscr();
   }
   while(d==0);
   cout<<"THANK YOU PLEASE VISIT AGAIN!"<<endl;
   getch();
}
int menu()
{
   int c;
   cout<<"**********************************************"<<endl;
   cout<<"PRESS 1 TO PARK BUS CHARGES IS 100 INR"<<endl;
   cout<<"PRESS 2 TO PARK RIKSHA CHARGES IS 70 INR"<<endl;
   cout<<"PRESS 3 TO PARK CYCLE CHARGES IS 50 INR"<<endl;
   cout<<"PRESS 4 TO SEE THE ENTERED RECORD"<<endl;
   cout<<"PRESS 5 TO DELETE THE RECORD"<<endl;
   cout<<"PRESS 6 TO EXIT"<<endl;
   cout<<"**********************************************"<<endl;
   cout<<"ENTER YOUR CHOISE: ";
   cin>>c;
   return c;
}
void bus()
{
   nob++;
   amount=amount+100;
   count++;
}
void riksha()
{
   nor++;
   amount=amount+70;
   count++;
}
void cycle()
{
   noc++;
   amount=amount+50;
   count++;
}

void show_detail()
{
   cout<<"***********************************************"<<endl;
   cout<<"TOTAL NUMBER OF BUSES STANDING IN PARKING: "<<nob<<endl;
   cout<<"TOTAL NUMBER OF RIKSHA STANDING IN PARKING: "<<nor<<endl;
   cout<<"TOTAL NUMBER OF CYCLE STANDING IN PARKING: "<<noc<<endl;
   cout<<"TOTAL NUMBER OF VECHICELS STANDING IN PARKING AREA: "<<count<<endl;
   cout<<"TOTAL COLLECTION OF PARKING AMOUNT: "<<amount<<endl;
   cout<<"***********************************************"<<endl;
}
void Delete()
{
   nob=0;
   nor=0;
   noc=0;
   amount=0;
   count=0;
}


