#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include<time.h>
#include <math.h>
using namespace std;
using namespace System;

void generaraleatorio(int *a, int *b, int *c, int *d)
{

	srand(time(NULL));
	*a = 1 + rand() % 40;
	*b = 1 + rand() % 40;
	*c = 1 + rand() % 40;
	*d = 1 + rand() % 40;

}


int hallarmayor(int *a, int *b, int *c, int *d)

{

	int mayor;
	if (*a > *b&&*a > *c&&*a > *d)
		mayor = *a;
	if (*b > *a&&*b > *c&&*b > *d)
		mayor = *b;
	if (*c > *a&&*c > *b&&*c > *d)
		mayor = *c;
	if (*d > *a&&*d > *b&&*d > *c)
		mayor = *d;
	return mayor;

}

int hallarmenor(int *a, int *b, int *c, int *d)

{

	int menor;
	if (*a < *b&&*a < *c&&*a < *d)
		menor = *a;
	if (*b < *a&&*b < *c&&*b < *d)
		menor = *b;
	if (*c < *a&&*c < *b&&*c < *d)
		menor = *c;
	if (*d < *a&&*d < *b&&*d < *c)
		menor = *d;
	return menor;

}

int mayoranterior(int *a, int *b, int *c, int *d)
{

	int temp;
	if (*a < *b)
	{

		temp = *a;
		*a = *b;
		*b = temp;

	}
	if (*a < *c)
	{

		temp = *a;
		*a = *c;
		*c = temp;

	}
	if (*a < *d)
	{
		temp = *a;
		*a = *d;
		*d = temp;
	}

	if (*b < *c)
	{
		temp = *b;
		*b = *c;
		*c = temp;
	}

	if (*b < *d)
	{
		temp = *b;
		*b = *d;
		*d = temp;
	}

	if (*c < *d)
	{
		temp = *c;
		*c = *d;
		*d = temp;
	}
	return *b;
}


void graficar(int *a, int *b, int *c, int *d)
{

	int x = 0;
	int	y = 1;
	x = 79 - *d;
	y++;

	Console::SetCursorPosition(x, y);
	cout << *d;
	for (int i = 1; i <= *d; i++)
		cout << "*";



	x = 79 - *c;
	y++;

	Console::SetCursorPosition(x, y);
	cout << *c;
	for (int i = 1; i <= *c; i++)
		cout << "*";

	x = 79 - *b;
	y++;

	Console::SetCursorPosition(x, y);
	cout << *b;
	for (int i = 1; i <= *b; i++)
		cout << "*";

	x = 79 - *a;
	y++;

	Console::SetCursorPosition(x, y);
	cout << *a;
	for (int i = 1; i <= *a; i++)
		cout << "*";
}


int main()
{

	int *a = new int;
	int *b = new int;
	int *c = new int;
	int *d = new int;
	generaraleatorio(a, b, c, d);
	cout << *a << " " << *b << " " << " " << *c << " " << *d << " " << endl;
	cout << "el mayor es: " << hallarmayor(a, b, c, d) << endl;
	cout << "el menor es: " << hallarmenor(a, b, c, d) << endl;
	cout << "el naterior mayor es: " << mayoranterior(a, b, c, d) << endl;
	graficar(a, b, c, d);
	_getch();
}



