#pragma once
#include "utilizator.h"
#include "TAD-1.h"

class RepositoryUtilizator {
private:
	Set<Utilizator> setUtilizator;
public:
	/// <summary>
	/// constructorul implicit al  clasei
	/// </summary>
	RepositoryUtilizator();

	/// <summary>
	/// returneaza toate utilizator
	/// </summary>
	/// <returns>utilizator, lista</returns>
	Set<Utilizator> getAllUtilizator();

	/// <summary>
	/// adauga un utilizator in lista
	/// </summary>
	/// <param name="u"> un obiect de tipul utilizator</param>
	void addUtilizator(Utilizator& u);

	/// <summary>
	/// returneaza numarul de utilizatori
	/// </summary>
	/// <returns>numarul de utilizatori, int</returns>
	int sizeEveniment();

	/// <summary>
	///  returneaza un utilizator de pe pozitia ceruta
	/// </summary>
	/// <param name="poz">pozitia, int</param>
	/// <returns> un obiect de tipul utilizator</returns>
	Utilizator atUtilizator(int poz);

	/// <summary>
	/// sterge un utilizator din lista de pe pozitia data
	/// </summary>
	/// <param name="poz">pozitia, int</param>
	void deleteUtilizator(int poz);

	//destructorul
	~RepositoryUtilizator();
}; 

