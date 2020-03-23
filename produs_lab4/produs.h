#pragma once
#include <iostream>

using namespace std;

class Produs {
	private:
		int pret;
		char* nume;
		char* data;
	public:
		Produs();
		Produs(char*,char*, int);
		
		char* getNume();
		int getPret();
		char* getData();

		void setNume(char*);
		void setPret(int);
		void setData(char*);

		bool operator == (const Produs&);
		Produs operator = (const Produs&);

		friend ostream& operator << (ostream& os, Produs p);
		friend istream& operator >> (istream&, Produs&);

		~Produs();

};