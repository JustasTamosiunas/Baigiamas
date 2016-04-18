#pragma once
#include <string>
#include <vector>


struct remontai {
	//Iğkvietimo info
	std::string I_data, I_laikas, I_aprasymas, I_kvietejas, I_telefonas, I_paskyrimas;
	//Atlikimo info
	bool atlikta;
	std::string A_data, A_laikas, A_aprasymas, A_meistras;
	std::string A_pastabos;
	void remontUpdateKviet(std::string I_data_N, std::string I_laikasN, std::string I_aprasymasN, std::string I_kvietejasN, std::string I_telefonasN, std::string I_paskyrimasN);
	void remontUpdateAtlik(bool atlinktaN, std::string A_dataN, std::string A_laikasN, std::string A_aprasymasN, std::string A_meistrasN, std::string A_pastabosN);
};

struct irasas {
	std::string savininkas, data, meistras, pagrindas, miestas, gatve, nr, telefonai;
	void irasasUpdate(std::string savininkasN, std::string dataN, std::string meistrasN, std::string pagrindasN, std::string miestasN, std::string gatveN, std::string nrN, std::string telefonaiN);
};

struct sutartis {
	std::string numeris, tipas, nuo, iki;
	void sutartisUpdate(std::string numerisN, std::string tipasN, std::string nuoN, std::string ikiN);
};

struct aparatas {
	std::string ID, serija, nr, modelis;
	std::vector<irasas> aparatIrasai;
	std::vector<sutartis> aparatSutartys;
	std::vector<remontai> aparatRemontai;
	void remontNaujas(std::string I_data, std::string I_laikas, std::string I_aprasymas, std::string I_kvietejas, std::string I_telefonas, std::string I_paskyrimas);
	void remontNaujas(std::string I_data, std::string I_laikas, std::string I_aprasymas, std::string I_kvietejas, std::string I_telefonas, std::string I_paskyrimas, bool atlikta, std::string A_data, std::string A_laikas, std::string A_aprasymas, std::string A_meistras, std::string A_pastabos);
	void irasasNaujas(std::string savininkas, std::string data, std::string meistras, std::string pagrindas, std::string miestas, std::string gatve, std::string nr, std::string telefonai);
	void sutartisNauja(std::string numeris, std::string tipas, std::string nuo, std::string iki);
	void aparatasUpdate(std::string serijaN, std::string nrN);
};

void aparatNaujas(std::string ID, std::string serija, std::string nr, std::string modelis);

