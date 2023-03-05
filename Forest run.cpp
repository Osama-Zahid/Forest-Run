// Sufyan & Osama Zahid
// 19L-2329 & 19L-1203
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
int p1=0,p2=0,p3=0,dice1,dice2,dice3,count=0,counter1,counter2,counter3;
int cc1=10,cc2=20,cc3=30;
char op,p1name[40], p2name[40], p3name[40];
int tor =1,cr=3,hen=5,she=15 ;
int crab=10,sn=20,bf=5,ti=25;
HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
using namespace std;
void draw_line(int n,char ch) 
{
	SetConsoleTextAttribute(h, 11);
    for (int i=0; i<n; i++)
    {
    	cout <<ch;
	}       
}
void board()
{
	int a[10][10];
	a[0][0]=01 ;a[0][1]=02;a[0][2]=03;a[0][3]=04;a[0][4]=05;a[0][5]=06;a[0][6]=07;a[0][7]= 8;a[0][8]= 9;a[0][9]=10;
    a[1][0]=11 ;a[1][1]=12;a[1][2]=13;a[1][3]=14;a[1][4]=15;a[1][5]=16;a[1][6]=17;a[1][7]=18;a[1][8]=19;a[1][9]=20;
    a[2][0]=21 ;a[2][1]=22;a[2][2]=23;a[2][3]=24;a[2][4]=25;a[2][5]=26;a[2][6]=27;a[2][7]=28;a[2][8]=29;a[2][9]=30;
    a[3][0]=31 ;a[3][1]=32;a[3][2]=33;a[3][3]=34;a[3][4]=35;a[3][5]=36;a[3][6]=37;a[3][7]=38;a[3][8]=39;a[3][9]=40;
	a[4][0]=41 ;a[4][1]=42;a[4][2]=43;a[4][3]=44;a[4][4]=45;a[4][5]=46;a[4][6]=47;a[4][7]=48;a[4][8]=49;a[4][9]=50;
	a[5][0]=51 ;a[5][1]=52;a[5][2]=53;a[5][3]=54;a[5][4]=55;a[5][5]=56;a[5][6]=57;a[5][7]=58;a[5][8]=59;a[5][9]=60;
	a[6][0]=61 ;a[6][1]=62;a[6][2]=63;a[6][3]=64;a[6][4]=65;a[6][5]=66;a[6][6]=67;a[6][7]=68;a[6][8]=69;a[6][9]=70;
	a[7][0]=71 ;a[7][1]=72;a[7][2]=73;a[7][3]=74;a[7][4]=75;a[7][5]=76;a[7][6]=77;a[7][7]=78;a[7][8]=79;a[7][9]=80;
	a[8][0]=81 ;a[8][1]=82; a[8][2]=83; a[8][3]=84; a[8][4]=85; a[8][5]=86; a[8][6]=87; a[8][7]=88; a[8][8]=89; a[8][9]=90;
	a[9][0]=91 ;a[9][1]=92; a[9][2]=93; a[9][3]=94; a[9][4]=95; a[9][5]=96; a[9][6]=97; a[9][7]=98; a[9][8]=99; a[9][9]=100;
	SetConsoleTextAttribute(h, 6);
	draw_line(161, '-');
	cout<<"\n|	"<<a[9][0]<<"	|	"<<a[9][1]<<"	|	"<<a[9][2]<<"	|	"<<a[9][3]<<"	|	"<<a[9][4]<<"	|	"<<a[9][5]<<"	|	"<<a[9][6]<<"	|	"<<a[9][7]<<"	|	"<<a[9][8]<<"	|	"<<a[9][9]<<"	|"<<endl;
	draw_line(161, '-');
	cout<<"\n|	"<<a[8][0]<<"	|	"<<a[8][1]<<"	|	"<<a[8][2]<<"	|	"<<a[8][3]<<"	|	"<<a[8][4]<<"	|	"<<a[8][5]<<"	|	"<<a[8][6]<<"	|	"<<a[8][7]<<"	|	"<<a[8][8]<<"	|	"<<a[8][9]<<"	|"<<endl;
	draw_line(161, '-');
	cout<<"\n|	"<<a[7][0]<<"	|	"<<a[7][1]<<"	|	"<<a[7][2]<<"	|	"<<a[7][3]<<"	|	"<<a[7][4]<<"	|	"<<a[7][5]<<"	|	"<<a[7][6]<<"	|	"<<a[7][7]<<"	|	"<<a[7][8]<<"	|	"<<a[7][9]<<"	|"<<endl;
	draw_line(161, '-');
	cout<<"\n|	"<<a[6][0]<<"	|	"<<a[6][1]<<"	|	"<<a[6][2]<<"	|	"<<a[6][3]<<"	|	"<<a[6][4]<<"	|	"<<a[6][5]<<"	|	"<<a[6][6]<<"	|	"<<a[6][7]<<"	|	"<<a[6][8]<<"	|	"<<a[6][9]<<"	|"<<endl;
	draw_line(161, '-');
	cout<<"\n|	"<<a[5][0]<<"	|	"<<a[5][1]<<"	|	"<<a[5][2]<<"	|	"<<a[5][3]<<"	|	"<<a[5][4]<<"	|	"<<a[5][5]<<"	|	"<<a[5][6]<<"	|	"<<a[5][7]<<"	|	"<<a[5][8]<<"	|	"<<a[5][9]<<"	|"<<endl;
	draw_line(161, '-');
	cout<<"\n|	"<<a[4][0]<<"	|	"<<a[4][1]<<"	|	"<<a[4][2]<<"	|	"<<a[4][3]<<"	|	"<<a[4][4]<<"	|	"<<a[4][5]<<"	|	"<<a[4][6]<<"	|	"<<a[4][7]<<"	|	"<<a[4][8]<<"	|	"<<a[4][9]<<"	|"<<endl;
	draw_line(161, '-');
	cout<<"\n|	"<<a[3][0]<<"	|	"<<a[3][1]<<"	|	"<<a[3][2]<<"	|	"<<a[3][3]<<"	|	"<<a[3][4]<<"	|	"<<a[3][5]<<"	|	"<<a[3][6]<<"	|	"<<a[3][7]<<"	|	"<<a[3][8]<<"	|	"<<a[3][9]<<"	|"<<endl;
	draw_line(161, '-');
	cout<<"\n|	"<<a[2][0]<<"	|	"<<a[2][1]<<"	|	"<<a[2][2]<<"	|	"<<a[2][3]<<"	|	"<<a[2][4]<<"	|	"<<a[2][5]<<"	|	"<<a[2][6]<<"	|	"<<a[2][7]<<"	|	"<<a[2][8]<<"	|	"<<a[2][9]<<"	|"<<endl;
	draw_line(161, '-');
	cout<<"\n|	"<<a[1][0]<<"	|	"<<a[1][1]<<"	|	"<<a[1][2]<<"	|	"<<a[1][3]<<"	|	"<<a[1][4]<<"	|	"<<a[1][5]<<"	|	"<<a[1][6]<<"	|	"<<a[1][7]<<"	|	"<<a[1][8]<<"	|	"<<a[1][9]<<"	|"<<endl;
	draw_line(161, '-');
	cout<<"\n|	"<<"0"<<a[0][0]<<"	|	"<<"0"<<a[0][1]<<"	|	"<<"0"<<a[0][2]<<"	|	"<<"0"<<a[0][3]<<"	|	"<<"0"<<a[0][4]<<"	|	"<<"0"<<a[0][5]<<"	|	"<<"0"<<a[0][6]<<"	|	"<<"0"<<a[0][7]<<"	|	"<<"0"<<a[0][8]<<"	|	"<<a[0][9]<<"	|"<<endl;
	draw_line(161, '-');
}
void positions()
{
	SetConsoleTextAttribute(h, 2);
	cout<<"\n\nFIXED POSITIONS: \n\n";
	cout<<" TORTOISE BOOST: | 5| "<<'\t'<<" |27| "<<'\t'<<" |54| "<<"\n";
	cout<<" --------------------------------------------\n";
	cout<<" BUTTERFLY STING:| 8| "<<'\t'<<" |46| "<<'\t'<<" |78| "<<"\n";
	cout<<" --------------------------------------------\n";
	cout<<" HEN BOOST:      |13| "<<'\t'<<" |39| "<<'\t'<<" |74| "<<'\t'<<" |94| "<<"\n";
	cout<<" --------------------------------------------\n";
	cout<<" CRAB STING:     |15| "<<'\t'<<" |32| "<<'\t'<<" |57| "<<'\t'<<" |96| "<<"\n";
	cout<<" --------------------------------------------\n";
	cout<<" CROW BOOST:     |19| "<<'\t'<<" |29| "<<'\t'<<" |82| "<<"\n";
	cout<<" --------------------------------------------\n";
	cout<<" SNAKE STING:    |25| "<<'\t'<<" |61| "<<'\t'<<" |99| "<<"\n";
	cout<<" --------------------------------------------\n";
	cout<<" SHEEP BOOST:    |43| "<<'\t'<<" |85| "<<"\n";
	cout<<" --------------------------------------------\n";
	cout<<" TIGER STING:    |70| "<<'\t'<<" |90| "<<"\n";
	cout<<" HOUSE   |100|"<<"\n";	    
}
void p1turn()
{
	SetConsoleTextAttribute(h, 5);
	if(p1<=100)
	{
	cout<<"\nPLAYER 1 ITS YOUR TURN \n\n"; 
	cout<<"\nENTER KEY TO PROCEED THE GAME\n"<<endl;
	cin.get();
	dice1=0;
	srand(time(0));
	dice1=rand()%6+1;
	p1=p1+dice1;
	cout<<"DICE ROLL FOR PLAYER 1: "<<dice1<<endl;
	if(p1==5)
	{
		p1 =p1 +tor;
		cout<<"Tortoise boost by 1"<<endl;
		cout<<"POSITION OF PLAYER 1 IS :"<<p1<<"\n\n";
	}
	else if(p1==8)
	{
		p1=p1-bf;
		cout<<"butterfly sting by 5"<<endl;
		cout<<"POSITION OF PLAYER 1 IS :"<<p1<<"\n\n";
	}
	else if(p1==13)
	{
		p1=p1+hen;
		cout<<"hen boost by 5"<<endl;
		cout<<"POSITION OF PLAYER 1 IS :"<<p1<<"\n\n";
	}
	else if(p1==15)
	{
		p1=p1-crab;
		cout<<"crab sting by 10"<<endl;
		cout<<"POSITION OF PLAYER 1 IS :"<<p1<<"\n\n";
	}
	else if(p1==19)
	{
		p1=p1+cr;
		cout<<"Crow boost by 3"<<endl;
		cout<<"POSITION OF PLAYER 1 IS :"<<p1<<"\n\n";
	}
	else if(p1==25)
	{
		p1=p1-sn;
		cout<<"snake sting by 20"<<endl;
		cout<<"POSITION OF PLAYER 1 IS :"<<p1<<"\n\n";
	}
	else if(p1==27)
	{
		p1 =p1 +tor;
		cout<<"Tortoise boost by 1"<<endl;
		cout<<"POSITION OF PLAYER 1 IS :"<<p1<<"\n\n";
	}
	else if(p1==29)
	{
		p1=p1+cr;
		cout<<"Crow boost by 3"<<endl;
		cout<<"POSITION OF PLAYER 1 IS :"<<p1<<"\n\n";
	}
	else if(p1==32)
	{
		p1=p1-crab;
		cout<<"crab sting by 10"<<endl;
		cout<<"POSITION OF PLAYER 1 IS :"<<p1<<"\n\n";
	}
	else if(p1==39)
	{
		p1=p1+hen;
		cout<<"hen boost by 5"<<endl;
		cout<<"POSITION OF PLAYER 1 IS :"<<p1<<"\n\n";
	}
	else if(p1==43)
	{
		p1=p1+she;
		cout<<"sheep boost by 15"<<endl;
		cout<<"POSITION OF PLAYER 1 IS :"<<p1<<"\n\n";
	}
	else if(p1==46)
	{
		p1=p1-bf;
		cout<<"butterfly sting by 5"<<endl;
		cout<<"POSITION OF PLAYER 1 IS :"<<p1<<"\n\n";
	}
	else if(p1==54)
	{
		p1 =p1 +tor;
		cout<<"Tortoise boost by 1"<<endl;
		cout<<"POSITION OF PLAYER 1 IS :"<<p1<<"\n\n";
	}
	else if(p1==57)
	{
		p1=p1-crab;
		cout<<"crab sting by 10"<<endl;
		cout<<"POSITION OF PLAYER 1 IS :"<<p1<<"\n\n";
	}
	else if(p1==61)
	{
		p1=p1-sn;
		cout<<"snake sting by 20"<<endl;
		cout<<"POSITION OF PLAYER 1 IS :"<<p1<<"\n\n";
	}
	else if(p1==70)
	{
		p1=p1-ti;
		cout<<"tiger sting by 25"<<endl;
		cout<<"POSITION OF PLAYER 1 IS :"<<p1<<"\n\n";
	}
	else if(p1==74)
	{
		p1=p1+hen;
		cout<<"hen boost by 5"<<endl;
		cout<<"POSITION OF PLAYER 1 IS :"<<p1<<"\n\n";
	}
	else if(p1==78)
	{
		p1=p1-bf;
		cout<<"butterfly sting by 5"<<endl;	
		cout<<"POSITION OF PLAYER 1 IS :"<<p1<<"\n\n";
	}
	else if(p1==82)
	{
		p1=p1+cr;
		cout<<"Crow boost by 3"<<endl;
		cout<<"POSITION OF PLAYER 1 IS :"<<p1<<"\n\n";
	}
	else if(p1==85)
	{
		p1=p1+she;
		cout<<"sheep boost by 15"<<endl;
		cout<<"POSITION OF PLAYER 1 IS :"<<p1<<"\n\n";
	}
	else if(p1==91)
	{
		p1=p1-ti;
		cout<<"tiger sting by 25"<<endl;
		cout<<"POSITION OF PLAYER 1 IS :"<<p1<<"\n\n";
	}
	else if(p1==95)
	{
		p1=p1+hen;
		cout<<"hen boost by 5"<<endl;
		cout<<"POSITION OF PLAYER 1 IS :"<<p1<<"\n\n";
	}
	else if(p1==96)
	{
		p1=p1-crab;
		cout<<"crab sting by 10"<<endl;
		cout<<"POSITION OF PLAYER 1 IS :"<<p1<<"\n\n";
	}
	else if(p1==99)
	{
		p1=p1-sn;
		cout<<"snake sting by 20"<<endl;
		cout<<"POSITION OF PLAYER 1 IS :"<<p1<<"\n\n";
	}
	else if (p1>=100)
	{
		count++;
		counter1=count;
		counter1=counter1*cc1;
		cc1=counter1/cc1;
		counter1=counter1/cc1;
	}
	
}
	cout<<"\n\nPOSITION OF PLAYER 1 IS :"<<p1<<"\n\n";
}
void p2turn()
{
	SetConsoleTextAttribute(h, 15);
	if(p2<=100)
	{
	cout<<"\nPLAYER2 ITS YOUR TURN:\n\n";
	cout<<"\nENTER KEY TO PROCEED THE GAME\n"<<endl;
	cin.get();
	dice2=0;
	srand(time(0));
	dice2=rand()%6+1;
	p2=p2+dice2;
	cout<<"DICE ROLL FOR PLAYER 2: "<<dice2<<endl;
	if(p2==5)
	{
		p2 =p2 +tor;
		cout<<"Tortoise boost by 1"<<endl;
		cout<<"POSITION OF PLAYER 2 IS :"<<p2<<"\n\n";
	}
	else if(p2==8)
	{
		p2=p2-bf;
		cout<<"butterfly sting by 5"<<endl;
		cout<<"POSITION OF PLAYER 2 IS :"<<p2<<"\n\n";
	}
		else if(p2==13)
	{
		p2=p2+hen;
		cout<<"hen boost by 5"<<endl;
		cout<<"POSITION OF PLAYER 2 IS :"<<p2<<"\n\n";
	}
	else if(p2==15)
	{
		p2=p2-crab;
		cout<<"crab sting by 10"<<endl;
		cout<<"POSITION OF PLAYER 2 IS :"<<p2<<"\n\n";
	}
	else if(p2==19)
	{
		p2=p2+cr;
		cout<<"Crow boost by 3"<<endl;
		cout<<"POSITION OF PLAYER 2 IS :"<<p2<<"\n\n";
	}
	else if(p2==25)
	{
		p2=p2-sn;
		cout<<"snake sting by 20"<<endl;
		cout<<"POSITION OF PLAYER 2 IS :"<<p2<<"\n\n";
	}
	else if(p2==27)
	{
		p2 =p2 +tor;
		cout<<"Tortoise boost by 1"<<endl;
		cout<<"POSITION OF PLAYER 2 IS :"<<p2<<"\n\n";
	}
	else if(p2==29)
	{
		p2=p2+cr;
		cout<<"Crow boost by 3"<<endl;
		cout<<"POSITION OF PLAYER 2 IS :"<<p2<<"\n\n";
	}
	else if(p2==32)
	{
		p2=p2-crab;
		cout<<"crab sting by 10"<<endl;
		cout<<"POSITION OF PLAYER 2 IS :"<<p2<<"\n\n";
	}
	else if(p2==39)
	{
		p2=p2+hen;
		cout<<"hen boost by 5"<<endl;
		cout<<"POSITION OF PLAYER 2 IS :"<<p2<<"\n\n";
	}
	else if(p2==43)
	{
		p2=p2+she;
		cout<<"sheep boost by 15"<<endl;
		cout<<"POSITION OF PLAYER 2 IS :"<<p2<<"\n\n";
	}
	else if(p2==46)
	{
		p2=p2-bf;
		cout<<"butterfly sting by 5"<<endl;
		cout<<"POSITION OF PLAYER 2 IS :"<<p2<<"\n\n";
	}
	else if(p2==54)
	{
		p2 =p2 +tor;
		cout<<"Tortoise boost by 1"<<endl;
		cout<<"POSITION OF PLAYER 2 IS :"<<p2<<"\n\n";
	}
	else if(p2==57)
	{
		p2=p2-crab;
		cout<<"crab sting by 10"<<endl;
		cout<<"POSITION OF PLAYER 2 IS :"<<p2<<"\n\n";
	}
	else if(p2==61)
	{
		p2=p2-sn;
		cout<<"snake sting by 20"<<endl;
		cout<<"POSITION OF PLAYER 2 IS :"<<p2<<"\n\n";
	}
	else if(p2==70)
	{
		p2=p2-ti;
		cout<<"tiger sting by 25"<<endl;
		cout<<"POSITION OF PLAYER 2 IS :"<<p2<<"\n\n";
	}
	else if(p2==74)
	{
		p2=p2+hen;
		cout<<"hen boost by 5"<<endl;
		cout<<"POSITION OF PLAYER 2 IS :"<<p2<<"\n\n";
	}
	else if(p2==78)
	{
		p2=p2-bf;
		cout<<"butterfly sting by 5"<<endl;	
		cout<<"POSITION OF PLAYER 2 IS :"<<p2<<"\n\n";
	}
	else if(p2==82)
	{
		p2=p2+cr;
		cout<<"Crow boost by 3"<<endl;
		cout<<"POSITION OF PLAYER 2 IS :"<<p2<<"\n\n";
	}
	else if(p2==85)
	{
		p2=p2+she;
		cout<<"sheep boost by 15"<<endl;
		cout<<"POSITION OF PLAYER 2 IS :"<<p2<<"\n\n";
	}
	else if(p2==91)
	{
		p2=p2-ti;
		cout<<"tiger sting by 25"<<endl;
		cout<<"POSITION OF PLAYER 2 IS :"<<p2<<"\n\n";
	}
	else if(p2==95)
	{
		p2=p2+hen;
		cout<<"hen boost by 5"<<endl;
		cout<<"POSITION OF PLAYER 2 IS :"<<p2<<"\n\n";
	}
	else if(p2==96)
	{
		p2=p2-crab;
		cout<<"crab sting by 10"<<endl;
		cout<<"POSITION OF PLAYER 2 IS :"<<p2<<"\n\n";
	}
	else if(p2==99)
	{
		p2=p2-sn;
		cout<<"snake sting by 20"<<endl;
		cout<<"POSITION OF PLAYER 2 IS :"<<p2<<"\n\n";
 }
	else if (p2>=100)
	{
		count++;
		counter2=count;
		counter2=counter2*cc2;
		cc2=counter2/cc2;
		counter2=counter2/cc2;
	}
}
	cout<<"\nTHE POSITION OF PLAYER 2 IS :"<< p2<<"\n";
}
void p3turn()
{
	SetConsoleTextAttribute(h, 12);
	if (p3<=100)
	{
	cout<<"\nPLAYER 3 ITS YOUR TURN \n\n"; 
	cout<<"\nENTER KEY TO PROCEED THE GAME\n"<<endl;
	cin.get();
	dice3=0;
	srand(time(0));
	dice3=rand()%6+1;
	cout<<"DICE ROLL FOR PLAYER 3: "<<dice3<<endl;
	p3=p3+dice3;
	if(p3==5)
	{
		p3 =p3 +tor;
		cout<<"Tortoise boost by 1"<<endl;
		cout<<"POSITION OF PLAYER 3 IS :"<<p3<<"\n\n";
	}
	else if(p3==8)
	{
		p3=p3-bf;
		cout<<"butterfly sting by 5"<<endl;
		cout<<"POSITION OF PLAYER 3 IS :"<<p3<<"\n";
	}
		else if(p3==13)
	{
		p3=p3+hen;
		cout<<"hen boost by 5"<<endl;
		cout<<"POSITION OF PLAYER 3 IS :"<<p3<<"\n";
	}
	else if(p3==15)
	{
		p3=p3-crab;
		cout<<"crab sting by 10"<<endl;
		cout<<"POSITION OF PLAYER 3 IS :"<<p3<<"\n";
	}
	else if(p3==19)
	{
		p3=p3+cr;
		cout<<"Crow boost by 3"<<endl;
		cout<<"POSITION OF PLAYER 3 IS :"<<p3<<"\n";
	}
	else if(p3==25)
	{
		p3=p3-sn;
		cout<<"snake sting by 20"<<endl;
		cout<<"POSITION OF PLAYER 3 IS :"<<p3<<"\n";
	}
	else if(p3==27)
	{
		p3 =p3 +tor;
		cout<<"Tortoise boost by 1"<<endl;
		cout<<"POSITION OF PLAYER 3 IS :"<<p3<<"\n";
	}
	else if(p3==29)
	{
		p3=p3+cr;
		cout<<"Crow boost by 3"<<endl;
		cout<<"POSITION OF PLAYER 3 IS :"<<p3<<"\n";
	}
	else if(p3==32)
	{
		p3=p3-crab;
		cout<<"crab sting by 10"<<endl;
		cout<<"POSITION OF PLAYER 3 IS :"<<p3<<"\n";
	}
	else if(p3==39)
	{
		p3=p3+hen;
		cout<<"hen boost by 5"<<endl;
		cout<<"POSITION OF PLAYER 3 IS :"<<p3<<"\n";
	}
	else if(p3==43)
	{
		p3=p3+she;
		cout<<"sheep boost by 15"<<endl;
		cout<<"POSITION OF PLAYER 3 IS :"<<p3<<"\n";
	}
	else if(p3==46)
	{
		p3=p3-bf;
		cout<<"butterfly sting by 5"<<endl;
		cout<<"POSITION OF PLAYER 3 IS :"<<p3<<"\n";
	}
	else if(p3==54)
	{
		p3 =p3 +tor;
		cout<<"Tortoise boost by 1"<<endl;
		cout<<"POSITION OF PLAYER 3 IS :"<<p3<<"\n";
	}
	else if(p3==57)
	{
		p3=p3-crab;
		cout<<"crab sting by 10"<<endl;
		cout<<"POSITION OF PLAYER 3 IS :"<<p3<<"\n";
	}
	else if(p3==61)
	{
		p3=p3-sn;
		cout<<"snake sting by 20"<<endl;
		cout<<"POSITION OF PLAYER 3 IS :"<<p3<<"\n";
	}
	else if(p3==70)
	{
		p3=p3-ti;
		cout<<"tiger sting by 25"<<endl;
		cout<<"POSITION OF PLAYER 3 IS :"<<p3<<"\n";
	}
	else if(p3==74)
	{
		p3=p3+hen;
		cout<<"hen boost by 5"<<endl;
		cout<<"POSITION OF PLAYER 3 IS :"<<p3<<"\n";
	}
	else if(p3==78)
	{
		p3=p3-bf;
		cout<<"butterfly sting by 5"<<endl;	
		cout<<"POSITION OF PLAYER 3 IS :"<<p3<<"\n";
	}
	else if(p3==82)
	{
		p3=p3+cr;
		cout<<"Crow boost by 3"<<endl;
		cout<<"POSITION OF PLAYER 3 IS :"<<p3<<"\n";
	}
	else if(p3==85)
	{
		p3=p3+she;
		cout<<"sheep boost by 15"<<endl;
		cout<<"POSITION OF PLAYER 3 IS :"<<p3<<"\n";
	}
	else if(p3==91)
	{
		p3=p3-ti;
		cout<<"tiger sting by 25"<<endl;
		cout<<"POSITION OF PLAYER 3 IS :"<<p3<<"\n";
	}
	else if(p3==95)
	{
		p3=p3+hen;
		cout<<"hen boost by 5"<<endl;
		cout<<"POSITION OF PLAYER 3 IS :"<<p3<<"\n";
	}
	else if(p3==96)
	{
		p3=p3-crab;
		cout<<"crab sting by 10"<<endl;
		cout<<"POSITION OF PLAYER 3 IS :"<<p3<<"\n";
	}
	else if(p3==99)
	{
		p3=p3-sn;
		cout<<"snake sting by 20"<<endl;
		cout<<"POSITION OF PLAYER 3 IS :"<<p3<<"\n";
	}
	else if (p3>=100)
	{
		count++;
		counter3=count;
		counter3=counter3*cc3;
		cc3=counter3/cc3;
		counter3=counter3/cc3;
	}
}
	cout<<"\n\nPOSITION OF PLAYER 3 IS :"<<p3<<"\n";
}
int main()
{
	draw_line(50, '-');
	SetConsoleTextAttribute(h, 4);
    cout << "\n\n\n\n\t\tFOREST RUN GAME\n\n\n\n";
    draw_line(50, '-');
    SetConsoleTextAttribute(h, 13);
	cout << "\n\n\nEnter Name of player 1 :";
    gets(p1name);
    SetConsoleTextAttribute(h, 3);
    cout << "\n\nEnter Name of player 2 :";
    gets(p2name);
    SetConsoleTextAttribute(h, 12);
	cout << "\n\n\Enter Name of player 3 :";
    gets(p3name);
	cout<<"\n\n";

while(p1<=100 || p2<=100 || p3<=100)
{
	SetConsoleTextAttribute(h, 13);
	cout<<"\nThe position of PLAYER1 is:"<<'\t';
	cout<<p1;
	SetConsoleTextAttribute(h, 3);
	cout<<"\nThe position of PLAYER2 is:"<<'\t';
	cout<<p2;
	SetConsoleTextAttribute(h, 12);
	cout<<"\nThe position of PLAYER3 is:"<<'\t';
	cout<<p3;
	cout<<"\n";
	cout<<"PRESS ANY KEY TO PROCEED\n";
	cin.get();
	board();
	positions();
	p1turn();
	draw_line(50, '-');
	p2turn();
	draw_line(50, '-');
	p3turn();
	draw_line(50, '-');
	SetConsoleTextAttribute(h, 14);
	cout<<"\nPRESS C TO CONTINUE"<<endl;
	cout<<"PRESS P FOR PAUSE"<<endl;
	cout<<"PRESS E TO EXIT THE GAME"<<endl;
	cin>>op;
	SetConsoleTextAttribute(h, 15);
	if(op=='e' || op=='E')
	{
		cout<<"EXITING THE GAME! \n\n";
		cout<<"The position of PLAYER1 is "<<p1<<endl;
		cout<<"The position of PLAYER2 is "<<p2<<endl;
		cout<<"The position of PLAYER3 is "<<p3<<endl;
		break;
	}
	else if(op=='p' || op== 'P')
	{
		SetConsoleTextAttribute(h, 10);
		cout<<"PAUSING THE GAME ! \n\n";
		cout<<"The position of PLAYER1 is "<<p1<<endl;
		cout<<"The position of PLAYER2 is "<<p2<<endl;
		cout<<"The position of PLAYER3 is "<<p3<<endl;
		cin.get();
	}
	else if (op=='c' || op=='C')
	{
		continue;
	}
}
	for(int i=0; (p1>=100 || p2>=100 || p3>=100) ; i++)
	{
		SetConsoleTextAttribute(h, 1);
		cout<<"\n\n--------------------------------------------";
		SetConsoleTextAttribute(h, 4);
		cout<<"\n\n\t\tRESULT!";
		SetConsoleTextAttribute(h, 2);
		cout<<"\n\n********************************************";
		SetConsoleTextAttribute(h, 13);
		cout<<"\n\nPLAYER 1 GET "<<cc1<<" POSITION "<<endl;
		SetConsoleTextAttribute(h, 3);
		cout<<"\n\nPLAYER 2 GOT "<<cc2<<" POSITION "<<endl;
		SetConsoleTextAttribute(h, 12);
		cout<<"\n\nPLAYER 3 GOT "<<cc3<<" POSITION "<<endl;
		break;
	}
getch();
cout<<"\n\n";
system("pause");	
return 0;
}
