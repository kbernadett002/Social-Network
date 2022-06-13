#pragma once
#include "utilizator.h"
#include "prietenie.h"
#include "TAD-2.h"
#include "TAD-1.h"

class Retea {
private:
	Utilizator utilizator;
	Set<Prietenie>prietenie;
public:
	Retea();
	Retea(const Utilizator& u);

	bool operator==(const Retea& retea);
	
	~Retea() = default;
};