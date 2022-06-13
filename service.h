#pragma once
#include "TAD-1.h"
#include "TAD-2.h"
#include "repositoryEveniment.h"
#include "repositoryMesaj.h"
#include "RepositoryPrietenie.h"
#include "repositoryRetea.h"
#include "repositoryUtilizator.h"

class Service {
private:
	RepositoryEveniment repoEveniment;
	RepositoryMesaj repoMesaj;
	RepositoryPrietenie repoPrietenie;
	RepositoryRetea repoRetea;
	RepositoryUtilizator repoUtilizator;
public:
	Service();
	Service(RepositoryEveniment& repoEveniment,
	RepositoryMesaj& repoMesaj,
	RepositoryPrietenie& repoPrietenie,
	RepositoryRetea& repoRetea,
	RepositoryUtilizator& repoUtilizator);

	void addMesaj(Mesaj& m);
	void updateMesaj(Mesaj& m);
	void deleteMesaj(int poz);
	int numberofMesaje();
	Mesaj* mesajeGetAll();

	void addEveniment(Eveniment& e);
	void updateEveniment(Eveniment& e);
	void deleteEveniment(int poz);
	int numberofEvenimente();
	Eveniment* evenimenteGetAll();

	void addPrietenie(Prietenie& p);
	void updatePrietenie(int poz,Prietenie& p);
	void deletePrietenie(int poz);
	int numberofPrietenie();
	Prietenie* prietenieGetAll();

	void addRetea(const Retea& r);
	void updateRetea(int poz, const Retea& r);
	void deleteRetea(int poz);
	int numberofRetea();
	Retea* reteaGetAll();

	void addUtilizator(Utilizator& u);
	void updateUtilizator(Utilizator& u);
	void deleteUtilizator(int poz);
	int numberofUtilizatori();
	Utilizator* utilizatorGetAll();

	~Service();
};