#include <cassert>
#include "teste_repo.h"
#include "produs.h"
#include "repo.h"

void TestRepo::testAddElem() {
	Repo r;
	char* nume_1 = new char[30];
	char* nume_2 = new char[30];
	char* data_1 = new char[30];
	char* data_2 = new char[30];
	strcpy_s(nume_1, sizeof(nume_1), "sare");
	strcpy_s(nume_2, sizeof(nume_2), "faina");
	strcpy_s(data_1, sizeof(data_1), "12/12/2010");
	strcpy_s(data_2, sizeof(data_2), "15/04/2019");
	r.addElem(Produs(nume_1,data_1, 10));
	r.addElem(Produs(nume_2,data_2, 30));
	//r.addElem(Produs("mere", 20));
	assert(r.getSize() == 2);
}

void TestRepo::testDeleteElem() {
	Repo r;
	char* nume_1 = new char[30];
	char* nume_2 = new char[30];
	char* data_1 = new char[30];
	char* data_2 = new char[30];
	strcpy_s(nume_1, sizeof(nume_1), "sare");
	strcpy_s(nume_2, sizeof(nume_2), "faina");
	strcpy_s(data_1, sizeof(data_1), "12/12/2010");
	strcpy_s(data_2, sizeof(data_2), "15/04/2019");
	r.addElem(Produs(nume_1, data_1, 10));
	r.addElem(Produs(nume_2, data_2, 30));
	r.deleteElem(Produs(nume_1,data_1, 10));
	assert(r.getSize() == 1);
}

void TestRepo::testUpdateElem() {
	Repo r;
	char* nume_1 = new char[30];
	char* nume_2 = new char[30];
	char* nume_3 = new char[30];
	char* data_1 = new char[30];
	char* data_2 = new char[30];
	char* data_3 = new char[30];
	strcpy_s(nume_1, sizeof(nume_1), "sare");
	strcpy_s(nume_2, sizeof(nume_2), "faina");
	strcpy_s(data_1, sizeof(data_1), "12/12/2010");
	strcpy_s(data_2, sizeof(data_2), "15/04/2019");
	strcpy_s(data_3, sizeof(data_3), "01/04/2020");
	r.addElem(Produs(nume_1, data_1, 10));
	r.addElem(Produs(nume_2, data_2, 30));
	r.updateElem(r.getAll()[0], nume_3,data_3, 5);
	assert(r.getAll()[0].getPret() == 5);
}