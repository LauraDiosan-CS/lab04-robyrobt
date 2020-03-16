#include "test_produs.h"
#include "produs.h"
#include <cassert>

void test_produs() {
	Produs p1;
	p1 = Produs(34);
	assert(p1.getPret() == 34);
}