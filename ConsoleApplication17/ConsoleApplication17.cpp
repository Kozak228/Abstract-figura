#include "pch.h"
#include <iostream>
#include <string.h>
#include <string>
#pragma warning (disable:4996)
using namespace std;
class Figura
{
public:
	int Pi = 3.14;

	Figura()
	{

	}
	virtual void Sqrt() = 0;
};
class Circle : public Figura
{
	double S;
	double r;

public:

	Circle(double rr) : Figura() { r = rr; };
	virtual void Sqrt()
	{
		S = Pi * (r*r);
		cout << "\t Area " << S << endl;
	}
};
class Pryamougol : public Figura
{
	double S;
	double A;
	double B;
public:
	Pryamougol(double a, double b) : Figura() { A = a; B = b; };

	virtual void Sqrt()
	{
		S = A * B;
		cout << "\t Pryamougol " << S << endl;
	}
};
class Trapecid : public Figura
{
	double S;
	double a;
	double b;
	double h;
public:
	Trapecid(double A, double B, double H) : Figura() { a = A; b = B; h = H; };
	virtual void Sqrt()
	{
		S = (a + b / 2) * h;
		cout << "\t Trapecid " << S << endl;
	}
};
class Pryamougol_treu : public Figura
{
	double S;
	double A;
	double B;
public:
	Pryamougol_treu(double a, double b) : Figura() { A = a; B = b; };

	virtual void Sqrt()
	{
		S = (A * B)/2;
		cout << "\t Pryamougol_treu " << S << endl;
	}
};

void main()
{

	Figura *figura[4] =
	{
	new Circle(4),
	new Pryamougol(2,10),
	new Trapecid(2,7,6),
	new Pryamougol_treu(2,5),
	};


	for (int i = 0; i < 4; i++)
	{
		figura[i]->Sqrt();
	}
	system("pause");
}
