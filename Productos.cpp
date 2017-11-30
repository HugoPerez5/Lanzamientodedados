#include <iostream>
using namespace std;

void menu();
void mostrar(int m[5][6],int tam);
void llenar(int m[5][6],int prov, int prod,int &cant);
void sumCol(int m[5][6],int &cant,int prov);

int main ()
{
	menu();
}
void menu()
{
	int m[5][6]={{0}},tam=5,prov,prod,cant;
	char op;
	cout<<"VENDEDORES Y PRODUCTOS\n\n";
	do
	{
		cout<<"HAY DATOS PARA AGREGAR? (responda s o n)\n";
		cin>>op;	
		switch (op)
		{
			case 's':
				{
					cout<<"Que proveedor es?\n";
					cin>>prov;
					cout<<"Que producto?\n";
					cin>>prod;
					cout<<"Cuantos productos?\n";
					cin>>cant;
					llenar(m,prov,prod,cant);
					sumCol(m,cant,prov);
				}
			break;
			case 'n':
				{
					mostrar(m,tam);
				}
			break;
		}
	}while(op!='n');
}
void mostrar(int m[][6],int tam)
{
	for(int r=0;r<5;r++)
	{
		for(int c=0;c<6;c++)
		{
			cout<<m[r][c]<<" ";
		}
		cout<<"\n";
	}
}
void llenar(int m[][6],int prov,int prod,int &cant)
{
	m[prov-1][prod-1]=cant;
}
void sumCol(int m[][6],int &cant,int prov)
{
	int sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,con=prov-1;
	for(int i=prov-1;i<5;i++)
	{
		sum1+=m[con][i];
	}
	sum1=m[0][4];
}

