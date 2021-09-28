#include <iostream>
#include <vector>
#include <fstream>
#include <math.h>
#include "func.h"

int main()
{
    unsigned number;
    unsigned temp;
    std::vector<unsigned> STable;
    std::ifstream fread("../simple_table.txt");

    std::cout << "Enter number: ";
    number = getValue();
    STable.reserve(78500);

    if(!fread.is_open())
        std::cout << "\nFile open error" << std::endl;
    else
    {
        while (fread >> temp)
            STable.emplace_back(temp);
        printDivider(number, STable);
    }

    return 0;
}
