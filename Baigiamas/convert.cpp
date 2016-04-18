#include "convert.h"

std::string stringConvert(System::String ^ x) {
	return msclr::interop::marshal_as< std::string >(x);;
}

System::String ^ stringConvert(std::string x) {
	return gcnew System::String(x.c_str());
}
