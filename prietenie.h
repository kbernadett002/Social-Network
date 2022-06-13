#pragma once
#include "mesaj.h"
#include "utilizator.h"
#include <iostream>
using namespace std;

class Prietenie {
private:
	int id_utilizator1;
	int id_utilizator2;
public:
	/// <summary>
	/// constructorul implicit al clasei
	/// </summary>
	Prietenie();

	/// <summary>
	/// constructorul unui prietenie
	/// </summary>
	/// <param name="id_utilizator1"></param>
	/// <param name="id_utilizator2"></param>
	Prietenie(int id_utilizator1, int id_utilizator2);

	//set-eri

	/// <summary>
	/// seteaza id-ul primului utilizator
	/// </summary>
	/// <param name="id1">id-ul primului utilizator, int</param>
	void setIdUtilizator1(int id1);

	/// <summary>
	/// seteaza id-ul utilizatorului nr 2
	/// </summary>
	/// <param name="id2"> id-ul utilizatorului nr 2, int</param>
	void setIdUtilizator2(int id2);

	//get-eri

	/// <summary>
	/// returneaza primul id
	/// </summary>
	/// <returns>primul id, int</returns>
	int getUtilizator1() const;

	/// <summary>
	/// returneaza al doilea id
	/// </summary>
	/// <returns>al doilea id,int</returns>
	int getUtilizator2() const;

	/// <summary>
	/// supraincarcarea operatorului de egalitate
	/// </summary>
	/// <param name="prieteni">un obiect de tipul prietenie</param>
	/// <returns></returns>
	bool operator==(const Prietenie& prieteni);

	/// <summary>
	/// supraincarcarea operatorului de afisare
	/// </summary>
	/// <param name="os"></param>
	/// <param name="p"></param>
	/// <returns></returns>
	friend ostream& operator<<(ostream& os, const Prietenie& p);

	//desctructor
	~Prietenie() = default;
};