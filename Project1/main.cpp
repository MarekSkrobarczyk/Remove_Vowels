#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

bool isVowel(char toCheck); // Check which string elements are vowels
std::string removeVowel(const std::string& word); // Removing vowels from a string
std::vector<std::string> removeVowelsFromVector(const std::vector<std::string>& words); // Removing vowels from a vector of strings

int main()
{
    std::vector<std::string> a = { "Ala ma Kota", "Kot ma Ale", "Wszyscy mamy inflacje" };
    std::cout << a[0] << std::endl << a[1] << std::endl << a[2] << "\n\n\n";

    std::vector<std::string> b = removeVowelsFromVector(a);
    std::cout << b[0] << std::endl << b[1] << std::endl << b[2] << "\n\n\n";

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

std::string removeVowel(const std::string& word)
{
    std::string result = "";
    for (char c : word)
    {
        if (!isVowel(c))
        {
            result += c;
        }
    }
    return result;
}

std::vector<std::string> removeVowelsFromVector(const std::vector<std::string>& words)
{
    std::vector<std::string> result;
    for (const std::string& word : words)
    {
        result.push_back(removeVowel(word));
    }

   
    return result;
}
