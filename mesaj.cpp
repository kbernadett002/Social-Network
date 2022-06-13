#include "mesaj.h"

Mesaj::Mesaj()
{
}

Mesaj::Mesaj(string expeditor, string receptor, string val_mesaj):expeditor(expeditor), receptor(receptor), mesaj(val_mesaj) {}

Mesaj::Mesaj(const Mesaj& mesaj)
{
	this->expeditor = mesaj.expeditor;
	this->receptor = mesaj.receptor;
	this->mesaj = mesaj.mesaj;
}

void Mesaj::setMesaj(string mesaj)
{
	this->mesaj = mesaj;
}

void Mesaj::setExpeditor(string expeditor)
{
	this->expeditor = expeditor;
}

void Mesaj::setReceptor(string receptor)
{
	this->receptor = receptor;
}

string Mesaj::getMesaj() const
{
	return mesaj;
}

string Mesaj::getExpeditor() const
{
	return expeditor;
}

string Mesaj::getReceptor() const
{
	return receptor;
}

bool Mesaj::operator==(const Mesaj& mesaj)
{
	return strcmp(this->expeditor.c_str(), mesaj.expeditor.c_str()) == 0 && strcmp(this->receptor.c_str(), mesaj.receptor.c_str()) == 0 && strcmp(this->mesaj.c_str(), mesaj.mesaj.c_str()) == 0;
}

ostream& operator<<(ostream& os, const Mesaj& m)
{
	os << "Expeditorul: " << m.expeditor << "  receptorul: " << m.receptor << "mesajul: " << m.mesaj;
	return os;
}
