#include <iostream>
#include <string>
#include <utility>

void printString(const std::string& s)
{
    for (std::size_t i = 0; i < s.size(); i++)
    {
        std::cout << s[i];
    }
}

int countChar(const std::string& s, char target)
{
    int count = 0;
    for (std::size_t i = 0; i < s.size(); i++)
    {
        if(s[i] == target)
        {
            count ++;
        }
    }
    return count;
}

void reverseString(std::string& s)
{
    for(std::size_t i = 0; i < s.size()/2; i++)
    {
        std::swap(s[i],s[s.size()-1-i]);
    }
}

bool isPalindrome(const std::string& s)
{
    for(std::size_t i = 0; i < s.size()/2; i++)
    {
        if (s[i] != s[s.size()-1-i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    //int index;
    //char c;
    std::string s;

    std::cin >> s;
    //std::cin >> c;
    //std::cin >> index;

    //std::cout << s[index] << '\n';
    //printString(s);
    //std::cout << countChar(s,c);
    /*reverseString(s);
    for(std::size_t i = 0; i < s.size(); i++)
    {
        std::cout << s[i];
    }*/
    if (isPalindrome(s))
        std::cout << "YES" << '\n';
    else
        std::cout << "NO" << '\n';

    return 0;
}