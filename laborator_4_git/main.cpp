#include <iostream>
#include "produs.h"
#include "repo.h"
#include "test_produs.h"
#include "test_repor.h"

void menu() {
    std::cout << "1. Adaugare produs" << '\n';
    std::cout << "2. Afisare produs" << '\n';
    std::cout << "3. exit" << '\n';

}

Produs addProduct(int pret) {
    Produs p;
    p = Produs(pret);
    return p;
}

int main()
{
    test_produs();
    test_repo();
    int opt, pret, size;
    Produs p;
    Produs* eleme;
    Repo r;
    r = Repo();
    while (true) {
        menu();
        std::cout << "opt: "; std::cin >> opt;
        switch (opt)
        {
        case 1:
            std::cout << "pret: "; std::cin >> pret;
            p = addProduct(pret);
            r.addProd(p);
            break;
        case 2:
            size = r.getSize();
            eleme = r.getAll();
            for (int i = 0; i < size; i++) {
                std::cout <<"produs: "<< i + 1 << " pret :" << eleme[i].getPret() << '\n';
                //nu am stiut sa adaug operatorul de afisare pentru produs asa ca am afisat doar pretul
                //pana data viitoare o sa implementez operatorul de afisare
            }
            break;
        case 3:
            break;
        default:
            break;
        }
    }
}
