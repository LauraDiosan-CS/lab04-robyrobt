#pragma once
#include "produs.h"

class Repo {
	private:
		Produs elem[100];
		int size;
	public:
		Repo();
		void addProd(const Produs&);
		Produs* getAll();
		int getSize();
		~Repo();
};