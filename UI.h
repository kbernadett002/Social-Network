#pragma once
#include "repositoryEveniment.h"
#include "repositoryMesaj.h"
#include "RepositoryPrietenie.h"
#include "repositoryRetea.h"
#include "repositoryUtilizator.h"

class UI {
private:
	RepositoryPrietenie repoPrietenie;
	RepositoryRetea repoRetea;
	RepositoryUtilizator repoUtilizator;
	RepositoryEveniment repoEveniment;
	RepositoryMesaj repoMesaj;
public:
	UI();
	~UI();
	void runMenu();
private:
	void displayMenu();
	void displayMenuEvenimente();
	void displayMenuMesaj();
	void displayMenuPrieteni();
	void displayMenuUtilizator();
	void displayMenuRetea();

	void meniuEveniment();
	void uiAddEveniment();
	void uiDeleteEveniment();

	void meniuMesaj();
	void uiAddMesaj();
	void uiDeleteMesaj();

	void meniuPrieteni();
	void uiAddPrieteni();
	void uiDeletePrieteni();

	/*void uiAddRetea();
	void uiDeleteRetea();
	void uiUpdateRetea();*/

	void meniuUtilizator();
	void uiAddUtilizator();
	void uiDeleteUtilizator();

	void uigetAllEveniment();
	void uiGetAllMesaj();
	void uiGetAllPrieteni();
	void uiGetAllUtilizator();

};