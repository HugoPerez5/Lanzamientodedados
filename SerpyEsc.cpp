#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int dado();

int main()
{
	srand(time(NULL));
	int tab[101]={0};
	tab[5]=15;
	tab[30]=37;
	tab[23]=31;
	tab[16]=21;
	tab[52]=60;
	tab[70]=84;
	tab[3]=10;
	tab[92]=97;
	tab[13]=23;
	tab[85]=100;

	tab[16]=1;
	tab[32]=27;
	tab[84]=69;
	tab[14]=4;
	tab[99]=86;
	tab[55]=50;
	tab[28]=22;
	tab[77]=67;
	tab[70]=65;
	tab[10]=0;
	int pj=0,j1=0,j2=0;
	while(j1<100 && j2<100)
	{
		j1+=dado();
		j2+=dado();
		j1+=tab[j1];
		cout<<"Jugador 1: "<<j1<<endl;
		j2+=tab[j2];	
		cout<<"Jugador 2: "<<j2<<endl;
		if(j1>100 || j2>100)
		{
			
		}
	}

	
	if(j1<j2)
	{
		cout<<"Jugador 2 gano";	
	}
	if(j1>j2)
	{
		cout<<"Jugador 1 gano";
	}	
}
int dado()
{
	return 1+rand()%6;
}
