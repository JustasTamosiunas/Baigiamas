#include "krovimas.h"

std::vector<aparatas> aparatuSarasas;
std::vector<std::string> aparataiCombo;

void ikrovimas() {
	//Pirma ikrauname aparatus (aparatai struct) eiliğkumas: ID, serija, nr, modelis;
	aparatuSarasas.clear();
	setlocale(LC_ALL, "Lithuanian");
	std::ifstream failas;
	int kart = 0;
	std::string tempCMB;
	failas.open("aparatai.dat");
	while (!failas.eof()) {
		std::string a; // Tikrinam ar failo pabaiga
		std::getline(failas, a, '^');
		if (a == "&&&")
			break;
		aparatas temp;
		aparatuSarasas.push_back(temp);
		aparatuSarasas[kart].ID = a;
		std::getline(failas, aparatuSarasas[kart].serija, '^');
		std::getline(failas, aparatuSarasas[kart].nr, '^');
		std::getline(failas, aparatuSarasas[kart].modelis, '^');
		failas.ignore(80, '\n');
		kart++;
	}
	failas.close();
	// Sutarèiø krovimas (sutartis struct) eil: aparatID, numeris, tipas, nuo, iki
	failas.open("sutartys.dat");
	while (!failas.eof()) {
		std::string temp;
		std::getline(failas, temp, '^');
		if (temp == "&&&")
			break;
		for (int i = 0; i < aparatuSarasas.size(); i++) {
			if (temp == aparatuSarasas[i].ID) {
				sutartis temp;
				aparatuSarasas[i].aparatSutartys.push_back(temp);
				std::getline(failas, aparatuSarasas[i].aparatSutartys.back().numeris, '^');
				std::getline(failas, aparatuSarasas[i].aparatSutartys.back().tipas, '^');
				std::getline(failas, aparatuSarasas[i].aparatSutartys.back().nuo, '^');
				std::getline(failas, aparatuSarasas[i].aparatSutartys.back().iki, '^');
				failas.ignore(80, '\n');
				break;
			}
		}
	}
	failas.close();
	//Irasu krovimas (irasai struct) eil: aparatId, savininkas, data, meistras, pagrindas, miestas, gatve, nr, telefonai
	failas.open("irasai.dat");
	while (!failas.eof()) {
		std::string temp;
		std::getline(failas, temp, '^');
		if (temp == "&&&")
			break;
		for (int i = 0; i < aparatuSarasas.size(); i++) {
			if (temp == aparatuSarasas[i].ID) {
				irasas temp;
				aparatuSarasas[i].aparatIrasai.push_back(temp);
				std::getline(failas, aparatuSarasas[i].aparatIrasai.back().savininkas, '^');
				std::getline(failas, aparatuSarasas[i].aparatIrasai.back().data, '^');
				std::getline(failas, aparatuSarasas[i].aparatIrasai.back().meistras, '^');
				std::getline(failas, aparatuSarasas[i].aparatIrasai.back().pagrindas, '^');
				std::getline(failas, aparatuSarasas[i].aparatIrasai.back().miestas, '^');
				std::getline(failas, aparatuSarasas[i].aparatIrasai.back().gatve, '^');
				std::getline(failas, aparatuSarasas[i].aparatIrasai.back().nr, '^');
				std::getline(failas, aparatuSarasas[i].aparatIrasai.back().telefonai, '^');
				failas.ignore(80, '\n');
				break;
			}
		}
	}
	failas.close();
	/*remontø krovimas (remontai struct) eil: aparatId I_data, I_laikas, I_aprasymas, I_kvietejas, I_telefonas, I_paskyrimas
		tikrinam ar uşpildyta antra dalis
		jei taip eil: atlikta, A_data, A_laikas, A_aprasymas, A_meistras, A_pastabos */
	failas.open("remontai.dat");
	while (!failas.eof()) {
		std::string temp;
		std::getline(failas, temp, '^');
		if (temp == "&&&")
			break;
		for (int i = 0; i < aparatuSarasas.size(); i++) {
			if (temp == aparatuSarasas[i].ID) {
				remontai temp;
				char test;
				std::string testa;
				aparatuSarasas[i].aparatRemontai.push_back(temp);
				std::getline(failas, aparatuSarasas[i].aparatRemontai.back().I_data, '^');
				std::getline(failas, aparatuSarasas[i].aparatRemontai.back().I_laikas, '^');
				std::getline(failas, aparatuSarasas[i].aparatRemontai.back().I_aprasymas, '^');
				std::getline(failas, aparatuSarasas[i].aparatRemontai.back().I_kvietejas, '^');
				std::getline(failas, aparatuSarasas[i].aparatRemontai.back().I_telefonas, '^');
				std::getline(failas, aparatuSarasas[i].aparatRemontai.back().I_paskyrimas, '^');
				failas.get(test);
				if (test == '\n') {
					break;
				}
				else {
					if (test == '1')
						aparatuSarasas[i].aparatRemontai.back().atlikta = true;
					else if (test == '0')
						aparatuSarasas[i].aparatRemontai.back().atlikta = false;
					failas.get(test);
					std::getline(failas, aparatuSarasas[i].aparatRemontai.back().A_data, '^');
					std::getline(failas, aparatuSarasas[i].aparatRemontai.back().A_laikas, '^');
					std::getline(failas, aparatuSarasas[i].aparatRemontai.back().A_aprasymas, '^');
					std::getline(failas, aparatuSarasas[i].aparatRemontai.back().A_meistras, '^');
					std::getline(failas, aparatuSarasas[i].aparatRemontai.back().A_pastabos, '^');
					failas.ignore(80, '\n');
					break;
				}
			}
		}
	}
	failas.close();
	failas.open("aparataiCombo.dat");
	while(!failas.eof()) {
		std::getline(failas, tempCMB);
		if (tempCMB == "&&&")
			break;
		else
			aparataiCombo.push_back(tempCMB);
	}
	return;
}

void saugojimas() {
	setlocale(LC_ALL, "Lithuanian");
	std::ofstream failas;
	//Pirma saugome remontus
	failas.open("remontai.dat");
	for (int i = 0; i < aparatuSarasas.size(); i++) {
		for (int j = 0; j < aparatuSarasas[i].aparatRemontai.size(); j++) {
			failas << aparatuSarasas[i].ID << '^' << aparatuSarasas[i].aparatRemontai[j].I_data << '^' << aparatuSarasas[i].aparatRemontai[j].I_laikas << '^'
				<< aparatuSarasas[i].aparatRemontai[j].I_aprasymas << '^' << aparatuSarasas[i].aparatRemontai[j].I_kvietejas
				<< '^' << aparatuSarasas[i].aparatRemontai[j].I_telefonas << '^' << aparatuSarasas[i].aparatRemontai[j].I_paskyrimas;
			if (aparatuSarasas[i].aparatRemontai[j].A_data != "") {
				if (aparatuSarasas[i].aparatRemontai[j].atlikta == true)
					failas << '^' << "1" << '^';
				else if (aparatuSarasas[i].aparatRemontai[j].atlikta == false)
					failas << '^' << "0" << '^';
				failas << aparatuSarasas[i].aparatRemontai[j].A_data << '^' << aparatuSarasas[i].aparatRemontai[j].A_laikas << '^'
					<< aparatuSarasas[i].aparatRemontai[j].A_aprasymas << '^' << aparatuSarasas[i].aparatRemontai[j].A_meistras
					<< '^' << aparatuSarasas[i].aparatRemontai[j].A_pastabos << '^' <<'\n';
			}
			else {
				failas << '^' << '\n';
			}
		}
	}
	failas << "&&&";
	failas.close();
	//Saugome sutartis
	failas.open("sutartys.dat");
	for (int i = 0; i < aparatuSarasas.size(); i++) {
		for (int j = 0; j < aparatuSarasas[i].aparatSutartys.size(); j++) {
			failas << aparatuSarasas[i].ID << '^' << aparatuSarasas[i].aparatSutartys[j].numeris << '^' << aparatuSarasas[i].aparatSutartys[j].tipas << '^' <<
				aparatuSarasas[i].aparatSutartys[j].nuo << '^' << aparatuSarasas[i].aparatSutartys[j].iki << '^' <<'\n';
		}
	}
	failas << "&&&";
	failas.close();
	failas.open("irasai.dat");
	for (int i = 0; i < aparatuSarasas.size(); i++) {
		for (int j = 0; j < aparatuSarasas[i].aparatIrasai.size(); j++) {
			failas << aparatuSarasas[i].ID << '^' << aparatuSarasas[i].aparatIrasai[j].savininkas << '^' << aparatuSarasas[i].aparatIrasai[j].data << '^' <<
				aparatuSarasas[i].aparatIrasai[j].meistras << '^' << aparatuSarasas[i].aparatIrasai[j].pagrindas << '^' << aparatuSarasas[i].aparatIrasai[j].miestas << '^' <<
				aparatuSarasas[i].aparatIrasai[j].gatve << '^' << aparatuSarasas[i].aparatIrasai[j].nr << '^' << aparatuSarasas[i].aparatIrasai[j].telefonai << '^' << '\n';
		}
	}
	failas << "&&&";
	failas.close();
	failas.open("aparatai.dat");
	for (int i = 0; i < aparatuSarasas.size(); i++) {
		failas << aparatuSarasas[i].ID << '^' << aparatuSarasas[i].serija << '^' << aparatuSarasas[i].nr << '^' << aparatuSarasas[i].modelis << '^' << '\n';
	}
	failas << "&&&";
	failas.close();
	failas.open("aparataiCombo.dat");
	for (int i = 0; i < aparataiCombo.size(); i++) {
		failas << aparataiCombo[i] << std::endl;
	}
	failas << "&&&";
	failas.close();
	return;
}

void check() {
}
