#pragma once
#include <string>
#include <iostream>
using namespace std;

class Mesaj {
private:
	string mesaj;
	string expeditor;
	string receptor;
public:

	/// <summary>
	/// constructorul implicit
	/// </summary>
	Mesaj();
	/// <summary>
	/// constructorul clasei "Mesaj"
	/// </summary>
	/// <param name="expeditor">expeditorul mesajului</param>
	/// <param name="receptor">receptorul mesajului</param>
	Mesaj(string expeditor, string receptor, string val_mesaj);
	Mesaj(const Mesaj& mesaj);
	//set-eri

	/// <summary>
	/// seteaza mesajul
	/// </summary>
	/// <param name="mesaj">mesajul care trebuie salvat</param>
	void setMesaj(string mesaj);

	/// <summary>
	/// seteaza numele expeditorului
	/// </summary>
	/// <param name="expeditor">numele expeditorului</param>
	void setExpeditor(string expeditor);

	/// <summary>
	/// seteaza numele receptorului
	/// </summary>
	/// <param name="receptor">numele receptorului</param>
	void setReceptor(string receptor);

	//get-eri

	/// <summary>
	/// returneaza mesajul
	/// </summary>
	/// <returns>un string</returns
	string getMesaj() const;

	/// <summary>
	/// returneaza numele expeditorului
	/// </summary>
	/// <returns>un string</returns>
	string getExpeditor() const;

	/// <summary>
	/// returneaza numele receptorului
	/// </summary>
	/// <returns>un string</returns>
	string getReceptor() const;

	/// <summary>
	/// supraincarcarea operatorului de egalitate
	/// </summary>
	/// <param name="mesaj">un obiect de tipul mesaj</param>
	/// <returns></returns>
	bool operator==(const Mesaj& mesaj);

	/// <summary>
	/// supraincarcarea operatorului de afisare
	/// </summary>
	/// <param name="os"></param>
	/// <param name="m"></param>
	/// <returns></returns>
	friend ostream& operator<<(ostream& os, const Mesaj& m);
	
	//destructorul
	~Mesaj() = default;
};