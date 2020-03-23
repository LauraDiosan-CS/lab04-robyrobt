#pragma once
#include <vector>
#include "repo.h"

class Service {
	private:
		Repo repo;
	public:
		Service();
		Service(const Repo&);

		void addProdus(Produs&);
		int deleteProdus(Produs&);
		void updateProdus(Produs, char*, char*, int);
		Produs* getAll();

};