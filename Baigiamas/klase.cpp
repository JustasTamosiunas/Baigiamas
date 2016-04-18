#include "klase.h"

extern std::vector<aparatas> aparatuSarasas;

void aparatas::irasasNaujas(std::string savininkas, std::string data, std::string meistras, std::string pagrindas, std::string miestas, std::string gatve, std::string nr, std::string telefonai) {
	irasas temp = {savininkas, data, meistras, pagrindas, miestas, gatve, nr, telefonai};
	aparatIrasai.push_back(temp);
}

void aparatas::sutartisNauja(std::string numeris, std::string tipas, std::string nuo, std::string iki) {
	sutartis temp = { numeris, tipas, nuo, iki };
	aparatSutartys.push_back(temp);
}

void aparatas::aparatasUpdate(std::string serijaN, std::string nrN) {
	serija = serijaN;
	nr = nrN;
}

void aparatas::remontNaujas(std::string I_data, std::string I_laikas, std::string I_aprasymas, std::string I_kvietejas, std::string I_telefonas, std::string I_paskyrimas) {
	remontai temp = { I_data, I_laikas, I_aprasymas, I_kvietejas, I_telefonas, I_paskyrimas };
	aparatRemontai.push_back(temp);
}

void aparatas::remontNaujas(std::string I_data, std::string I_laikas, std::string I_aprasymas, std::string I_kvietejas, std::string I_telefonas, std::string I_paskyrimas, bool atlikta, std::string A_data, std::string A_laikas, std::string A_aprasymas, std::string A_meistras, std::string A_pastabos) {
	remontai temp = { I_data, I_laikas, I_aprasymas, I_kvietejas, I_telefonas, I_paskyrimas, atlikta, A_data, A_laikas, A_aprasymas, A_meistras, A_pastabos };
	aparatRemontai.push_back(temp);
}

void irasas::irasasUpdate(std::string savininkasN, std::string dataN, std::string meistrasN, std::string pagrindasN, std::string miestasN, std::string gatveN, std::string nrN, std::string telefonaiN) {
	savininkas = savininkasN;
	data = dataN;
	meistras = meistrasN;
	pagrindas = pagrindasN;
	miestas = miestasN;
	gatve = gatveN;
	nr = nrN;
	telefonai = telefonaiN;
}

void remontai::remontUpdateKviet(std::string I_data_N, std::string I_laikasN, std::string I_aprasymasN, std::string I_kvietejasN, std::string I_telefonasN, std::string I_paskyrimasN) {
	I_data = I_data_N;
	I_laikas = I_laikasN;
	I_aprasymas = I_aprasymasN;
	I_kvietejas = I_kvietejasN;
	I_telefonas = I_telefonasN;
	I_paskyrimas = I_paskyrimasN;
}

void remontai::remontUpdateAtlik(bool atliktaN, std::string A_dataN, std::string A_laikasN, std::string A_aprasymasN, std::string A_meistrasN, std::string A_pastabosN) {
	atlikta = atliktaN;
	A_data = A_dataN;
	A_laikas = A_laikasN;
	A_aprasymas = A_aprasymasN;
	A_meistras = A_meistrasN;
	A_pastabos = A_pastabosN;
}

void sutartis::sutartisUpdate(std::string numerisN, std::string tipasN, std::string nuoN, std::string ikiN) {
	numeris = numerisN;
	tipas = tipasN;
	nuo = nuoN;
	iki = ikiN;
}

void aparatNaujas(std::string ID, std::string serija, std::string nr, std::string modelis) {
	aparatas temp = {ID, serija, nr, modelis};
	aparatuSarasas.push_back(temp);
}