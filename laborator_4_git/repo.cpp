#include "repo.h"

Repo::Repo() {
	size = 0;
}

void Repo::addProd(const Produs& prod) {
	elem[size++] = prod;
}

Produs* Repo::getAll() {
	return elem;
}

int Repo::getSize() {
	return size;
}

Repo::~Repo() {}