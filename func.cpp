#include "func.h"
unsigned getValue()
{
    while(true)
    {
        unsigned int value;
        std::cin >> value;
        if(std::cin.fail() || value >= 1000000 || value <= 0)
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "\nWrong size, please re-enter.\n";
        }
        else
        {
            return value;
        }
    }
}

void printDivider(unsigned& number, std::vector<unsigned>& table)
{
    for(unsigned i = 0; i < table.size() ; ++i)
        if(number % table[i] == 0)
        {
            std::cout << table[i] << '\t';
            number = number / table[i];
            --i;
        }
}
