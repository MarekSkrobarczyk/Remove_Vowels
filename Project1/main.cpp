#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

bool isVowel(char toCheck); // Check which string elements are vowels
auto removeVowel(std::vector<std::string> newWord); //Removing vowels from a string

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

auto removeVowel(std::vector<std::string> newWord)
{
	for (std::string a : newWord)
	{
		newWord.erase(std::remove_if(newWord.begin(), newWord.begin(), isVowel), newWord.begin());
	}
}