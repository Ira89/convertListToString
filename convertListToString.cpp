#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include "getFileName.h"
#include "getListOfShops.h"
#include "writeStringToFile.h"

int main() {

    system("chcp 1251 > nul");

    std::string nameClientFile = "";
    nameClientFile = getFileName();

    std::string listOfShops = "";
    listOfShops = getListOfShops(nameClientFile);

    writeStringToFile(listOfShops);
    std::cout << "Вы работаете с версией программы: 1.0.0" << std::endl << std::endl;

    system("pause");
    return 0;
}