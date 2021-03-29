//Triad.cpp
#include "Triad.h"

void Triad::SetFirst(double first) { this->first = first; }
void Triad::SetSecond(double second) { this->second = second; }


double Triad::GetFirst() const { return first; }
double Triad::GetSecond() const { return second; }


Triad::Triad() { SetFirst(0); SetSecond(0); }
Triad::Triad(double first = 0, double second = 0)
{
	SetFirst(first); SetSecond(second); 
}
Triad::Triad(Triad& A)
{
	SetFirst(A.GetFirst());
	SetSecond(A.GetSecond());
}

bool operator > (Triad& A, Triad& B)
{
	return ((A.GetFirst() > B.GetFirst()) || (A.GetFirst() == B.GetFirst() && A.GetSecond() > B.GetSecond()));
}
bool operator < (Triad& A, Triad& B)
{
	return ((A.GetFirst() < B.GetFirst()) || (A.GetFirst() == B.GetFirst() && A.GetSecond() < B.GetSecond()));
}
bool operator == (Triad& A, Triad& B)
{
	return (A.GetFirst() == B.GetFirst() && A.GetSecond() == B.GetSecond());
}

Triad::operator string() const
{
	stringstream ss;
	ss << " Старша частина: " << first << endl;
	ss << " Mолодша частина: " << second << endl;
	return ss.str();
}
ostream& operator << (ostream& out, const Triad& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, Triad& A)
{
	double first, second, third;
	cout << " Cтаршу частину = "; in >> first;
	cout << " Mолодшу частину  = "; in >> second;
	A.SetFirst(first); A.SetSecond(second);
	return in;
}