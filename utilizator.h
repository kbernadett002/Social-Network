#pragma once
#include "mesaj.h"
#include "prietenie.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Utilizator {
private:
	static int nr_id;
	int id;
	string nume;
	int varsta;
public:
	/// <summary>
	/// constructorul implicit al clasei
	/// </summary>
	Utilizator();

	/// <summary>
	/// constructorul pentru utilizator
	/// </summary>
	/// <param name="nume">numele utilizatorului</param>
	/// <param name="varsta">varsta utilizatorului</param>
	Utilizator(int id,string nume, int varsta);

	//set-eri

	void setId(int id);

	/// <summary>
	/// seteaza numele utilizatorului
	/// </summary>
	/// <param name="name">nume, tip string</param>
	void setNume(string name);

	/// <summary>
	/// seteaza varsta utilizatorului
	/// </summary>
	/// <param name="varsta">varsta, tip int</param>
	void setVarsta(int varsta);

	//get-eri

	/// <summary>
	/// returneaza id-ul unui utilizator
	/// </summary>
	/// <returns>id, tip int</returns>
	int getId();

	/// <summary>
	/// returneaza numele utlizatorului
	/// </summary>
	/// <returns>numele, tip string</returns>
	string getNume();

	/// <summary>
	/// returneaza varsta utilizatorului
	/// </summary>
	/// <returns>varsta, tip int</returns>
	int getVarsta();

	/// <summary>
	/// supraincarcarea operatorului de egalitate
	/// </summary>
	/// <param name="u"></param>
	/// <returns>un obiect de tipul utilizator</returns>
	bool operator==(const Utilizator& u);

	/// <summary>
	/// supraincarcarea operatorului de afisare
	/// </summary>
	/// <param name="os"></param>
	/// <param name="u"></param>
	/// <returns></returns>
	friend ostream& operator<<(ostream& os, const Utilizator& u);

	//destructorul
	~Utilizator() = default;

};