#include <iostream>
#include <set>
#include <string>
#include <fstream>
#include <algorithm>

int main()
{

	std::string word;
	std::string myFile;
	int counter = 0;

	std::cout << "Please enter your file: ";
	std::cin >> myFile;

	std::ifstream MyReadFile(myFile);

	std::set<std::string> Set;

	while (MyReadFile >> word)
	{
		std::transform(word.begin(), word.end(), word.begin(), tolower);
		Set.insert(word);
	}
	for (auto word : Set)
	{
		std::cout << word << " ";
	}
	std::cout << "\nThis is how many unique words: " << Set.size();

	MyReadFile.close();
}