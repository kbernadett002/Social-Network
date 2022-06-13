#include "retea.h"

Retea::Retea()
{
}

Retea::Retea(const Utilizator& u):utilizator(u){}

bool Retea::operator==(const Retea& retea)
{
    return utilizator==retea.utilizator;
}

