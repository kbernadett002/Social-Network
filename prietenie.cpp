#include "prietenie.h"

Prietenie::Prietenie()
{
}

Prietenie::Prietenie(int id_utilizator1, int id_utilizator2):id_utilizator1(id_utilizator1), id_utilizator2(id_utilizator2){}

void Prietenie::setIdUtilizator1(int id1)
{
	this->id_utilizator1 = id1;
}

void Prietenie::setIdUtilizator2(int id2)
{
	this->id_utilizator2 = id2;
}

int Prietenie::getUtilizator1() const
{
	return this->id_utilizator1;
}

int Prietenie::getUtilizator2() const
{
	return this->id_utilizator2;
}

bool Prietenie::operator==(const Prietenie& prieteni)
{
	return this->id_utilizator1 == prieteni.id_utilizator1 && this->id_utilizator2 == prieteni.id_utilizator2;
}

ostream& operator<<(ostream& os, const Prietenie& p)
{
	os << "Utilizatorii cu id-ul: " << p.id_utilizator1 << "  si  " << p.id_utilizator2 << "  sunt prieteni.";
	return os;
}
