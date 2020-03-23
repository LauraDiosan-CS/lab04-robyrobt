#include <cassert>
#include "teste_produs.h"
#include "produs.h"

void teste_produs() {
	Produs produs_1, produs_2;
	assert(produs_1.getPret() == 0);
	char* nume = new char[30];
	char* data = new char[30];
	strcpy_s(nume, strlen("masine") +1, "masina");
	strcpy_s(data, strlen("12/12/2020") + 1, "12/12/2020");
	produs_2.setNume(nume);
	produs_2.setData(data);
	produs_2.setPret(12);
	assert(produs_2.getPret() == 12);
}