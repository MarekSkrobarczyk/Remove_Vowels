#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

bool isVowel(char toCheck); // Check which string elements are vowels
std::string removeVowel(std::string); //Removing vowels from a string

int main()
{

	return 0;
}

bool isVowel(char toCheck)
{
	toCheck = std::tolower(toCheck);

	if (toCheck == 'a' || toCheck == 'e' || toCheck == 'i' || toCheck == 'o' || toCheck == 'u')
	{
		return true;
	}

	else
	{
		return false;
	}

}