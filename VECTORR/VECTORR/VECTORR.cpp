#include <string>
#include <iostream>

using namespace std;
int main()
{
	float vector1[3];
	float vector2[3];
	float vectorSuma[3];
	int i;
	//Pedimos los datos del primer vector
	for (i = 0; i < 3; i++)
	{
		cout << "Introudce el valor " << i
			<< "del primer vector:";
		cin >> vector1[i];
	}
	//Pedimos los datos del segundo vector
	for (i = 0; i < 3; i++)
	{
		cout << "Introudce el valor " << i
			<< "del segundo vector:";
		cin >> vector2[i];
	}
	//Calculamos la suma
	for (i = 0; i < 3; i++)
	{
		vectorSuma[i] = vector1[i] + vector2[i];
	}
	//Mostramos el resultado
	cout << "El vector suma es: ";
	for (i = 0; i < 3; i++)
	{
		cout << vectorSuma[i] << "  ";
	}
}