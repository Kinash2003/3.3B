//Triad.h
#pragma once
#include <iostream>
#include <sstream>

using namespace std;

class Triad
{
private:
	double first, second;
public:
	void SetFirst(double);
	void SetSecond(double);
	

	double GetFirst() const;
	double GetSecond() const;
	

	Triad();
	Triad(double, double);
	Triad(Triad&);

	friend bool operator > (Triad&, Triad&);
	friend bool operator < (Triad&, Triad&);
	friend bool operator == (Triad&, Triad&);

	operator string() const;
	friend ostream& operator << (ostream&, const Triad&);
	friend istream& operator >> (istream&, Triad&);
};
