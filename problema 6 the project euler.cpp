// problema 6 the project euler
#include <iostream>
using namespace std;
int sumaCuadrado(int n);
int cuadradoSuma(int n);
int main()
{
	int n, x1, x2;
	cout<<"Seleccione la cantidad de cifras a considerar: "; cin>>n;
	x1=sumaCuadrado(n);
	x2=cuadradoSuma(n);
	cout<<"The sum of the squares of the first ten natural numbers is: "<<x1<<endl;
	cout<<"The square of the sum of the first ten natural numbers is: "<<x2<<endl;
	cout<<"LA DIFERENCIA ES: "<<x2-x1;
	return 0;
}
int sumaCuadrado(int n)
{
	int suma=0;
	for(int i=1; i<=n; i++)
	{
		suma=suma+i*i;
	}
	return suma;
}
int cuadradoSuma(int n)
{
	int suma=0;
	for(int i=1; i<=n; i++)
	{
		suma=suma+i;
	}
	return suma*suma;
}
