#include<string.h>
#include "produs.h"

Produs::Produs() {
	this->nume = NULL;
	this->pret = 0;
	this->data = NULL;
}

Produs::Produs(char* nume,char* data, int pret) {
	this->nume = new char[strlen(nume) + 1];
	strcpy_s(this->nume, strlen(nume) + 1, nume);
	this->data = new char[strlen(data) + 1];
	strcpy_s(this->data, strlen(data) + 1, data);
	this->pret = pret;
}

int Produs::getPret() {
	return this->pret;
}


char* Produs::getNume() {
	return this->nume;
}

char* Produs::getData() {
	return this->data;
}

void Produs::setPret(int pret) {
	this->pret = pret;
}

void Produs::setNume(char* nume) {
	if (this->nume) {
		delete[] this->nume;
	}
	this->nume = new char[strlen(nume) + 1];
	strcpy_s(this->nume, strlen(nume) + 1, nume);
}

void Produs::setData(char* data) {
	if (this->data) {
		delete[] this->data;
	}
	this->data = new char[strlen(data) + 1];
	strcpy_s(this->data, strlen(data) + 1, data);
}

ostream& operator << (ostream& os, Produs p) {
	os << p.nume << " " << p.pret << " " << p.data;
	return os;
}

istream& operator >>(istream& is, Produs& p) {
	cout << "numele produsului: ";
	char* nume = new char[30];
	cin >> nume;
	cout << "pretul produsului: ";
	int pret;
	cin >> pret;
	cout << "data: ";
	char* data = new char[30];
	cin >> data;
	p.setNume(nume);
	p.setPret(pret);
	p.setData(data);
	return is;
}

bool Produs::operator == (const Produs& p) {
	if (strcmp(this->nume, p.nume) == 0 && this->pret == p.pret) {
		return true;
	}
	return false;
}

Produs Produs::operator = (const Produs& p) {
	if (this == &p) {
		return *this;
	}
	this->setNume(p.nume);
	this->setData(p.data);
	this->setPret(p.pret);
	return *this;
}

Produs::~Produs() {}