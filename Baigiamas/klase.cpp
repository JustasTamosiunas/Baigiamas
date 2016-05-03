#include "klase.h"
extern std::vector<aparatas> aparatuSarasas;

void rezultatai() { //funkcija i�ra�anti rezultat� fail�
	std::string dabLaikas = stringConvert(System::DateTime::Today.ToString("dd/MM/yyyy")); // Gaunam �iandienos laik�
	std::string minLaikas = stringConvert(System::DateTime::Today.AddDays(-30).ToString("dd/MM/yyyy")); // Gaunam dat� prie� 30 dien�.
	int dDab, mDab, yDab, dMin, mMin, yMin; // Kintamieji laikyti dabartin�ms bei minimalioms datoms
	int remontSkaic = 0;
	int sutartSkaic = 0;
	int iraSkaic = 0;
	int aRemontSkaic = 0;
	dDab = stoi(dabLaikas.substr(0, 2)); dMin = stoi(minLaikas.substr(0, 2));
	mDab = stoi(dabLaikas.substr(3, 2)); mMin = stoi(minLaikas.substr(3, 2));
	yDab = stoi(dabLaikas.substr(6, 4)); yMin = stoi(minLaikas.substr(6, 4));
	for (int i = 0; i < aparatuSarasas.size(); i++) {
		for (int j = 0; j < aparatuSarasas[i].aparatRemontai.size(); j++) {
			if (stoi(aparatuSarasas[i].aparatRemontai[j].data.substr(6, 4)) == yDab || stoi(aparatuSarasas[i].aparatRemontai[j].data.substr(6, 4)) == yMin) {
				if (stoi(aparatuSarasas[i].aparatRemontai[j].data.substr(3, 2)) == mDab || stoi(aparatuSarasas[i].aparatRemontai[j].data.substr(3, 2)) == mMin) {
					if (stoi(aparatuSarasas[i].aparatRemontai[j].data.substr(0, 2)) <= dDab || stoi(aparatuSarasas[i].aparatRemontai[j].data.substr(0, 2)) >= mMin) {
						remontSkaic++;
					}
				}
			}
		}
		for (int j = 0; j < aparatuSarasas[i].aparatRemontai.size(); j++) {
			if (aparatuSarasas[i].aparatRemontai[j].atlikta) {
				if (stoi(aparatuSarasas[i].aparatRemontai[j].A_data.substr(6, 4)) == yDab || stoi(aparatuSarasas[i].aparatRemontai[j].A_data.substr(6, 4)) == yMin) {
					if (stoi(aparatuSarasas[i].aparatRemontai[j].A_data.substr(3, 2)) == mDab || stoi(aparatuSarasas[i].aparatRemontai[j].A_data.substr(3, 2)) == mMin) {
						if (stoi(aparatuSarasas[i].aparatRemontai[j].A_data.substr(0, 2)) <= dDab || stoi(aparatuSarasas[i].aparatRemontai[j].A_data.substr(0, 2)) >= mMin) {
							aRemontSkaic++;
						}
					}
				}
			}
		}
		for (int j = 0; j < aparatuSarasas[i].aparatIrasai.size(); j++) {
			if (stoi(aparatuSarasas[i].aparatIrasai[j].data.substr(6, 4)) == yDab || stoi(aparatuSarasas[i].aparatIrasai[j].data.substr(6, 4)) == yMin) {
				if (stoi(aparatuSarasas[i].aparatIrasai[j].data.substr(3, 2)) == mDab || stoi(aparatuSarasas[i].aparatIrasai[j].data.substr(3, 2)) == mMin) {
					if (stoi(aparatuSarasas[i].aparatIrasai[j].data.substr(0, 2)) <= dDab || stoi(aparatuSarasas[i].aparatIrasai[j].data.substr(0, 2)) >= mMin) {
						iraSkaic++;
					}
				}
			}
		}
		for (int j = 0; j < aparatuSarasas[i].aparatSutartys.size(); j++) {
			if (stoi(aparatuSarasas[i].aparatSutartys[j].data.substr(6, 4)) == yDab || stoi(aparatuSarasas[i].aparatSutartys[j].data.substr(6, 4)) == yMin) {
				if (stoi(aparatuSarasas[i].aparatSutartys[j].data.substr(3, 2)) == mDab || stoi(aparatuSarasas[i].aparatSutartys[j].data.substr(3, 2)) == mMin) {
					if (stoi(aparatuSarasas[i].aparatSutartys[j].data.substr(0, 2)) <= dDab || stoi(aparatuSarasas[i].aparatSutartys[j].data.substr(0, 2)) >= mMin) {
						sutartSkaic++;
					}
				}
			}
		}
	}
	std::ofstream result;
	result.open("ataskaita.txt");
	result << "Per paskutines 30 dien�: " << '\n';
	result << std::setw(20) << "Nauj� i�kvietim�: " << "|" << std::setw(5) << remontSkaic << '\n' <<
		std::setw(20) << "Atlikt� i�kvietim�: " << "|" << std::setw(5) << aRemontSkaic << '\n' <<
		std::setw(20) << "Nauj� sutar�i�: " << "|" << std::setw(5) << sutartSkaic << '\n' <<
		std::setw(20) << "Nauj� �ra��: " << "|" << std::setw(5) << iraSkaic << '\n';
}


