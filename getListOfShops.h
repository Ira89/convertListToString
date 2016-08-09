#ifndef GET_LIST_OF_SHOPS
#define GET_LIST_OF_SHOPS

std::string getListOfShops(std::string fileName) {

    std::string listOfShops = "";
    std::ifstream clientFile(fileName);

    if(!clientFile) {
        std::cout << "Извините, не могу найти файл " << fileName << std::endl;
        std::cout << "Проверьте расположение файла и запустите программу еще раз" << std::endl;
        exit(-1);
    }
    else {
        std::string shop = "";
        while(getline(clientFile, shop)) {
            if(shop != "") listOfShops += ("'" + shop + "',");
        }
        clientFile.close();
    }

    int sizeStr = listOfShops.size();
    listOfShops[sizeStr - 1] = '\0';
    return listOfShops;
}

#endif // GET_LIST_OF_SHOPS