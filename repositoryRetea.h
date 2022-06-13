#pragma once
#include "TAD-2.h"
#include "TAD-1.h"
#include "prietenie.h"
#include "utilizator.h"

class RepositoryRetea {
private:
	Multimap<Prietenie, Utilizator>multimapRetea;
public:
	RepositoryRetea();
	//RepositoryRetea* getAllRetea();
	//int sizeRetea();
	void addRetea(Prietenie& p,Utilizator& u);
	//Retea atRetea(int poz);
	void deleteRetea(Prietenie& p);

	~RepositoryRetea();
};