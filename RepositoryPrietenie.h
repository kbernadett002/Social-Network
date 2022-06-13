#pragma once
#include "prietenie.h"
#include "TAD-1.h"

class RepositoryPrietenie {
private:
	Set <Prietenie> setPrieteni;
public:
	/// <summary>
	/// constructorul implicit al  clasei
	/// </summary>
	RepositoryPrietenie();

	/// <summary>
	/// returneaza toate prieteniile
	/// </summary>
	/// <returns>prietenii, lista</returns>
	Set<Prietenie> getAllPrieteni();

	/// <summary>
	/// returneaza numarul de prietenii
	/// </summary>
	/// <returns>numarul de prietenii, int</returns>
	int sizePrieteni();

	/// <summary>
	/// adauga o prietenie la lista
	/// </summary>
	/// <param name="p">un obiect de tipul prietenie</param>
	void addPrieteni(Prietenie &p);

	/// <summary>
	/// returneaza o prietenie de pe pozitia ceruta
	/// </summary>
	/// <param name="poz">pozitia, int</param>
	/// <returns>un obiect de tipul prietenie</returns>
	Prietenie atPrieteni(int poz);

	/// <summary>
	/// sterge o prietenie din lista de pe o pozitia data
	/// </summary>
	/// <param name="poz">pozitia, int</param>
	void deletePrieteni(int poz);


	//destructorul
	~RepositoryPrietenie();
};