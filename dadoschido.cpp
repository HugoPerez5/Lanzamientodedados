#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int aleat();
void histograma(int tam);
int main()
{
	srand(time(NULL));
	int op,ale=0;
	int dad[6]={0};
	cout<<"LANZAMIENTO DE DADOS";
	do{
		cout<<"Que quieres hacer? \n";
		cout<<"1.- 1 LANZAMIENTO\n";
		cout<<"2.- 2 LANZAMIENTOS \n";
		cin>>op;
		switch(op)
		{
			case 1:
				{
					cout<<"LANZAMIENTO DE UN DADO\n\n";
					for(int i=1;i<=6;i++)
					{
						ale=aleat();
						dad[i]=ale;
						ale=0;
					}
					for(int j=1;j<=6;j++)
					{
						cout<<"La cara "<<j<<" salio "<<dad[j]<<" veces \n";
						cout<<"\n Histograma de cara "<<j<<" es: ";
						histograma(dad[j]); 
						cout<<"\n";
					}
				}
			break;
			case 2:
				{
					cout<<"LANZAMIENTO DE DOS DADOS\n\n";
					for(int i=1;i<=6;i++)
					{
						ale=aleat()+aleat();
						dad[i]=ale;
						ale=0;
					}
					for(int j=1;j<=6;j++)
					{
						cout<<"La cara "<<j<<" salio "<<dad[j]<<" veces \n";
						cout<<"\n Histograma de cara "<<j<<" es: ";
						histograma(dad[j]); 
						cout<<"\n";
					}
				}
		}
	}while (op==1 || op==2);
}
int aleat()
{
	return rand()%99;
}
void histograma (int tam)
{
	for(int i=1;i<=tam;i++)
	{
		cout<<"*";
	}
	cout<<"\n";
}
