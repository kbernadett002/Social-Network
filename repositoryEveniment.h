#pragma once
#include "eveniment.h"
#include "TAD-1.h"

class RepositoryEveniment {
private:
	Set<Eveniment> setEveniment;
public:
	/// <summary>
	/// constuctorul implicit
	/// </summary>
	RepositoryEveniment();

	/// <summary>
	/// Returneaza toate evenimentele
	/// </summary>
	/// <returns>evenimente, lista</returns>
	Set<Eveniment> getAllEveniment();

	/// <summary>
	/// returneaza numarul de evenimente adaugate
	/// </summary>
	/// <returns>numarul de evenimente, int</returns>
	int sizeEveniment();

	/// <summary>
	/// adauga un eveniment la lista
	/// </summary>
	/// <param name="e">un obiect de tipul eveniment</param>
	void addEveniment(Eveniment& e);

	/// <summary>
	/// returneaza evenimentul de pe pozitia data
	/// </summary>
	/// <param name="poz">pozitia, int</param>
	/// <returns>un obiect de tipul eveniment</returns>
	Eveniment atEveniment(int poz);

	/// <summary>
	/// sterge un eveniment din lista de pe pozitia data
	/// </summary>
	/// <param name="poz">pozitia, int</param>
	void deleteEveniment(int poz);

	//destructorul
	~RepositoryEveniment();
};