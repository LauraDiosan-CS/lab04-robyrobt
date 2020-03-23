#include <iostream>
#include "repo.h"

Repo::Repo() {
	size = 0;
}

void Repo::addElem(const Produs& p) {
	elem[size++] = p;
}

void Repo::updateElem(Produs& p, char* nume_nou,char* data_nou ,int pret_nou) {
	for (int i = 0; i < size; i++) {
		if (elem[i] == p) {
			elem[i].setNume(nume_nou);
			elem[i].setData(data_nou);
			elem[i].setPret(pret_nou);
		}
	}
}

int Repo::deleteElem(Produs p) {
	for (int i = 0; i < size; i++) {
		if (elem[i] == p) {
			//delete elem[i];
			return 0;
		}                                                    
	}
	return -1;                         
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             

int Repo::getSize() {
	return size;
}

Produs* Repo::getAll() {
	return elem;
}

Repo::~Repo() {}