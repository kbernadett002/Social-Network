#include "repositoryUtilizator.h"

RepositoryUtilizator::RepositoryUtilizator()
{
}


Set<Utilizator> RepositoryUtilizator::getAllUtilizator()
{
	return this->setUtilizator;
}

void RepositoryUtilizator::addUtilizator(Utilizator& u)
{
	this->setUtilizator.addNode(u);
}

int RepositoryUtilizator::sizeEveniment()
{
	return this->setUtilizator.size();
}

Utilizator RepositoryUtilizator::atUtilizator(int poz)
{
	return this->setUtilizator.getPozNode(poz);
}


void RepositoryUtilizator::deleteUtilizator(int poz)
{
	this->setUtilizator.deleteNode(this->setUtilizator.getPozNode(poz-1));
}

RepositoryUtilizator::~RepositoryUtilizator()
{
}
