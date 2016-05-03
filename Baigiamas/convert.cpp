#include "convert.h"

std::string stringConvert(System::String ^ x) {
	msclr::interop::marshal_context context;
	return context.marshal_as<std::string>(x);
}

System::String ^ stringConvert(std::string x) {
	return gcnew System::String(x.c_str());
}
