#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct bat
{
char name[20],modeout[70], indica;
int runs, score, totruns, totove, xtras;
};

struct bowl
{
char name[20];
int ttvrs,rnsgvn,wktstkn;
};
void main()
{
clrscr();
int plno;
int plytyp;
bat pl1[3];
bowl pl2[3];



cout<<"Enter the batsmen details:"<<endl;
for (int i=0;i<3;i++)
{
cout<<"Enter name of player "<<i+1<<endl;
gets (pl1[i].name);
cout<<"enter the runs scored by player "<<i+1<<endl;
cin>>pl1[i].runs;
cout<<"Enter the overs played by the player"<<i+1<<endl;
cin>>pl1[i].totove;
cout<<"Enter the status of the player if out (N)or not(Y)"<<endl;
cin>>pl1[i].indica;
}



cout<<"Enter the bowlers details "<<endl;
for (i=0;i<3;i++)
{
cout<<"Enter the name of the bowler "<<i+1<<endl;
gets(pl2[i].name);
cout<<"Enter the runs given by the bowler "<<i+1<<endl;
cin>>pl2[i].rnsgvn;
cout<<"Enter the wickets taken by the bowler "<<i+1<<endl;
cin>>pl2[i].wktstkn;
cout<<"Enter the total overs played by the  bowler "<<i+1<<endl;
cin>>pl2[i].ttvrs;
}


cout<<"Thank you all details recd"<<endl;
xyz:
cout<<"Select between batsmen(1) or bowlers(2) to see their details"<<endl;
abc:
cin>>plytyp;


switch (plytyp)
{


case 1:
cout<<"Enter the batsman number to see his details "<<endl<<endl<<endl;
cin>>plno;
plno--;
cout<<"Batsman number :"<<plno+1<<endl;
cout<<"Batsman name :";
puts(pl1[plno].name);
cout<<"Runs scored by the batsman :"<<pl1[plno].runs<<endl;
cout<<"Total overs played by the batsman :"<<pl1[plno].totove<<endl;
cout<<"Player status out "<<pl1[plno].indica<<endl;
break;



case 2:
cout<<"Enter the bowlers number to see his details "<<endl<<endl<<endl;
cin>>plno;
plno--;
cout<<"Bowlers name :";
puts(pl2[plno].name);
cout<<"Runs given by the player is :"<<pl2[plno].rnsgvn<<endl;
cout<<"Total overs played by the player :"<<pl2[plno].ttvrs<<endl;
cout<<"Total wickets taken by the user :"<<pl2[plno].wktstkn<<endl;
break;


default:
cout<<"Idiot enter a decent value"<<endl;
goto abc;
}

cout<<endl<<endl<<endl<<"Do you wish to continue? Y-1 N-2"<<endl;
cin>>plno;
if (plno==1)
goto xyz;
else
cout<<"Thank you Press any key to exit";
getch();
}
