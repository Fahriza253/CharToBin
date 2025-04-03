#include <iostream>
#include <bitset>
#include <string>

std::string inputText(std::string message);
void convertToBinary(std::string text);

int main()
{
	std::string text = inputText("Masukan kalimat : "); 
	convertToBinary(text);
	
	return 0;
}

std::string inputText(std::string message)
{
	std::cerr << message;
	std::string buffer{};
	std::getline(std::cin, buffer);
	
	return buffer;	
}

void convertToBinary(std::string text)
{
	for (char each : text)
	{
		std::bitset<8> binaryRep(each);
		std::cerr << binaryRep << "\n";
	}
	
}
