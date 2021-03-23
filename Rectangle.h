#pragma once

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Rectangle

{
public:
	class Pair
	{
	private:
		double a;
		double b;
		static int counter;

	public:
		double GetA() const { return a; }
		double GetB() const { return b; }


		void SetA(double value);
		void SetB(double value);


		Pair();
		Pair(const double a, const double b);
		Pair(const Pair& s);
		~Pair(void);

		Pair& operator = (const Pair& s);
		operator string () const;

		friend ostream& operator << (ostream& out, const Pair& s);
		friend istream& operator >> (istream& in, Pair& s);

		Pair& operator ++ ();
		Pair& operator -- ();
		Pair operator ++ (int);
		Pair operator -- (int);

		double Dobutok();
		static int getCounter();
	};

	double GetA() const { return pair.GetA(); }
	double GetB() const { return pair.GetB(); }


	void SetA(double value);
	void SetB(double value);



	Rectangle(const double a, const double b);
	Rectangle(const Rectangle& s);
	~Rectangle(void);

	Rectangle& operator = (const Rectangle& s);
	operator string () const;

	friend ostream& operator << (ostream& out, const Rectangle& s);
	friend istream& operator >> (istream& in, Rectangle& s);

	Rectangle& operator ++ ();
	Rectangle& operator -- ();
	Rectangle operator ++ (int);
	Rectangle operator -- (int);

	double Square() const;
	double Perimeter() const;
	static int getCounter();

private:
	Pair pair;
	static int counter;
};


