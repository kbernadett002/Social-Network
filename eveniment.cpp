#include "eveniment.h"

Eveniment::Eveniment()
{
}

Eveniment::Eveniment( string nume, string descriere, int nr_participanti) : nume(nume), descriere(descriere) { nr_participanti = 0; }

void Eveniment::setNume(string nume)
{
	this->nume = nume;
}

void Eveniment::setDescriere(string descriere)
{
	this->descriere = descriere;
}

string Eveniment::getNume() const
{
	return nume;
}

string Eveniment::getDescriere() const
{
	return descriere;
}

int Eveniment::getNrParticipanti() const
{
	return participanti.size();
}

void Eveniment::addParticipanti(Utilizator& u)
{
	participanti.push_back(u);
}

Eveniment& Eveniment::operator=(const Eveniment& eveniment)
{
	if (this != &eveniment)
	{
		this->setNume(eveniment.nume);
		this->setDescriere(eveniment.descriere);
	}
	return *this;
}

bool Eveniment::operator==(const Eveniment& eveniment)
{
	return strcmp(this->nume.c_str(), eveniment.nume.c_str()) == 0 && strcmp(this->descriere.c_str(), eveniment.descriere.c_str()) == 0;
}

Eveniment::~Eveniment()
{
}

ostream& operator<<(ostream& os, const Eveniment& e)
{
	os << "Numele: " << e.nume<< " cu descrierea: " << e.descriere;
	return os;
}
