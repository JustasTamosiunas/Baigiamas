#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>
#include "convert.h"


class remontai {
public:
	//I�kvietimo info
	std::string data, I_laikas, I_aprasymas, I_kvietejas, I_telefonas, I_paskyrimas;
	//Atlikimo info
	bool atlikta;
	std::string A_data, A_laikas, A_aprasymas, A_meistras;
	std::string A_pastabos;
};
class irasas {
public:
	std::string savininkas, data, meistras, pagrindas, miestas, gatve, nr, telefonai;
};

class sutartis {
public:
	std::string numeris, tipas, data, iki;
};

class aparatas {
public:
	std::string ID, serija, nr, modelis;
	std::vector<irasas> aparatIrasai;
	std::vector<sutartis> aparatSutartys;
	std::vector<remontai> aparatRemontai;

};
void rezultatai();

template <typename T> // Sukuriamas template, pagal kur� galima rikiuoti �vairi� klasiu s�ra�us
bool dateSort(const T one, const T two) {
	int y1, m1, d1, y2, m2, d2;
	d1 = std::stoi(one.data.substr(0, 2)); // Abiej� objekt� datos suskirstomos � metus, m�nesius bei dienas.
	m1 = std::stoi(one.data.substr(3, 2));
	y1 = std::stoi(one.data.substr(6, 4));
	d2 = std::stoi(two.data.substr(0, 2));
	m2 = std::stoi(two.data.substr(3, 2));
	y2 = std::stoi(two.data.substr(6, 4));
	if (y1 > y2 || y2 > y1) // Patikrinama ar data1 didesn� u� data2. Jei datos lygios, visada gra�iname false.
		return y1 > y2;
	else if (m1 > m2 || m2 > m1)
		return m1 > m2;
	else if (d1 > d2 || d2 > d1)
		return d1 > d2;
	else
		return false;
}



