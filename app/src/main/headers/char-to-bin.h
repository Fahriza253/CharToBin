#ifndef CHARTOBIN
#define CHARTOBIN

#include <iostream>
#include <bitset>
#include <string>

std::string inputText(std::string message);
void convertToBinary(std::string text);

std::string inputText(std::string message)
{
	std::cerr << message;
	std::string buffer{};
	std::getline(std::cin, buffer);
	
	return buffer;	
}

void convertToBinary(std::string text)
{
	std::cerr << "Kalimat : " << text << "\n";

	for (char each : text)
	{
		std::bitset<8> binaryRep(each);
		std::cerr << "Karakter : " << each << "\n"
			<< "Biner    : " << binaryRep << "\n";
	}
	
}

#endif