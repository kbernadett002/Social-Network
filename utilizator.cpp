#include "utilizator.h"

int Utilizator::nr_id = 0;

Utilizator::Utilizator()
{
}

Utilizator::Utilizator(int id,string nume, int varsta) : id(id), nume(nume), varsta(varsta){id = ++nr_id;}

void Utilizator::setId(int id)
{
	this->id = id;
}

void Utilizator::setNume(string name)
{
	this->nume = nume;
}

void Utilizator::setVarsta(int varsta)
{
	this->varsta = varsta;
}

int Utilizator::getId()
{
	return this->id;
}

string Utilizator::getNume()
{
	return this->nume;
}

int Utilizator::getVarsta() 
{
	return this->varsta;
}

bool Utilizator::operator==(const Utilizator& u)
{
	return nume == u.nume && id==u.id && varsta==u.varsta;
}

ostream& operator<<(ostream& os, const Utilizator& u)
{
	os << "Id: " << u.id << " nume:  " << u.nume << "  varsta:  " << u.varsta;
	return os;
}