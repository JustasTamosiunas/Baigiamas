#pragma once
#include <msclr/marshal_cppstd.h>

std::string stringConvert(System::String^ x);
System::String^ stringConvert(std::string x);