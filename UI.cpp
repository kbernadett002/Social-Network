#include "UI.h"
#include <iostream>
using namespace std;

UI::UI()
{
	Utilizator u1(1, "Bernadett", 19);
	Utilizator u2(2, "Vivien", 19);
	Utilizator u3(3, "Andreea", 35);
	Utilizator u4(4, "Eduard", 13);
	Utilizator u5(5, "Nelli", 41);
	Utilizator u6(6, "Adalbert", 47);
	Utilizator u7(7, "Nicu", 3);
	Utilizator u8(8, "Madalina", 19);
	Utilizator u9(9, "Anca", 19);
	Utilizator u10(10, "Sergiu", 35);
	Utilizator u11(11, "Monica", 13);
	Utilizator u12(12, "Mircea", 41);
	Utilizator u13(13, "Adi", 47);
	Utilizator u14(14, "Mihai", 3);
	Utilizator u15(15, "Iancu", 3);
	this->repoUtilizator.addUtilizator(u1);
	this->repoUtilizator.addUtilizator(u2);
	this->repoUtilizator.addUtilizator(u3);
	this->repoUtilizator.addUtilizator(u4);
	this->repoUtilizator.addUtilizator(u5);
	this->repoUtilizator.addUtilizator(u6);
	this->repoUtilizator.addUtilizator(u7);
	this->repoUtilizator.addUtilizator(u8);
	this->repoUtilizator.addUtilizator(u9);
	this->repoUtilizator.addUtilizator(u10);
	this->repoUtilizator.addUtilizator(u11);
	this->repoUtilizator.addUtilizator(u12);
	this->repoUtilizator.addUtilizator(u13);
	this->repoUtilizator.addUtilizator(u14);
	this->repoUtilizator.addUtilizator(u15);

	Prietenie p1(1, 2);
	Prietenie p2(1, 3);
	Prietenie p3(4, 7);
	Prietenie p4(5, 6);
	Prietenie p5(1, 11);
	Prietenie p6(12, 13);
	Prietenie p7(14, 7);
	Prietenie p8(8, 9);
	this->repoPrietenie.addPrieteni(p1);
	this->repoPrietenie.addPrieteni(p2);
	this->repoPrietenie.addPrieteni(p3);
	this->repoPrietenie.addPrieteni(p4);
	this->repoPrietenie.addPrieteni(p5);
	this->repoPrietenie.addPrieteni(p6);
	this->repoPrietenie.addPrieteni(p7);
	this->repoPrietenie.addPrieteni(p8);


	Eveniment e1("Banchet", "12B", 30);
	Eveniment e2("Nunta", "la tara", 300);
	Eveniment e3("Botez", "ortodox", 150);
	Eveniment e4("Zi de nastere", "Ana", 20);
	this->repoEveniment.addEveniment(e1);
	this->repoEveniment.addEveniment(e2);
	this->repoEveniment.addEveniment(e3);
	this->repoEveniment.addEveniment(e4);

	Mesaj m1("Bernadett", "Vivien", "bff");
	Mesaj m2("Bernadett", "Andreea", "bff");
	Mesaj m3("Madalina", "Anca", "nu se cunosc");
	Mesaj m4("Adalbert", "Mircea", "nu se cunosc");
	Mesaj m5("Monica", "Mihai", "dusmani");
	Mesaj m6("Sergiu", "Iancu", "bff");
	Mesaj m7("Vivien", "Mihai", "nu se cunosc");
	Mesaj m8("Eduard", "Monica", "nu se cunosc");
	Mesaj m9("Nelli", "Mircea", "dusmani");
	this->repoMesaj.addMesaj(m1);
	this->repoMesaj.addMesaj(m2);
	this->repoMesaj.addMesaj(m3);
	this->repoMesaj.addMesaj(m4);
	this->repoMesaj.addMesaj(m5);
	this->repoMesaj.addMesaj(m6);
	this->repoMesaj.addMesaj(m7);
	this->repoMesaj.addMesaj(m8);
	this->repoMesaj.addMesaj(m9);
}

UI::~UI()
{
}

void UI::runMenu()
{
	int optiune;
	while (true)
	{
		this->displayMenu();
		cin >> optiune;
		if (optiune == 1)
		{
			this->meniuEveniment();
		}
		if (optiune == 2)
		{
			this->meniuMesaj();
		}
		if (optiune == 3)
		{
			this->meniuPrieteni();
		}
		if (optiune == 4)
		{
			this->meniuUtilizator();
		}
		if (optiune == 6)
		{
			break;
		}
		if (optiune != 1 and optiune != 2 and optiune != 3 and optiune != 4 and optiune!=6 )
		{
			cout << "Optiune gresita! Reincercati!" << endl;
		}

	}
	
}

void UI::displayMenu()
{
	cout << "1. Eveniment" << endl;
	cout << "2. Mesaj" << endl;
	cout << "3. Prietenie" << endl;
	cout << "4. Utilizator" << endl;
	cout << "5. Retea" << endl;
	cout << "6. Iesire" << endl;
}

void UI::displayMenuEvenimente()
{
	cout << "1. Adaugare evenimente" << endl;
	cout << "2. Stergere evenimente" << endl;
	cout << "3. Afisare eveniment" << endl;
	cout << "4. Iesire meniu evenment" << endl;
}

void UI::displayMenuMesaj()
{
	cout << endl;
	cout << "1. Adaugare mesaje" << endl;
	cout << "2. Stergere mesaje" << endl;
	cout << "3. Afisare mesaje" << endl;
	cout << "4. Iesire meniu mesaje" << endl;
}

void UI::displayMenuPrieteni()
{
	cout << endl;
	cout << "1. Adaugare prieteni" << endl;
	cout << "2. Stergere prieteni" << endl;
	cout << "3. Afisare prieteni" << endl;
	cout << "4. Iesire meniu prieteni" << endl;
}

void UI::displayMenuUtilizator()
{
	cout << endl;
	cout << "1. Adaugare utilizator" << endl;
	cout << "2. Stergere utilizator" << endl;
	cout << "3. Afisare utilizator" << endl;
	cout << "4. Iesire meniu utilizator" << endl;
}

void UI::displayMenuRetea()
{

}

void UI::meniuEveniment()
{
	int optiune;
	while (true)
	{
		this->displayMenuEvenimente();
		cin >> optiune;
		if (optiune == 1)
		{
			this->uiAddEveniment();
		}	
		else if (optiune == 2)
		{
			this->uiDeleteEveniment();
		}	
		else if (optiune == 3)
		{
			this->uigetAllEveniment();
		}
		else if (optiune == 4)
		{
			break;
		}
		else if (optiune != 1 and optiune != 2 and optiune != 3 and optiune != 4 )
		{
			cout << "Optiune gresita! Reincercati!" << endl;
		}

	}
}

void UI::uiAddEveniment()
{
	cout << "Dati numele evenimenutlui: ";
	string nume, descriere;
	cin >> nume;
	cout << "Dati descriere evenimenutlui: ";
	cin >> descriere;
	cout << "Dati nr de participanti la eveniment: ";
	int nr;
	cin >> nr;
	Eveniment e(nume, descriere, nr);
	this->repoEveniment.addEveniment(e);
}

void UI::uiDeleteEveniment()
{
	cout << "Dati numarul evenimentului pe care il stergeti: ";
	int poz;
	cin >> poz;
	this->repoEveniment.deleteEveniment(poz);
}

void UI::meniuMesaj()
{
	Mesaj m;
	int optiune;
	while (true)
	{
		this->displayMenuMesaj();
		cin >> optiune;
		if (optiune == 1)
		{
			this->uiAddMesaj();
		}
		else if (optiune == 2)
		{
			this->uiDeleteMesaj();
		}
		else if (optiune == 3)
		{
			this->uiGetAllMesaj();
		}
		else if (optiune == 4)
		{
			break;
		}
		else if (optiune != 1 and optiune != 2 and optiune != 3 and optiune != 4)
		{
			cout << "Optiune gresita! Reincercati!" << endl;
		}

	}
}

void UI::uiAddMesaj()
{
	string receptor, expeditor;
	cout << "Dati numele receptorului: ";
	cin >> receptor;
	cout << "Dati descriere expeditorului: ";
	cin >> expeditor;
	cout << "Dati descrierea: ";
	string descriere;
	cin >> descriere;
	int ok1 = 0, ok2 = 0;
	for (int i = 0; i < this->repoMesaj.getAllMesaj().size(); i++)
	{
		if (this->repoUtilizator.getAllUtilizator().getPozNode(i).getNume() == receptor) ok1++;
		else if (this->repoUtilizator.getAllUtilizator().getPozNode(i).getNume() == expeditor) ok2++;
	}
	if (ok1 == 1 && ok2 == 1)
	{
		Mesaj m(expeditor, receptor, descriere);
		this->repoMesaj.addMesaj(m);
	}
	else
	{
		if (ok1 == 0)
			cout << "Nu exista utilizatorul cu numele receptorului dat!"<<endl;
		if (ok2 == 0)
			cout << "Nu exista utilizatorul cu numele expeditorului dat!"<<endl;
	}
}

void UI::uiDeleteMesaj()
{
	cout << "Dati numarul mesajului pe care il stergeti: ";
	int poz;
	cin >> poz;
	this->repoMesaj.deleteMesaj(poz);
}


void UI::meniuPrieteni()
{
	Prietenie p;
	int optiune;
	while (true)
	{
		this->displayMenuPrieteni();
		cin >> optiune;
		if (optiune == 1)
		{
			this->uiAddPrieteni();
		}
		else if (optiune == 2)
		{
			this->uiDeletePrieteni();
		}
		
		else if (optiune == 3)
		{
			this->uiGetAllPrieteni();
		}
		else if (optiune == 4)
		{
			break;
		}
		else if (optiune != 1 and optiune != 2 and optiune != 3 and optiune != 4 )
		{
			cout << "Optiune gresita! Reincercati!" << endl;
		}

	}
}

void UI::uiAddPrieteni()
{
	cout << "Dati id-ul primului prieten: ";
	int id1, id2;
	cin >> id1;
	cout << "Dati id-ul prietenului nr 2: ";
	cin >> id2;
	cout << "Dati descrierea: ";
	string descriere;
	cin >> descriere;
	int ok1 = 0, ok2=0;
	for (int i = 0; i < this->repoPrietenie.getAllPrieteni().size(); i++)
	{
		if (this->repoUtilizator.getAllUtilizator().getPozNode(i).getId() == id1) ok1++;
		if (this->repoUtilizator.getAllUtilizator().getPozNode(i).getId() == id2) ok2++;
	}
	if (ok1 && ok2)
	{
		Prietenie p(id1, id2);
		this->repoPrietenie.addPrieteni(p);
	}
	else
	{
		if (ok1 == 0)
			cout << "Nu exista utilizatorul cu id-ul 1  dat"<<endl;
	    else if (ok2 == 0)
			cout << "Nu exista utilizatorul cu id-ul 2 dat"<<endl;
	}
}

void UI::uiDeletePrieteni()
{
	cout << "Dati numarul prieteniei pe care il stergeti: ";
	int poz;
	cin >> poz;
	this->repoPrietenie.deletePrieteni(poz);

}

void UI::meniuUtilizator()
{
	Utilizator u;
	int optiune;
	while (true)
	{
		this->displayMenuUtilizator();
		cin >> optiune;
		if (optiune == 1)
		{
			this->uiAddUtilizator();
		}
		else if (optiune == 2)
		{
			this->uiDeleteUtilizator();
		}
		else if (optiune == 3)
		{
			this->uiGetAllUtilizator();
		}
		else if (optiune == 4)
		{
				break;
		}
		else if (optiune != 1 and optiune != 2 and optiune != 3 and optiune != 4)
		{
			cout << "Optiune gresita! Reincercati!" << endl;
		}

	}
}

void UI::uiAddUtilizator()
{
	cout << "Dati id-ul: ";
	int id, varsta;
	string nume;
	cin >> id;
	cout << "Dati numele: ";
	cin >> nume;
	cout << "Dati varsta: ";
	cin >> varsta;
	Utilizator u(id, nume, varsta);
	this->repoUtilizator.addUtilizator(u);
}

void UI::uiDeleteUtilizator()
{
	cout << "Dati numarul utilizatorului pe care il stergeti: ";
	int poz;
	cin >> poz;
	this->repoUtilizator.deleteUtilizator(poz);
}


void UI::uigetAllEveniment()
{
	cout << "Evenimentele adaugate sunt: ";
	cout << endl;
	Set<Eveniment>eveniment = this->repoEveniment.getAllEveniment();
	for (int i = 0; i < eveniment.size(); i++) {
		cout << "Evenimentul " << i + 1 <<" "<< eveniment.getPozNode(i) << endl;
	}
}

void UI::uiGetAllMesaj()
{
	cout << "Mesajele adaugate sunt: ";
	cout << endl;
	Set<Mesaj>mesaj = this->repoMesaj.getAllMesaj();
	for (int i = 0; i < mesaj.size(); i++) {
		cout << "Mesajul " << i+1 << " " << mesaj.getPozNode(i) << endl;
	}
}

void UI::uiGetAllPrieteni()
{
	cout << "Prieteniile adaugate sunt: ";
	cout << endl;
	Set<Prietenie>prietenie = this->repoPrietenie.getAllPrieteni();
	for (int i = 0; i < prietenie.size(); i++) {
		cout << "Prietenia " << i + 1 << " " << prietenie.getPozNode(i) << endl;
	}
}

void UI::uiGetAllUtilizator()
{
	cout << "Utilizatorii adaugati sunt: ";
	cout << endl;
	Set<Utilizator>utilizator = this->repoUtilizator.getAllUtilizator();
	for (int i = 0; i < utilizator.size(); i++) {
		cout << "Utilizatorul " << i + 1 << " " << utilizator.getPozNode(i) << endl;
	}
}
