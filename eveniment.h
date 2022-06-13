#pragma once
#include "utilizator.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Eveniment {
private:
	string nume;
	string descriere;
	vector <Utilizator> participanti;
public:
	/// <summary>
	/// constructorul implicit al  clasei
	/// </summary>
	Eveniment();

	/// <summary>
	/// constructorul unui eveniment
	/// </summary>
	/// <param name="nume">numele evenimentului</param>
	/// <param name="descriere">descrierea evenimentului</param>
	/// <param name="nr_participanti">numarul de participanti la eveniment</param>
	Eveniment(string nume, string descriere, int nr_participanti);

	//set-eri


	/// <summary>
	/// seteaza numele evenimentului
	/// </summary>
	/// <param name="nume">numele evenimentului, string</param>
	void setNume(string nume);

	/// <summary>
	/// seteaza descrierea evenimentului
	/// </summary>
	/// <param name="descriere">descrierea evenimentului, string</param>
	void setDescriere(string descriere);

	//get-eri

	/// <summary>
	/// returneaza numele evenimentului
	/// </summary>
	/// <returns>nume, string</returns>
	string getNume()const;

	/// <summary>
	/// returneaza descrierea evenimentului
	/// </summary>
	/// <returns>descriere, string</returns>
	string getDescriere()const;

	/// <summary>
	/// returneaz numarul de participanti la eveniment
	/// </summary>
	/// <returns>numarul de participanti, int</returns>
	int getNrParticipanti() const;
	

	/// <summary>
	/// adaugarea participantilor la eveniment
	/// </summary>
	/// <param name="u">utilizatorul de adaugat</param>
	void addParticipanti(Utilizator& u);

	/// <summary>
	/// supraincarcarea operatorului de atribuire
	/// </summary>
	/// <param name="eveniment">un obiect de tipul Eveniment</param>
	/// <returns></returns>
	Eveniment& operator=(const Eveniment& eveniment);

	/// <summary>
	/// supraincarcarea operatorului de egalitate
	/// </summary>
	/// <param name="eveniment">un obiect de tipul eveniment</param>
	/// <returns></returns>
	bool operator==(const Eveniment& eveniment);

	/// <summary>
	/// supraincarcarea operatorului de afisare
	/// </summary>
	/// <param name="os"></param>
	/// <param name="e"></param>
	/// <returns></returns>
	friend ostream& operator<<(ostream& os, const Eveniment& e);
	
	//destructorul
	~Eveniment();
};