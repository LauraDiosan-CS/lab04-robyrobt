#include "test_repor.h"
#include "repo.h"
#include "produs.h"
#include <cassert>

void test_repo() {
	Repo r = Repo();
	Produs p1 = Produs(12), p2 = Produs(23);
	r.addProd(p1);
	assert(r.getSize() == 1);
	r.addProd(p2);
	assert(r.getSize() == 2);
}