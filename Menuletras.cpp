#include <iostream>
using namespace std;

int contar(char m[]);
void titulo(char m[]);
int palindromo(char m[]);

int main()
{
	int pal;
	char frase[50];
	cout<<"Ingresa la frase: ";
	cin.getline(frase,40);	
	cout<<"La frase tiene: "<<contar(frase)<<" palabras"<<endl;
	cout<<"Titulo: "; titulo(frase);
	cout<<endl;
	pal=palindromo(frase);
	if(pal==1)
	{
		cout<<"Es palindromo"<<endl;
	}
	else 
	{
		cout<<"No es palindromo"<<endl;
	}
}
int contar(char m[])
{
	int cont=0;
	for(int i=0;i<m[i];i++)
	{
		if(m[i] ==' ')
		{
			cont++;
		}
	}
	return cont+1;
}
void titulo(char m[])
{
	int cont=0;
	m[0]= toupper(m[0]);	
	for(int i=0;i<m[i];i++)
	{
		if(m[i]==' ')
		m[i+1]= toupper(m[i+1]);
	}
	for(;m[cont];cont++);
	for(int i=0;i<cont;i++)
	{
		cout<<m[i];
	}
}
int palindromo(char m[])
{
	int tam;
	for(int i=0;i<tam/2;i++)
	{
		if(m[i]=m[tam-i-1])
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
