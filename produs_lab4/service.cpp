#include "service.h"

Service::Service() {

}

Service::Service(const Repo& r) {
	repo = r;
}

void Service::addProdus(Produs& p) {
	repo.addElem(p);
}

Produs* Service::getAll() {
	return repo.getAll();
}

int  Service::deleteProdus(Produs& p) {
	
	return repo.deleteElem(p);

}

void Service::updateProdus(Produs p, char* nume, char* data, int pret) {
	repo.updateElem(p, nume, data, pret);
}