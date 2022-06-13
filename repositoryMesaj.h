#pragma once
#include "mesaj.h"
#include "TAD-1.h"

class RepositoryMesaj {
private:
	Set<Mesaj>setMesaj;
public:
	/// <summary>
	/// constructorul implicit al  clasei
	/// </summary>
	RepositoryMesaj();

	/// <summary>
	/// returneaza toate mesajele
	/// </summary>
	/// <returns>mesaje, lista</returns>
	Set<Mesaj> getAllMesaj();

	/// <summary>
	/// returneaza numarul de mesaje
	/// </summary>
	/// <returns>numarul de mesaje, int</returns>
	int sizeMesaj();

	/// <summary>
	/// adauga un mesaj la lista
	/// </summary>
	/// <param name="m">un obiect de tipul mesaj</param>
	void addMesaj(Mesaj& m);

	/// <summary>
	/// returneaza un mesaj de pe pozitia ceruta
	/// </summary>
	/// <param name="poz">pozitia, int</param>
	/// <returns>un obiect de tipul mesaj </returns>
	Mesaj atMesaj(int poz);

	/// <summary>
	/// sterge un mesaj din lista de pe pozitia data
	/// </summary>
	/// <param name="poz">pozitia, int</param>
	void deleteMesaj(int poz);

	//destructorul
	~RepositoryMesaj();
};