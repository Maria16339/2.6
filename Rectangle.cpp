#include "Rectangle.h"
#include <iostream>
#include <math.h>

using namespace std;
void Rectangle::Pair::SetA(double value)
{
	a = value;
}

void Rectangle::Pair::SetB(double value)
{
	b = value;
}

int Rectangle::Pair::counter = 0;

Rectangle::Pair::Pair()
	: a(0), b(0)
{
	Rectangle::Pair::counter++;
}

Rectangle::Pair::Pair(const double A, const double B)
	: a(A), b(B)
{
	Rectangle::Pair::counter++;
}

Rectangle::Pair::Pair(const Pair& v)
	: a(v.a), b(v.b)
{
	Rectangle::Pair::counter++;
}

Rectangle::Pair::~Pair(void)
{
	Rectangle::Pair::counter--;
}

Rectangle::Pair & Rectangle::Pair::operator = (const Pair& n)
{
	a = n.a;
	b = n.b;
	return *this;
}
Rectangle::Pair::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << "a = " << a << endl;
	ss << "b = " << b << endl;
	return ss.str();
}

ostream& operator <<(ostream& out, const Rectangle::Pair& s)
{
	return out << string(s);
}

istream& operator >>(istream& in, Rectangle::Pair& s)
{
	double a, b;
	cout << endl;
	cout << "a = "; in >> a;
	cout << "b = "; in >> b;
	s.SetA(a);
	s.SetB(b);

	return in;
}

Rectangle::Pair& Rectangle::Pair::operator --()
{
	--a;
	return *this;
}

Rectangle::Pair& Rectangle::Pair::operator ++()
{
	++a;
	return *this;
}

Rectangle::Pair Rectangle::Pair::operator --(int)
{
	Pair a(*this);
	b--;
	return a;
}

Rectangle::Pair Rectangle::Pair::operator ++(int)
{
	Pair a(*this);
	b++;
	return a;
}
double Rectangle::Pair::Dobutok()
{
	return a*b ;
}

int Rectangle::Pair::getCounter()
{
	return Rectangle::Pair::counter;
}

int Rectangle::counter = 0;

void Rectangle::SetA(double value)
{
	if (value > 0)
		pair.SetA(value);
	else
		pair.SetA(0);
}

void Rectangle::SetB(double value)
{
	if (value > 0)
		pair.SetB(value);
	else
		pair.SetB(0);
}


Rectangle::Rectangle(const double A, const double B)
{
	if (A  > 0 && B >0)
	{
		SetA(A);
		SetB(B);
		
	}
	else
	{
		SetA(0);
		SetB(0);
		
	}
	Rectangle::counter++;
}

Rectangle::Rectangle(const Rectangle& v)
{
	pair = v.pair;
	Rectangle::counter++;
}

Rectangle::~Rectangle(void)
{
	Rectangle::counter--;
}

Rectangle& Rectangle::operator = (const Rectangle& n)
{
	pair = n.pair;
	return *this;
}

Rectangle::operator string () const
{
	stringstream ss;
	ss << "pair: " << pair << endl;
	return ss.str();
}

ostream& operator <<(ostream& out, const Rectangle& s)
{
	out << string(s);
	return out;
}

istream& operator >>(istream& in, Rectangle& s)
{
	cout << endl;
	cout << "pair: " << endl;
	in >> s.pair;
	return in;
}

Rectangle& Rectangle::operator ++()
{
	++pair;
	return *this;
}

Rectangle& Rectangle::operator --()
{
	--pair;
	return *this;
}

Rectangle Rectangle::operator ++(int)
{
	Rectangle s(*this);
	pair++;
	return s;
}

Rectangle Rectangle::operator --(int)
{
	Rectangle s(*this);
	pair--;
	return s;
}


double Rectangle::Square() const
{
	double a = pair.GetA();
	double b = pair.GetB();
	double S = a * b;
	return S;
}
double Rectangle::Perimeter() const
{
	double a = pair.GetA();
	double b = pair.GetB();
	double P = a * 2 + b * 2;
	return P;
}


int Rectangle::getCounter()
{
	return Rectangle::counter;
}