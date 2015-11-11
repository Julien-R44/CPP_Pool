#include <sstream>
#include <iostream>
#include <string>
#include <cmath>

double string_to_double( const std::string& s )
{
	std::istringstream i(s);
	double x;
	if (!(i >> x))
		return 0;
	return x;
}

int main(int argc, char const *argv[])
{
	if (argc < 2){
		std::cout << "Must have a string as argument." << std::endl;
		return 0;
	}
	int convInt = 0;
	float convFloat = 0.0f;
	double convDouble = 0.0;
	char convChar = '\0';
	bool converted = false;

	const std::string str = argv[1];
	try{
		convFloat = std::stof(str);
		if (str.find("f") != std::string::npos){
			convInt = static_cast<int>(convFloat);
			convDouble = static_cast<double>(convFloat);
			convChar = static_cast<char>(convFloat);
			std::cout << "Convert from float" << std::endl;
			converted = true;
		}
	}catch(std::exception& e){
	}
	if (!converted){
		try{
			convDouble = std::stod(str);
			convInt = static_cast<int>(convDouble);
			convChar = static_cast<char>(convDouble);
			convDouble = static_cast<double>(convDouble);
			std::cout << "Convert from double" << std::endl;
			converted = true;
		}catch(std::exception& e){
		}
	}

	if (!converted){
		if (std::istringstream(str) >> convInt){
			std::cout << "Convert from int" << std::endl;
			converted = true;
			convFloat = static_cast<float>(convInt);
			convDouble = static_cast<double>(convInt);
			convChar = static_cast<char>(convInt);
			converted = true;
		}
		else if (str == "nan"){
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: nanf" << std::endl;
			std::cout << "double: nanf" << std::endl;
		}
		else{
			convChar = argv[1][0];
			std::cout << "Convert from char" << std::endl;
			converted = true;
			convFloat = static_cast<float>(convChar);
			convDouble = static_cast<double>(convChar);
			convInt = static_cast<int>(convChar);
			converted = true;
		}
	}
	if (std::isnan(convFloat) || std::isinf(convFloat)){
		std::cout << "int: impossible" << std::endl;
		std::cout << "char: impossible" << std::endl;
	}else{
		std::cout << "int: " << convInt << std::endl;
		std::cout << "char: " << convChar << std::endl;
	}
	std::cout << "float: " << convFloat << "f" << std::endl;
	std::cout << "double: " << convDouble << std::endl;
	return 0;
}
