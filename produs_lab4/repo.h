#pragma once
#include <vector>
#include "produs.h"

class Repo {
	private:
		Produs elem[100];
		int size;
	public:
		Repo();
		int getSize();
		void addElem(const Produs&);
		void updateElem(Produs&, char*,char*, int);
		int deleteElem(Produs);
		Produs* getAll();

		~Repo();
};