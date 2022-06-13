#include "repositoryEveniment.h"

RepositoryEveniment::RepositoryEveniment()
{
}

Set<Eveniment> RepositoryEveniment::getAllEveniment()
{
	return this->setEveniment;
}


int RepositoryEveniment::sizeEveniment()
{
	return this->setEveniment.size();
}

void RepositoryEveniment::addEveniment(Eveniment& e)
{
	this->setEveniment.addNode(e);
}
Eveniment RepositoryEveniment::atEveniment(int poz)
{
	return this->setEveniment.getPozNode(poz);
}

void RepositoryEveniment::deleteEveniment(int poz)
{
	this->setEveniment.deleteNode(this->setEveniment.getPozNode(poz-1));
}

RepositoryEveniment::~RepositoryEveniment()
{
}
