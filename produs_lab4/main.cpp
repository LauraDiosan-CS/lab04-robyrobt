#include <iostream>
#include <vector>
#include "produs.h"
#include "repo.h"
#include "teste_produs.h"
#include "teste_repo.h"

using namespace std;

void mainMenu() {
    cout << "1. adaugare produs" << endl;
    cout << "2. afisare produse" << endl;
    //cout<<"3. modificare produs"<<endl;
    cout << "0. close" << endl;
}

void run() {
    int opt;
    bool gata = false;
    Repo r;
    while (!gata) {
        mainMenu();
        cout << "opt: "; cin >> opt;
        switch (opt)
        {
        case 1: {
            Produs p;
            cin >> p;
            r.addElem(p); break; 
        }
        case 2: {
            for (int i = 0; i < r.getSize(); i++) {
                cout << r.getAll()[i] << endl;
            } 
            break; 
        }
        case 3: {break; }
        case 0: {gata = true; break; }
        default:
            break;
        }
    }
}

int main()
{
    TestRepo test;
    teste_produs();
    //test.testAddElem();
    //test.testDeleteElem();
    //test.testUpdateElem();
    run();
}
