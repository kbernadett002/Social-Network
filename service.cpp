#include "service.h"

Service::Service()
{
}

Service::Service(RepositoryEveniment& repoEveniment, RepositoryMesaj& repoMesaj, RepositoryPrietenie& repoPrietenie, RepositoryRetea& repoRetea, RepositoryUtilizator& repoUtilizator)
{
	this->repoEveniment = repoEveniment;
	this->repoMesaj = repoMesaj;
	this->repoPrietenie = repoPrietenie;
	this->repoRetea = repoRetea;
	this->repoUtilizator = repoUtilizator;
}

void Service::addMesaj(Mesaj& m)
{
	this->repoMesaj.addMesaj(m);
}

void Service::updateMesaj(Mesaj& m)
{
	this->repoMesaj.updateMesaj(m);
}

void Service::deleteMesaj(int poz)
{
	this->repoMesaj.deleteMesaj(poz);
}

int Service::numberofMesaje()
{
	return this->repoMesaj.sizeMesaj();
}

Mesaj* Service::mesajeGetAll()
{
	return this->repoMesaj.getAllMesaj();
}

void Service::addEveniment(Eveniment& e)
{
	this->repoEveniment.addEveniment(e);
}

void Service::updateEveniment(Eveniment& e)
{
	this->repoEveniment.updateEveniment(e);
}

void Service::deleteEveniment(int poz)
{
	this->repoEveniment.deleteEveniment(poz);
}

int Service::numberofEvenimente()
{
	return this->repoEveniment.sizeEveniment();
}

Eveniment* Service::evenimenteGetAll()
{
	return this->repoEveniment.getAllEveniment();
}

void Service::addPrietenie(Prietenie& p)
{
	this->repoPrietenie.addPrieteni(p);
}

void Service::updatePrietenie(int poz,Prietenie& p)
{
	this->repoPrietenie.updatePrieteni(poz, p);
}

void Service::deletePrietenie(int poz)
{
	this->repoPrietenie.deletePrieteni(poz);
}

int Service::numberofPrietenie()
{
	return this->repoMesaj.sizeMesaj();
}

Prietenie* Service::prietenieGetAll()
{
	return this->repoPrietenie.getAllPrieteni();
}

void Service::addRetea(const Retea& r)
{
	this->repoRetea.addRetea(r);
}

void Service::updateRetea(int poz, const Retea& r)
{
	this->repoRetea.updateRetea(poz, r);
}

void Service::deleteRetea(int poz)
{
	this->repoRetea.deleteRetea(poz);
}

int Service::numberofRetea()
{
	return this->repoRetea.sizeRetea();
}

Retea* Service::reteaGetAll()
{
	return this->repoRetea.getAllRetea();
}

void Service::addUtilizator(Utilizator& u)
{
	this->repoUtilizator.addUtilizator(u);
}

void Service::updateUtilizator(Utilizator& u)
{
	this->repoUtilizator.updateUtilizator(u);
}

void Service::deleteUtilizator(int poz)
{
	this->repoUtilizator.deleteUtilizator(poz);
}

int Service::numberofUtilizatori()
{
	return this->repoUtilizator.sizeUtilizator();
}

Utilizator* Service::utilizatorGetAll()
{
	return this->repoUtilizator.getAllUtilizator();
}

Service::~Service()
{
}
