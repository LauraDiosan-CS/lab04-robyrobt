#pragma once

class Produs {
	private:
		int pret;
	public:
		Produs();
		Produs(int);
		Produs(const Produs&);
		int getPret();
		void setPret(int);
		Produs& operator = (const Produs&);
		bool operator == (const Produs&);
		void getInfo();
		~Produs();
};