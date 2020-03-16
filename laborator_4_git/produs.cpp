#include "produs.h"
#include <iostream>
Produs::Produs() {
	pret = 0;
}

Produs::Produs(int pret) {
	this->pret = pret;
}

Produs::Produs(const Produs& prod) {
	this->pret = prod.pret;
}

int Produs::getPret() {
	return this->pret;
}

void Produs::setPret(int pret_n) {
	this->pret = pret_n;
}

Produs& Produs::operator = (const Produs& p) {
	if (this == &p) {
		return *this;
	}
	this->setPret(p.pret);
	return *this;
}

void Produs::getInfo() {
	std::cout << "pret: " << this->getPret() << '\n';
}

Produs::~Produs() {}