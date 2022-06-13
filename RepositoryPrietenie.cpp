#include "RepositoryPrietenie.h"

RepositoryPrietenie::RepositoryPrietenie()
{
}


Set<Prietenie> RepositoryPrietenie::getAllPrieteni()
{
	return this->setPrieteni;
}

int RepositoryPrietenie::sizePrieteni()
{
	return this->setPrieteni.size();
}

void RepositoryPrietenie::addPrieteni(Prietenie& p)
{
	this->setPrieteni.addNode(p);
}
Prietenie RepositoryPrietenie::atPrieteni(int poz)
{
	return this->setPrieteni.getPozNode(poz);
}


void RepositoryPrietenie::deletePrieteni(int poz)
{
	this->setPrieteni.deleteNode(this->setPrieteni.getPozNode(poz-1));
}

RepositoryPrietenie::~RepositoryPrietenie()
{
}
