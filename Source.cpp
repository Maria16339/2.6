#include "Rectangle.h"
#include <iostream>
#include <Windows.h>
#include <iomanip>

using namespace std;

int main()
{
	class Rectangle N(3, 4);

	double A = 0.0;
	double B = 0.0;

	cout <<"a=3; b=4" << endl;
	double S = N.Square();
	cout << "Square = " << S << endl;
	
	double P = N.Perimeter();
	cout << "Perimeter = " << P << endl;


	Rectangle::Pair K(34, 1.8);
	cout << "a=34; b=1.8" << endl;
	cout << "Dobutok = " << K.Dobutok() << endl << endl;

	

	cout << "++K: " << ++K << endl;
	cout << "--K: " << --K << endl;
	cout << "K++: " << K++ << endl;
	cout << "K--: " << K-- << endl << endl;
}
	

