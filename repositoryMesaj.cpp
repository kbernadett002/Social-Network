#include "repositoryMesaj.h"

RepositoryMesaj::RepositoryMesaj()
{
}
Set<Mesaj> RepositoryMesaj::getAllMesaj()
{
	return this->setMesaj;
}

int RepositoryMesaj::sizeMesaj()
{
	return this->setMesaj.size();
}

void RepositoryMesaj::addMesaj(Mesaj& m)
{
	this->setMesaj.addNode(m);
}
Mesaj RepositoryMesaj::atMesaj(int poz)
{
	return this->setMesaj.getPozNode(poz);
}

void RepositoryMesaj::deleteMesaj(int poz)
{
	this->setMesaj.deleteNode(this->setMesaj.getPozNode(poz-1));
}

RepositoryMesaj::~RepositoryMesaj()
{
}
