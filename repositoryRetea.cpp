#include "repositoryRetea.h"

RepositoryRetea::RepositoryRetea()
{
}

/*RepositoryRetea* RepositoryRetea::getAllRetea()
{
}

int RepositoryRetea::sizeRetea()
{
	return ;
}*/

void RepositoryRetea::addRetea(Prietenie& p, Utilizator& u)
{
	this->multimapRetea.put(p, u);
}
/*
Retea RepositoryRetea::atRetea(int poz)
{
	return el_retea[poz];
}

*/
void RepositoryRetea::deleteRetea(Prietenie& p)
{
	this->multimapRetea.remove(p);
}

RepositoryRetea::~RepositoryRetea()
{
}
